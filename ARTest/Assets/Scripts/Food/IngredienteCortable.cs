using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IngredienteCortable : BaseFood, ICutable, IPickeable
{
    bool canBeCuted = true;
    [SerializeField] string neededTool = "Knife";
    [SerializeField] GameObject modelObject;
    [SerializeField] GameObject cutedObject;
    GazeInteractable interactable; 
    private new void Start()
    {
        base.Start();
        mat = modelObject.GetComponent<MeshRenderer>().material;
        interactable = GetComponent<GazeInteractable>();
        interactable.OnGazeActivated.AddListener(Activated);
    }

    void Activated()
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
        Instantiate(cutedObject, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }


    public void Drop()
    {
        inventory.CleanInventory();
    }

    public void Pick()
    {
        inventory.AddToInventory(this, modelObject.transform.localScale, transform.localRotation);
    }

    private bool CanBeCuted()
    {
        bool canCut = false;

        return canCut;
    }
}
