using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    private IPickeable _currentObject;
    [SerializeField] MeshFilter inventoryObjectModel;
    [SerializeField] GazeInteractor interactor;
    private Tool cntTool;

    public IPickeable CurrentObject 
    { 
        get 
        {
            return _currentObject;
        }  
        set 
        { 
            if(value.gameObject.TryGetComponent<Tool>(out Tool t))
            {
                Debug.Log("Is a tool: " + t.name);
                cntTool = t;
                _currentObject = value; 
            }
            else
            {
                _currentObject = value; 
            }
        }  
    }

    public Tool CntTool { get => cntTool; set => cntTool = value; }

    private void Start()
    {
        EnableModel(false);
    }

    public void AddToInventory(IPickeable pick, Vector3 scale, Quaternion rotation)
    {
        CurrentObject = pick;
        Mesh mesh = pick.gameObject.GetComponentInChildren<MeshFilter>().mesh;
        inventoryObjectModel.mesh = mesh;
        inventoryObjectModel.transform.localScale = scale;
        inventoryObjectModel.transform.localRotation = rotation;
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

    public void CanInteract()
    {
        if(this._currentObject != null)
        {

        }
    }
}
