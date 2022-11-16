using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GazeInteractable : MonoBehaviour
{
    private const string WAIT_TO_EXIT_COROUTINE = "WaitToExit_Coroutine";

    public delegate void OnEnter(GazeInteractable interactable, GazeInteractor interactor, Vector3 point);
    public event OnEnter Enter;

    public delegate void OnStay(GazeInteractable interactable, GazeInteractor interactor, Vector3 point);
    public event OnStay Stay;

    public delegate void OnExit(GazeInteractable interactable, GazeInteractor interactor);
    public event OnExit Exit;

    public delegate void OnActivated(GazeInteractable interactable);
    public event OnActivated Activated;


    [Header("Configuration")]
    [SerializeField] private bool _isActivable;
    [SerializeField] private float _exitDelay;

    [Header("Events")]
    public UnityEvent OnGazeEnter;
    public UnityEvent OnGazeStay;
    public UnityEvent OnGazeExit;
    public UnityEvent OnGazeActivated;
    public UnityEvent<bool> OnGazeToggle;

    private Collider col;
  
    public bool IsEnabled
    {
        get { return col.enabled; }
        set { col.enabled = value; }
    }

    public bool IsActivable
    {
        get { return _isActivable; }
    }
    public bool IsActivated { get; private set; }

    void Start()
    {
        col = GetComponent<Collider>();        
    }

    /// <summary>
    /// Pone el bool IsActivated a true y llama el UnityEvent OnGazeActivated
    /// </summary>
    public void Activate()
    {
        IsActivated = true;

        Activated?.Invoke(this); //delegate
        OnGazeActivated?.Invoke(); //UnityEvent
    }

    public void GazeEnter(GazeInteractor interactor, Vector3 point)
    {
        StopCoroutine(WAIT_TO_EXIT_COROUTINE);

        Enter?.Invoke(this, interactor, point);

        OnGazeEnter?.Invoke();
        //OnGazeToggle?.Invoke(true);
    }

    public void GazeStay(GazeInteractor interactor, Vector3 point)
    {
        Stay?.Invoke(this, interactor, point); //delegate

        OnGazeStay?.Invoke(); //UnityEvent
    }

    public void GazeExit(GazeInteractor interactor)
    {
        if (gameObject.activeInHierarchy)
        {
            StartCoroutine(WAIT_TO_EXIT_COROUTINE, interactor);
        }
        else
        {
            InvokeExit(interactor);
        }
    }

    private IEnumerator WaitToExit_Coroutine(GazeInteractor interactor)
    {
        yield return new WaitForSeconds(_exitDelay);

        InvokeExit(interactor);
    }

    private void InvokeExit(GazeInteractor interactor)
    {
        Exit?.Invoke(this, interactor);

        OnGazeExit?.Invoke();
        OnGazeToggle?.Invoke(false);

        IsActivated = false;
    }


}
