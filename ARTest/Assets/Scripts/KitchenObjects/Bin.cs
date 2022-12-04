using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bin : FoodTruckObject, IContainer
{
    GazeInteractableFood inter;
    Inventory inventory;

    private void Start()
    {
        inter = GetComponent<GazeInteractableFood>();
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        mat = GetComponentInChildren<MeshRenderer>().material;

        inter.OnGazeActivated.AddListener(PutIn);
    }
    public void PutIn(BaseFood food)
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

}
