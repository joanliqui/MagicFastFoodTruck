using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class NetGazeInteractable : NetBaseGazeInteractable
{
    private const string WAIT_TO_EXIT_COROUTINE = "WaitToExit_Coroutine";

    //public delegate void OnEnter(GazeInteractable interactable, GazeInteractor interactor, Vector3 point);
    //public event OnEnter Enter;

    //public delegate void OnStay(GazeInteractable interactable, GazeInteractor interactor, Vector3 point);
    //public event OnStay Stay;

    //public delegate void OnExit(GazeInteractable interactable, GazeInteractor interactor);
    //public event OnExit Exit;

    //public delegate void OnActivated(GazeInteractable interactable);
    //public event OnActivated Activated;

    public delegate void OnActivated(BaseFood food);
    public event OnActivated Activated;


    [Header("Configuration")]
    [SerializeField] private bool _isActivable = true;
    [SerializeField] private float _exitDelay;

    [Header("Events")]
    public UnityEvent OnGazeEnter;
    public UnityEvent OnGazeStay;
    public UnityEvent OnGazeExit;
    public UnityEvent OnGazeActivated;
    public UnityEvent<bool> OnGazeToggle;

    private Collider col;

  
    public override bool IsEnabled
    {
        get { return col.enabled; }
        set { col.enabled = value; }
    }

    public override bool IsActivable
    {
        get { return _isActivable; }
    }
    public override bool IsActivated { get; protected set; }

    void Start()
    {
        col = GetComponent<Collider>();        
    }

    /// <summary>
    /// Pone el bool IsActivated a true y llama el UnityEvent OnGazeActivated
    /// </summary>
    public override void Activate()
    {
        IsActivated = true;

       // Activated?.Invoke(this); //delegate
        OnGazeActivated?.Invoke(); //UnityEvent
    }

    public override void GazeEnter(NetGazeInteractor interactor, Vector3 point)
    {
        StopCoroutine(WAIT_TO_EXIT_COROUTINE);

        //Enter?.Invoke(this, interactor, point);

        OnGazeEnter?.Invoke();
        //OnGazeToggle?.Invoke(true);
    }

    public override void GazeStay(NetGazeInteractor interactor, Vector3 point)
    {
        //Stay?.Invoke(this, interactor, point); //delegate

        OnGazeStay?.Invoke(); //UnityEvent
    }

    public override void GazeExit(NetGazeInteractor interactor)
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

    private IEnumerator WaitToExit_Coroutine(NetGazeInteractor interactor)
    {
        yield return new WaitForSeconds(_exitDelay);

        InvokeExit(interactor);
    }

    private void InvokeExit(NetGazeInteractor interactor)
    {
        //Exit?.Invoke(this, interactor);

        OnGazeExit?.Invoke();
        OnGazeToggle?.Invoke(false);

        IsActivated = false;
    }


}
