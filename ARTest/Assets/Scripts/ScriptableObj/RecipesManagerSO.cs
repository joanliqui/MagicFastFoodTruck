using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "RecipesManagerSO")]
public class RecipesManagerSO : ScriptableObject
{
    [SerializeField] List<RecipeSO> allRecipes;
 

    public RecipeSO RandomRecipe()
    {
        int n = Random.Range(0, allRecipes.Count);
        return allRecipes[n];
    }
}
