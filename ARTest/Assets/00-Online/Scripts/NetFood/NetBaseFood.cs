using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class NetBaseFood : NetFoodTruckObject
{
    [SerializeField] protected string foodName;
    protected Inventory inventory;
    protected bool isInTable = false;
    public Action OnTakenFood;
    public Sprite foodSprite;
    public string FoodName { get => foodName; set => foodName = value; }


    protected void Start()
    {
        SetInventory();
    }

    protected void SetInventory()
    {
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
    }

    public void ActivateComponents()
    {
        GetComponent<Collider>().enabled = true;
        GetComponent<BaseFood>().enabled = true;
    }
    public override bool Equals(object obj)
    {
        var other = obj as NetBaseFood;

        if (other == null)
            return false;

        if (foodName != other.foodName)
            return false;

        return true;
    } 
}
