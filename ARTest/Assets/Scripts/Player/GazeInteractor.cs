using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GazeInteractor : MonoBehaviour
{
    [SerializeField] private float maxDetectionDistance;
    [SerializeField] private float minDetectionDistance;
    [SerializeField] private float _timeToActivate = 1.0f;
    [SerializeField] private LayerMask layerMask;

    private Ray ray;
    private RaycastHit hit;

    private float _enterStartTime;

    private GazeInteractable interactable;
    private void Start()
    {
      
    }
    private void Update()
    {
        ray = new Ray(transform.position, transform.forward);
        if(Physics.Raycast(ray,out hit, maxDetectionDistance, layerMask))
        {
            float distance = Vector3.Distance(transform.position, hit.transform.position);
            GazeInteractable inter = hit.collider.transform.GetComponent<GazeInteractable>();

            if(inter == null)
            {
                Reset();
                return;
            }
            if(inter != interactable)
            {
                Reset();

                _enterStartTime = Time.time;

                interactable = inter;
                interactable.GazeEnter(this, hit.point);
            }

            interactable.GazeStay(this, hit.point);

            if(interactable.IsActivable && !interactable.IsActivated)
            {
                float timeToActivate = (_enterStartTime + _timeToActivate) - Time.time;
                float progress = 1 - (timeToActivate / _timeToActivate);
                progress = Mathf.Clamp(progress, 0, 1);

                if(progress >= 1)
                {
                    interactable.Activate();
                }
            }
        }
        else //Si apuntas a la nada o a un objeto de otra Layer
        {
            Reset();
        }
    }
    /// <summary>
    /// Pone el interactuable a null
    /// </summary>
    private void Reset()
    {
        if(interactable == null) { return; }

        interactable.GazeExit(this);
        interactable = null;
    }

#if UNITY_EDITOR
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawRay(transform.position, transform.forward * maxDetectionDistance);
    }
#endif
}
