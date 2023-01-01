using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetWorkingTable : NetFoodTruckObject, IContainer, INetInventory
{
    public bool isVR = true;
    [System.Serializable]
    private class TableSockets
    {
        public Transform socketTransform;
        public bool isFull = false;

    }

    GazeInteractableFood interactable;
    [SerializeField] List<TableSockets> sockets;
    private NetInventory inv;

    private void Start()
    {
        if (isVR)
        {
            interactable = GetComponent<GazeInteractableFood>();
            if(interactable != null)
            {
                interactable.OnGazeActivated.AddListener(PutIn);
            }
        }
    }

    public void PutIn(BaseFood food)
    {
        if (food != null)
        {
            SetFoodOnTable(food);
            if(inv != null)
                inv.CleanInventory();
        }
    }

    private void SetFoodOnTable(BaseFood food)
    {
        for (int i = 0; i < sockets.Count; i++)
        {
            if (!sockets[i].isFull)
            {
                food.gameObject.transform.parent = null;
                food.gameObject.transform.SetPositionAndRotation(sockets[i].socketTransform.position, sockets[i].socketTransform.rotation);
                food.ActivateComponents();
                if(food.TryGetComponent<IngredienteCortable>(out IngredienteCortable ic))
                {
                    ic.onFoodCut += ctx => 
                    {
                        ctx.OnTakenFood += () => sockets[i].isFull = false;
                    };
                }
                food.OnTakenFood += () => sockets[i].isFull = false;
                sockets[i].isFull = true;
                return;
            }
        }
    }

    public void SetInventory(NetInventory inv)
    {
        this.inv = inv;
    }
}
