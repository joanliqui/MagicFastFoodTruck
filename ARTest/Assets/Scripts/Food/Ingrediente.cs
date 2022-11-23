using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingrediente : BaseFood, IPickeable
{
    [SerializeField] GameObject modelObject;
    [SerializeField] GazeInteractable interactable;

    private new void Start()
    {
        base.Start();
        interactable = GetComponent<GazeInteractable>();
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
        inventory.AddToInventory(this, modelObject.transform.localScale, transform.localRotation);
    }
}
