using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GazeInteractableFood : BaseGazeInteractable
{
    private const string WAIT_TO_EXIT_COROUTINE = "WaitToExit_Coroutine";


    [Header("Configuration")]
    [SerializeField] private bool _isActivable;
    [SerializeField] private float _exitDelay;

    [Header("Events")]
    public UnityEvent<BaseFood> OnGazeEnter;
    public UnityEvent<BaseFood> OnGazeStay;
    public UnityEvent OnGazeExit;
    public UnityEvent<BaseFood> OnGazeActivated;


    private Collider col;
    private Inventory inventory;

    BaseFood food = null;
  
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
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
    }

    /// <summary>
    /// Pone el bool IsActivated a true y llama el UnityEvent OnGazeActivated
    /// </summary>
    public override void Activate()
    {
        IsActivated = true;
        // Activated?.Invoke(this); //delegate
        food = inventory.GetCurrentObjectAsFood();
        if(food != null)
            OnGazeActivated?.Invoke(food); //UnityEvent
    }

    public override void GazeEnter(GazeInteractor interactor, Vector3 point)
    {
        StopCoroutine(WAIT_TO_EXIT_COROUTINE);
        food = inventory.GetCurrentObjectAsFood();
        //Enter?.Invoke(this, interactor, point);
        if (food)
            OnGazeEnter?.Invoke(food);
        //OnGazeToggle?.Invoke(true);
    }

    public override void GazeStay(GazeInteractor interactor, Vector3 point)
    {
        //Stay?.Invoke(this, interactor, point); //delegate
        if(food != null)
            OnGazeStay?.Invoke(inventory.GetCurrentObjectAsFood()); //UnityEvent
    }

    public override void GazeExit(GazeInteractor interactor)
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
        //Exit?.Invoke(this, interactor);

        OnGazeExit?.Invoke();
        IsActivated = false;
    }


}
