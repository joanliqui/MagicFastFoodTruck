using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class TapToPlace : MonoBehaviour
{
    [SerializeField] GameObject prefab;
    private GameObject _spawnedObject;
    private ARRaycastManager _aRRaycastManager;
    private Vector2 touchPos;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    // Start is called before the first frame update
    private void Awake()
    {
        _aRRaycastManager = GetComponent<ARRaycastManager>();
    }

}
