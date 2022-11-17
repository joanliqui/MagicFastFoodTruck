using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    private IPickeable _currentObject;
    [SerializeField] MeshFilter inventoryObjectModel;

    private void Start()
    {
        EnableModel(false);
    }

    public void AddToInventory(IPickeable pick)
    {
        _currentObject = pick;
        Mesh mesh = pick.gameObject.GetComponent<MeshFilter>().mesh;
        inventoryObjectModel.mesh = mesh;
        EnableModel(true);
    }

    public void EnableModel(bool enable)
    {
        inventoryObjectModel.gameObject.SetActive(enable);
    }

    public void CleanInvemtory()
    {
        _currentObject = null;
    }
}
