using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingrediente : BaseFood, IPickeable
{
    [SerializeField] GameObject modelObject;
    private GazeInteractable interactable;

    private new void Start()
    {
        base.Start();
        interactable = GetComponent<GazeInteractable>();
        mat = modelObject.GetComponent<MeshRenderer>().material;

        interactable.OnGazeActivated.AddListener(InteractWithIngredient);
    }

    private void InteractWithIngredient()
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
        inventory.AddToInventory(this, Vector3.one, transform.localRotation, mat);
    }
}
