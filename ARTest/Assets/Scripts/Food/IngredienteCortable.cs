using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IngredienteCortable : Ingrediente, ICutable
{
    public void Cut()
    {
        throw new System.NotImplementedException();
    }

    private bool CanBeCuted()
    {
        bool canCut = false;

        return canCut;
    }
}
