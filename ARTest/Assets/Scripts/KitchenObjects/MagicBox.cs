using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class MagicBox : FoodTruckObject, IContainer
{

    [System.Serializable]
    private class IngredientBox
    {

        public bool isIn;
        public BaseFood ingredient;

        public IngredientBox(BaseFood ingredient)
        {
            this.ingredient = ingredient;
            this.isIn = false;
        }
    }

    [SerializeField] RecipeSO currentRecipe;
    Inventory inventory;
    GazeInteractableFood gazeInteractable;
    [SerializeField] List<IngredientBox> acceptedIngredients;
    [SerializeField] Transform buildSocket;
    [SerializeField] private Transform imagesLayout;
    private List<IngredientUI> images = new List<IngredientUI>();

    [ColorUsage(false, true)]
    [SerializeField] Color errorColor;
    [ColorUsage(false, true)]
    [SerializeField] Color correctColor;
    [ColorUsage(false, true)]
    [SerializeField] private Color matNormalColor;

    private Animator anim;
    private void Start()
    {
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        gazeInteractable = GetComponent<GazeInteractableFood>();
        mat.SetColor("_EmissionColor", matNormalColor);
        anim = GetComponent<Animator>();

        //Suscripcion a los eventos
        gazeInteractable.OnGazeActivated.AddListener(PutIn);
        gazeInteractable.OnGazeEnter.AddListener(ActivateGlow);
        foreach (Transform item in imagesLayout)
        {
            images.Add(item.GetComponent<IngredientUI>());
        }

        foreach (IngredientUI item in images)
        {
            item.ToggleEnableImage(false);
        }
    }

    public void PutIn(BaseFood food)
    {
        if (CheckIfInRecipe(food))
        {
            Debug.Log("IsIn");
            CheckUITick(food);
            inventory.CleanInventory();
        }

        CheckCompletedRecipe();
    }

    private void CheckUITick(BaseFood food)
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

        foreach (IngredientBox item in acceptedIngredients)
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
    }


    private bool CheckIfInRecipe(BaseFood ingrediente)
    {
        foreach (IngredientBox item in acceptedIngredients)
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

    private void IngredientInside(IngredientBox ing)
    {
        Debug.Log(ing.ingredient.FoodName + " metido");
        ing.isIn = true;
    }

    public void UpdateIngredientBoxList(RecipeSO recipe)
    {
        currentRecipe = recipe;
        acceptedIngredients = new List<IngredientBox>();

        for (int i = 0; i < images.Count; i++)//Resetear las imagenes
        {
            images[i].ClearImage();
        }

        for (int i = 0; i < recipe.ingredients.Count; i++)
        {
            IngredientBox ing = new IngredientBox(recipe.ingredients[i]);
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

    public void ActivateGlow(BaseFood food)
    {
        if(mat != null)
        {
            if(food != null)
            {
                foreach (IngredientBox item in acceptedIngredients)
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


