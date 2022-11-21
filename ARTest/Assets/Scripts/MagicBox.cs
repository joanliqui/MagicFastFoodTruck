using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

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
    

    private void Start()
    {
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        gazeInteractable = GetComponent<GazeInteractableFood>();
        //Suscripcion a los eventos

        gazeInteractable.OnGazeActivated.AddListener(PutIn);

        UpdateIngredientBoxList();
    }

    public void PutIn(BaseFood food)
    {
        if (CheckIfInRecipe(food))
        {
            Debug.Log("IsIn");
            inventory.CleanInventory();
        }

        CheckCompletedRecipe();
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
            SpawnFoodBuild();
        }
    }

    public void SpawnFoodBuild()
    {
        if (currentRecipe.plate.playePrefab)
        {
            Instantiate(currentRecipe.plate.playePrefab, buildSocket.position, Quaternion.identity);
        }
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

    public void UpdateIngredientBoxList()
    {
        acceptedIngredients = new List<IngredientBox>();
        foreach (BaseFood item in currentRecipe.ingredients)
        {
            IngredientBox ing = new IngredientBox(item);
            acceptedIngredients.Add(ing);
        }
    }
}


