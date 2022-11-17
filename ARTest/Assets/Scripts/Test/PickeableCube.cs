using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickeableCube : FoodTruckObject, IPickeable
{
    public void Drop(Inventory inventory)
    {
        
    }

    public void Pick(Inventory inventory)
    {
        inventory.AddToInventory(this);
        Destroy(gameObject);
    }

}
