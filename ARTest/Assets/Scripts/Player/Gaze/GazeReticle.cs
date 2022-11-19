using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GazeReticle : MonoBehaviour
{
    [Header("Inner")]
    [SerializeField] private Canvas _canvas;
    [SerializeField] private Image _imageProgress;

    [Header("Configuration")]
    [SerializeField] private float _scale = 0.0015f;

    private GazeInteractor _interactor;


    public void PointerOnGaze(Vector3 hitPoint)
    {
        float distance = Vector3.Distance(_interactor.transform.position, hitPoint);
        float scaleFactor = _scale * distance;

        Vector3 direction = _interactor.transform.position - hitPoint;
        //Quaternion rot = Quaternion.FromToRotation(Vector3.forward, direction);
        Quaternion rot = Quaternion.LookRotation(direction);

        transform.localScale = Vector3.one * scaleFactor;
        transform.position = CalculateReticlePosition(_interactor.transform.position, hitPoint, 0.97f);
        transform.rotation = rot;
    }

    public void PointerOutGaze(float maxDistance)
    {
        transform.localScale = Vector3.one * 0.1f;
        transform.localPosition = _interactor.transform.position + _interactor.transform.forward;
        transform.localRotation = _interactor.transform.rotation;
    }

    private Vector3 CalculateReticlePosition(Vector3 p0, Vector3 p1, float t)
    {
        float x = p0.x + t * (p1.x - p0.x);
        float y = p0.y + t * (p1.y - p0.y);
        float z = p0.z + t * (p1.z - p0.z);

        return new Vector3(x, y, z);
    }
    public void SetInteractor(GazeInteractor interactor)
    {
        _interactor = interactor;
        enabled = true;
    }

    public void SetProgress(float progress)
    {
        _imageProgress.fillAmount = progress;
    }

    public void Enable(bool enable)
    {
        gameObject.SetActive(enable);
    }
}