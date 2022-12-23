using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public abstract class NetBaseFood : NetFoodTruckObject
{
    [SerializeField] protected string foodName;
    protected bool isInTable = false;
    public Action OnTakenFood;
    public Sprite foodSprite;
    
    protected NetInventory inventory;
    public string FoodName { get => foodName; set => foodName = value; }

    private void Awake()
    {
        
    }


    public void SetInventory(NetInventory inv)
    {
        inventory = inv;
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
