using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARClient : MonoBehaviour
{
    [SerializeField] RecipesManagerSO allRecipes;
    [SerializeField] MagicBox mb;


    private void Start()
    {
        OrderPlate();
    }
    public void OrderPlate()
    {
        mb.UpdateIngredientBoxList(allRecipes.RandomRecipe());
    }
}
