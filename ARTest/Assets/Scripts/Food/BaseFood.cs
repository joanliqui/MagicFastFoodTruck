using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BaseFood : FoodTruckObject
{
    [SerializeField] protected string foodName;
    protected Inventory inventory;
    protected bool isInTable = false;
    

    public string FoodName { get => foodName; set => foodName = value; }

    protected void Start()
    {
        SetInventory();
    }

    protected void SetInventory()
    {
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
    }

    public void AvtivateComponents()
    {
        GetComponent<Collider>().enabled = true;
        GetComponent<BaseFood>().enabled = true;
    }
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
