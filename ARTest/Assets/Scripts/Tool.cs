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

    public void Pick()
    {
        inventory.AddToInventory(this, givingScale, rotator.localRotation);
    }
}
