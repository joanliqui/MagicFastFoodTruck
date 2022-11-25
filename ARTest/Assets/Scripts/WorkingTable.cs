using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorkingTable : FoodTruckObject, IContainer
{
    [System.Serializable]
    private class TableSockets
    {
        public Transform socketTransform;
        public bool isFull = false;

    }

    GazeInteractableFood interactable;
    [SerializeField] List<TableSockets> sockets;
    private Inventory inv;

    private void Start()
    {
        interactable = GetComponent<GazeInteractableFood>();
        inv = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();

        interactable.OnGazeActivated.AddListener(PutIn);
    }
    public void PutIn(BaseFood food)
    {
        if (food != null)
        {
            SetFoodOnTable(food);
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
                food.AvtivateComponents();
                sockets[i].isFull = true;
                return;
                //foreach (BaseFood item in IngredientListManager.Instance.IngredientManager.allIngredients)
                //{
                //    if (food.Equals(item))
                //    {
                //        GameObject o = Instantiate(item.gameObject, sockets[i].socketTransform.position, sockets[i].socketTransform.rotation);
                //        o.GetComponent<BaseFood>().SetInTable(true);
                //        sockets[i].isFull = true;

                //        return;
                //    }
                //}
            }
        }
    }

  
}
