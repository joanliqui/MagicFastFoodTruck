using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Interaction.Toolkit.AR;

public class ARPlacementInteractableSingle : ARBaseGestureInteractable
{
    [SerializeField] private GameObject placementPrefab;
    [SerializeField] private ARObjectPlacementEvent onObjecPlaced;
    private GameObject placedObject;
    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private static GameObject trackablesObject;


    protected override bool CanStartManipulationForGesture(TapGesture gesture)
    {

        if(gesture.targetObject == null)
        {
            return true;
        }
        return false;
    }

    protected override void OnEndManipulation(TapGesture gesture)
    {
        if (gesture.isCanceled)
        {
            return;
        }

        if(gesture.targetObject != null)
        {
            return;
        }

        if(GestureTransformationUtility.Raycast(gesture.startPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            var hit = hits[0];

            if(Vector3.Dot(Camera.main.transform.position - hit.pose.position, hit.pose.rotation * Vector3.up) < 0)
            {
                return;
            }
            //Permite instanciar un nuevo gameObject
            if(placedObject == null)
            {
                placedObject = Instantiate(placementPrefab, hit.pose.position, hit.pose.rotation);

                var anchorObject = new GameObject("PlacementAnchor");
                anchorObject.transform.position = hit.pose.position;
                anchorObject.transform.rotation = hit.pose.rotation;

                if(trackablesObject == null)
                {
                    trackablesObject = GameObject.Find("Trackables");
                }
                if(trackablesObject != null)
                {
                    anchorObject.transform.parent = trackablesObject.transform;
                }

                onObjecPlaced?.Invoke(this, placedObject);
            }
        }
    }
}
