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

    public void AddToInventory(IPickeable pick, Vector3 scale)
    {
        _currentObject = pick;
        Mesh mesh = pick.gameObject.GetComponentInChildren<MeshFilter>().mesh;
        inventoryObjectModel.mesh = mesh;
        inventoryObjectModel.transform.localScale = scale;
        EnableModel(true);
    }

    public void EnableModel(bool enable)
    {
        inventoryObjectModel.gameObject.SetActive(enable);
    }

    public void CleanInventory()
    {
        _currentObject = null;
        EnableModel(false);
    }

    public BaseFood GetCurrentObjectAsFood()
    {
        if(_currentObject != null)
        {
            if (_currentObject.gameObject.TryGetComponent(out BaseFood food))
            {
                return food;
            }
            else
            {
                Debug.Log("El objeto del inventario no es comida");
                return null;
            }
        }

        return null;
    }
}
