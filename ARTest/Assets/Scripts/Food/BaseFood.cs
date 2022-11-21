using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BaseFood : FoodTruckObject
{
    [SerializeField] protected string foodName;
    protected Inventory inventory;

    

    public string FoodName { get => foodName; set => foodName = value; }

    public override bool Equals(object obj)
    {
        var other = obj as BaseFood;

        if (other == null)
            return false;

        if (foodName != other.foodName)
            return false;

        return true;
    }
}
