using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    private IPickeable _pickableObject;
    
    [SerializeField] GazeInteractor interactor;
    private Tool cntTool;
    
    [SerializeField] Transform socketObj;
    [SerializeField] Material holoMat;

    [SerializeField] MeshFilter inventoryObjectModel;

    public IPickeable PickableObject 
    { 
        get 
        {
            return _pickableObject;
        }  
        set 
        { 
            if(value.gameObject.TryGetComponent<Tool>(out Tool t))
            {
                Debug.Log("Is a tool: " + t.name);
                cntTool = t;
            }
            
            _pickableObject = value; 
            
        }  
    }

    public Tool CntTool { get => cntTool; set => cntTool = value; }

    private void Start()
    {
        EnableModel(false);
    }

    //Primera verision quew actuializa solo la mesh
    public void AddToInventory(IPickeable pick, Vector3 scale, Quaternion rotation)
    {
        PickableObject = pick;
        Mesh mesh = pick.gameObject.GetComponentInChildren<MeshFilter>().mesh;
        inventoryObjectModel.mesh = mesh;
        inventoryObjectModel.transform.localScale = scale;
        inventoryObjectModel.transform.localRotation = rotation;
        EnableModel(true);
    }

    //Segunda version que instancia un objeto nuevo
    public void AddToInventory(IPickeable pick, Vector3 scale, Quaternion rotation, Material originalMat)
    {
        //Si ya tenemos un objeto, lo eliminamos
        if(PickableObject != null)
        {
            Destroy(PickableObject.gameObject);
        }

        pick.gameObject.SetActive(false);

        //Instanciar el nuevo objeto
        GameObject o = Instantiate(pick.gameObject, Vector3.zero, rotation, socketObj);
        o.transform.localPosition = Vector3.zero;
        o.SetActive(true);
        o.GetComponent<Collider>().enabled = false;
        PickableObject = o.GetComponent<IPickeable>();

        //Si es comida, desactivamos el script
        if(o.transform.TryGetComponent<FoodTruckObject>(out FoodTruckObject bf))
        {
            bf.enabled = false;
        }

        #region OLD

        //if (inventoryObjectModel.gameObject.activeInHierarchy)
        //{
        //    inventoryObjectModel.gameObject.SetActive(false);
        //}
        //if(socketObj.childCount > 0)
        //{
        //    foreach (Transform item in socketObj)
        //    {
        //        Destroy(item);
        //    }
        //}

        //CurrentObject = pick;
        //GameObject g = null;

        //if(pick.gameObject.TryGetComponent<BaseFood>(out BaseFood b))
        //{
        //    foreach (BaseFood item in IngredientListManager.Instance.IngredientManager.allIngredients)
        //    {
        //        if (b.Equals(item))
        //        {
        //            g = item.gameObject;
        //        }
        //    }
        //    GameObject o = Instantiate(g, Vector3.zero, rotation, socketObj);
        //    o.transform.localPosition = Vector3.zero;
        //    o.GetComponent<BaseFood>().enabled = false;
        //    o.GetComponent<Collider>().enabled = false;
        //    o.GetComponent<BaseGazeInteractable>().enabled = false;
        //    o.GetComponentInChildren<MeshRenderer>().material = holoMat;
        //}
        //else if(pick.gameObject.TryGetComponent<Tool>(out Tool t))
        //{
        //    foreach (Tool item in IngredientListManager.Instance.IngredientManager.allTools)
        //    {
        //        if (b.Equals(item))
        //        {
        //            g = item.gameObject;
        //        }
        //    }
        //    GameObject o = Instantiate(g, Vector3.zero, rotation, socketObj);
        //    o.transform.localPosition = Vector3.zero;
        //    o.GetComponent<Tool>().enabled = false;
        //    o.GetComponent<Collider>().enabled = false;
        //    o.GetComponent<BaseGazeInteractable>().enabled = false;
        //    o.GetComponentInChildren<MeshRenderer>().material = holoMat;
        //}
        #endregion
    }

    public void EnableModel(bool enable)
    {
        inventoryObjectModel.gameObject.SetActive(enable);
    }

    public void CleanInventory()
    {
        _pickableObject = null;
        if(socketObj.childCount > 0)
        {
            Destroy(socketObj.GetChild(0).gameObject);
        }
       //EnableModel(false);
    }

    public BaseFood GetCurrentObjectAsFood()
    {
        if(_pickableObject != null)
        {
            if (_pickableObject.gameObject.TryGetComponent(out BaseFood food))
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
        if(this._pickableObject != null)
        {

        }
    }
}
