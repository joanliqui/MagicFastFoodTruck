using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VanHandler : MonoBehaviour
{
    [SerializeField] MagicBox box;


    public void UpdateVanClientRequest(RecipeSO recipe)
    {
        box.UpdateIngredientBoxList(recipe);
    }
}
