using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ARGameManager : MonoBehaviour
{

    [SerializeField] ARPlaneManager planeManager;


    public void DeactivatePlanes()
    {
        foreach (var plane in planeManager.trackables)
        {
            plane.gameObject.SetActive(false);


        }
            planeManager.enabled = false;
    }
}
