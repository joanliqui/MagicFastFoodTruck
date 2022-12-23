using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetIngredienteCortable : NetBaseFood, ICutable, IPickeable
{
    bool canBeCuted = true;
    [SerializeField] string neededTool = "Knife";
    [SerializeField] GameObject modelObject;
    [SerializeField] GameObject cutedObject;
    GazeInteractable interactable;

    public delegate void OnCuted(BaseFood cortable);
    public event OnCuted onFoodCut;
    private void Start()
    {
        mat = modelObject.GetComponent<MeshRenderer>().material;
        interactable = GetComponent<GazeInteractable>();
        if(interactable != null)
            interactable.OnGazeActivated.AddListener(Activated);
    }

    public void Activated()
    {
        if (inventory.CntTool != null && inventory.CntTool.Equals(neededTool))
        {
            if (canBeCuted)
            {
                Cut();
                return;
            }
            else
            {
                Pick();
            }
        }
        else
        {
            Pick();
        }
    }

    public void Cut()
    {
        GameObject o = Instantiate(cutedObject, transform.position, Quaternion.identity);
        BaseFood c = o.GetComponent<Ingrediente>();
        onFoodCut?.Invoke(c);
        Destroy(gameObject);
    }

    public void Drop()
    {
        inventory.CleanInventory();
    }

    public void Pick()
    {
        inventory.AddToInventory(this, modelObject.transform.localScale, transform.localRotation, mat);
    }

    private bool CanBeCuted()
    {
        bool canCut = false;

        return canCut;
    }
}
