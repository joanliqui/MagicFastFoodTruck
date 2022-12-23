using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetIngrediente : NetBaseFood, IPickeable
{
    [SerializeField] GameObject modelObject;
    private NetGazeInteractable interactable;

    private  void Start()
    {
        interactable = GetComponent<NetGazeInteractable>();
        mat = modelObject.GetComponent<MeshRenderer>().material;
        if(interactable != null)
            interactable.OnGazeActivated.AddListener(InteractWithIngredient);
    }

    public void InteractWithIngredient()
    {
        if (inventory != null)
        {
            Pick();
        }
    }
    public void Drop()
    {
        inventory.CleanInventory();
    }


    public void Pick()
    {
        if(inventory.CntTool == null)
        {
            inventory.AddToInventory(this, Vector3.one, transform.localRotation, mat);
            OnTakenFood?.Invoke();
        }
    }
}
