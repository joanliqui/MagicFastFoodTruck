using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    private IPickeable _pickableObject;
    
    
    private Tool _cntTool;
    
    [SerializeField] Transform socketObj;
    [SerializeField] Material holoMat;
    AudioSource source;
    //[SerializeField] MeshFilter inventoryObjectModel;

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
                _cntTool = t;
            }
            
            _pickableObject = value; 
            
        }  
    }

    public Tool CntTool { get => _cntTool; set => _cntTool = value; }

    private void Start()
    {
        //EnableModel(false);
        source = GetComponent<AudioSource>();
    }

    //Primera verision quew actuializa solo la mesh
    //public void AddToInventory(IPickeable pick, Vector3 scale, Quaternion rotation)
    //{
    //    PickableObject = pick;
    //    Mesh mesh = pick.gameObject.GetComponentInChildren<MeshFilter>().mesh;
    //    inventoryObjectModel.mesh = mesh;
    //    inventoryObjectModel.transform.localScale = scale;
    //    inventoryObjectModel.transform.localRotation = rotation;
    //    EnableModel(true);
    //}

    //Segunda version que instancia un objeto nuevo
    public void AddToInventory(IPickeable pick, Vector3 scale, Quaternion rotation, Material originalMat)
    {
        //Si ya tenemos un objeto, lo eliminamos
        if(PickableObject != null)
        {
            if(_pickableObject.gameObject.GetComponent<Tool>() == false) //Si no tenemos una tool en la mano
            {
                Destroy(PickableObject.gameObject);
            }
        }
        //Desactivamos el objeto que estaba en la posicion inicial
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
    }

    public void PlayObjectSound(AudioClip c)
    {
        source.clip = c;
        source.Play();
    }

    //public void EnableModel(bool enable)
    //{
    //    inventoryObjectModel.gameObject.SetActive(enable);
    //}

    public void CleanInventory()
    {
        _pickableObject = null;
        _cntTool = null;

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
