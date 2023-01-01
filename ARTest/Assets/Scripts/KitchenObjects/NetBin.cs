using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetBin : FoodTruckObject, INetInventory
{
    NetGazeInteractableFood inter;
    NetInventory inventory;

    private void Start()
    {
        inter = GetComponent<NetGazeInteractableFood>();
        mat = GetComponentInChildren<MeshRenderer>().material;

        inter.OnGazeActivated.AddListener(PutIn);
    }
    public void PutIn(NetBaseFood food)
    {
        DeleteFood();
    }

    private void DeleteFood()
    {
        if(inventory != null)
        {
            inventory.CleanInventory();
        }
    }

    public void SetInventory(NetInventory inv)
    {
        inventory = inv;
    }
}
