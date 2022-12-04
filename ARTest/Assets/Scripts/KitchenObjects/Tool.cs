using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tool : FoodTruckObject, IPickeable
{
    [SerializeField] string toolName;
    [SerializeField] float scaleModel;
    [SerializeField] Transform rotator;

    Inventory inventory;
    GazeInteractable interactable;
    Vector3 givingScale;
    private void Start()
    {
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        interactable = GetComponent<GazeInteractable>();
        givingScale = new Vector3(scaleModel, scaleModel, scaleModel);
        mat = GetComponentInChildren<MeshRenderer>().material;
        if(interactable != null)
            interactable.OnGazeActivated.AddListener(Pick);
    }

    public void Drop()
    {
        inventory.CleanInventory();
    }

    public bool Equals(string name)
    {

        if (name == null)
            return false;

        if (toolName != name)
            return false;

        return true;
    }

    public bool Equals(Tool other)
    {
        if (other == null)
            return false;
        else if(toolName != other.toolName)
            return false;

        return true;
        
    }

    public void Pick()
    {
        if(rotator != null)
        {
            inventory.AddToInventory(this, givingScale, rotator.localRotation, mat);
        }
        else
        {
            inventory.AddToInventory(this, givingScale, Quaternion.identity, mat);
        }
    }
}
