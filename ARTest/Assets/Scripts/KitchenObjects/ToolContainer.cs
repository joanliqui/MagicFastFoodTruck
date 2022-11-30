using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToolContainer : FoodTruckObject
{
    GazeInteractable inter;
    bool toolIn;
    [SerializeField] Tool tool;
    Inventory inv;
    Collider col;
    [SerializeField] MeshRenderer mesh;

    private void Start()
    {
        inter = GetComponent<GazeInteractable>();
        inv = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        col = GetComponent<Collider>();
        mat = mesh.sharedMaterial;

        toolIn = true;
        col.enabled = false;

        inter.OnGazeActivated.AddListener(Interact);
    }

    private void Interact()
    {
        if (!toolIn)
        {
            AddTool();
        }
    }

    private void AddTool()
    {
        if (inv.CntTool.Equals(tool))
        {
            tool.gameObject.SetActive(true);
            col.enabled = false;
            inv.CleanInventory();
        }
    }

    public void RemoveTool()
    {
        toolIn = false;
        col.enabled = true;
    }

}
