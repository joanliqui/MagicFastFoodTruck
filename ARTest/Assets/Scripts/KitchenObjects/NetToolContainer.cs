using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetToolContainer : FoodTruckObject, INetInventory
{
    NetGazeInteractable inter;
    bool toolIn;
    [SerializeField] Tool tool;
    NetInventory inv;
    Collider col;
    [SerializeField] MeshRenderer mesh;

    private void Start()
    {
        inter = GetComponent<NetGazeInteractable>();
        col = GetComponent<Collider>();
        mat = mesh.sharedMaterial;

        toolIn = true;
        col.enabled = false;
        if(inter != null)
            inter.OnGazeActivated.AddListener(Interact);
    }

    public void Interact()
    {
        if (!toolIn)
        {
            AddTool();
        }
    }

    private void AddTool()
    {
        if(inv != null)
        {
            if (inv.CntTool.Equals(tool))
            {
                tool.gameObject.SetActive(true);
                col.enabled = false;
                inv.CleanInventory();
            }
        }
    }

    public void RemoveTool()
    {
        toolIn = false;
        col.enabled = true;
    }

    public void SetInventory(NetInventory inv)
    {
        this.inv = inv;
    }
}
