using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingrediente : BaseFood, IPickeable
{
    [SerializeField] GameObject modelObject;
    private GazeInteractable interactable;
    [SerializeField] AudioClip clip;
    private new void Start()
    {
        base.Start();
        interactable = GetComponent<GazeInteractable>();
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
            if (clip)
            {
                inventory.PlayObjectSound(clip);
            }
            inventory.AddToInventory(this, Vector3.one, transform.localRotation, mat);
            OnTakenFood?.Invoke();
        }
    }
}
