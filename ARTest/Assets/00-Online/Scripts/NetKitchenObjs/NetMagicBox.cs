using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class NetMagicBox : NetFoodTruckObject, INetInventory
{

    [System.Serializable]
    private class NetIngredientBox
    {

        public bool isIn;
        public NetBaseFood ingredient;

        public NetIngredientBox(NetBaseFood ingredient)
        {
            this.ingredient = ingredient;
            this.isIn = false;
        }
    }

    NetInventory inventory;
    NetGazeInteractableFood gazeInteractable;

    //Recipe Related
    [SerializeField] NetRecipeSO currentRecipe;
     private List<NetIngredientBox> acceptedIngredients;
    [SerializeField] Transform buildSocket;

    //UI Related
    [SerializeField] private Transform imagesLayout;
    private List<NetIngredientUI> images = new List<NetIngredientUI>();

    [ColorUsage(false, true)]
    [SerializeField] Color errorColor;
    [ColorUsage(false, true)]
    [SerializeField] Color correctColor;
    [ColorUsage(false, true)]
    [SerializeField] private Color matNormalColor;


    //Evento
    [SerializeField] UnityEvent onFoodBuild;

    private Animator anim;
    private void Start()
    {
        mat.SetColor("_EmissionColor", matNormalColor);
        anim = GetComponent<Animator>();
        gazeInteractable = GetComponent<NetGazeInteractableFood>();

        gazeInteractable.SetInventory(inventory);

        //Suscripcion a los eventos
        if(gazeInteractable != null)
        {
            gazeInteractable.OnGazeActivated.AddListener(PutIn);
            gazeInteractable.OnGazeEnter.AddListener(ActivateGlow);
        }
        foreach (Transform item in imagesLayout)
        {
            images.Add(item.GetComponent<NetIngredientUI>());
        }

        foreach (NetIngredientUI item in images)
        {
            item.ToggleEnableImage(false);
        }

    }

    public void SetInventory(NetInventory inv)
    {
        inventory = inv;
    }
    public void PutIn(NetBaseFood food)
    {
        if (CheckIfInRecipe(food))
        {
            Debug.Log("IsIn");
            CheckUITick(food);
            inventory.CleanInventory();
        }

        CheckCompletedRecipe();
    }

    private void CheckUITick(NetBaseFood food)
    {
        for (int i = 0; i < images.Count; i++)
        {
            if (images[i].Fill)
            {
                if (images[i].Food.Equals(food))
                {
                    images[i].ToogleFoodTick(true);
                }
            }
            else return;
        }
    }
    private void CheckCompletedRecipe()
    {
        int t = 0;

        foreach (NetIngredientBox item in acceptedIngredients)
        {
            if (item.isIn)
            {
                t++;
            }
        }

        if(t >= acceptedIngredients.Count)
        {
            ProcesOfSpawnFoodBuild();
        }
    }

    public void ProcesOfSpawnFoodBuild()
    {
        if (currentRecipe.plate.playePrefab)
        {
            anim.SetTrigger("BuildFood");
        }
    }

    public void InstantiateViaAnimation()
    {
        Instantiate(currentRecipe.plate.playePrefab, buildSocket.position, Quaternion.identity);
        onFoodBuild?.Invoke();
    }


    private bool CheckIfInRecipe(NetBaseFood ingrediente)
    {
        foreach (NetIngredientBox item in acceptedIngredients)
        {
            if (item.ingredient.Equals(ingrediente))
            {
                if (!item.isIn)
                {
                    
                    IngredientInside(item);
                    return true;
                }
                else
                {
                    Debug.LogWarning("Ya esta dentro");
                    return false;
                }
            }
        }
        return false;
    }

    private void IngredientInside(NetIngredientBox ing)
    {
        Debug.Log(ing.ingredient.FoodName + " metido");
        ing.isIn = true;
    }

    public void UpdateIngredientBoxList(NetRecipeSO recipe)
    {
        currentRecipe = recipe;
        acceptedIngredients = new List<NetIngredientBox>();

        for (int i = 0; i < images.Count; i++)//Resetear las imagenes
        {
            images[i].ClearImage();
        }

        for (int i = 0; i < recipe.ingredients.Count; i++)
        {
            NetIngredientBox ing = new NetIngredientBox(recipe.ingredients[i]);
            acceptedIngredients.Add(ing);
            images[i].AddImage(ing.ingredient);
            images[i].ToggleEnableImage(true);
        }

        for (int i = 0; i < images.Count; i++)
        {
            if (!images[i].Fill)
            {
                images[i].ClearImage();
                images[i].ToggleEnableImage(false);
            }
        }
    }

    public void ActivateGlow(NetBaseFood food)
    {
        if(mat != null)
        {
            if(food != null)
            {
                if(acceptedIngredients.Count > 0)
                {
                    foreach (NetIngredientBox item in acceptedIngredients)
                    {
                        if (item.ingredient.Equals(food))
                        {
                            if (!item.isIn)
                            {
                                mat.SetColor("_EmissionColor", correctColor);
                                mat.SetInt(_canShinePropertie, 1);
                                return;
                            }
                        }
                    }
                }
                mat.SetColor("_EmissionColor", errorColor);
                mat.SetInt(_canShinePropertie, 1);
            }
        }
    }

    public override void ToogleGlow(bool glow)
    {
        if (mat != null)
        {
            if (!glow)
            {
                mat.SetColor("_EmissionColor", matNormalColor);
            }
        }
    }
    //public void ActivateGlow(BaseFood food)
    //{
    //    if(mat != null)
    //    {
    //        if(food != null)
    //        {
    //            foreach (IngredientBox item in acceptedIngredients)
    //            {
    //                if (item.ingredient.Equals(food))
    //                {
    //                    if (!item.isIn)
    //                    {
    //                        mat.SetColor("_ShineColor", matNormalColor);
    //                        mat.SetInt(_canShinePropertie, 1);
    //                        return;
    //                    }
    //                }
    //            }
    //        }
    //        mat.SetColor("_ShineColor", errorColor);
    //        mat.SetInt(_canShinePropertie, 1);
    //    }
    //}

}


