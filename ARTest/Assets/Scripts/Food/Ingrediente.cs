using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingrediente : BaseFood, IPickeable
{
    [SerializeField] GameObject modelObject;
    public void Drop(Inventory inventory)
    {
        inventory.CleanInventory();
    }

    public void Pick(Inventory inventory)
    {
        inventory.AddToInventory(this, modelObject.transform.localScale);
    }
}
