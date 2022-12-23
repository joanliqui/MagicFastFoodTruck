using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class NetGazeInteractableFood : NetBaseGazeInteractable
{
    private const string WAIT_TO_EXIT_COROUTINE = "WaitToExit_Coroutine";


    [Header("Configuration")]
    [SerializeField] private bool _isActivable;
    [SerializeField] private float _exitDelay;

    [Header("Events")]
    public UnityEvent<NetBaseFood> OnGazeEnter;
    public UnityEvent<NetBaseFood> OnGazeStay;
    public UnityEvent OnGazeExit;
    public UnityEvent<NetBaseFood> OnGazeActivated;


    private Collider col;
    private NetInventory inventory;

    NetBaseFood food = null;
  
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

    public void SetInvenory(NetInventory inv)
    {
        inventory = inv;
    }

    /// <summary>
    /// Pone el bool IsActivated a true y llama el UnityEvent OnGazeActivated
    /// </summary>
    public override void Activate()
    {
        IsActivated = true;
        //food = inventory.GetCurrentObjectAsFood();
        if(food != null)
            OnGazeActivated?.Invoke(food); //UnityEvent
    }

    public override void GazeEnter(NetGazeInteractor interactor, Vector3 point)
    {
        StopCoroutine(WAIT_TO_EXIT_COROUTINE);
        food = inventory.GetCurrentObjectAsFood();
        if (food)
            OnGazeEnter?.Invoke(food);
    }

    public override void GazeStay(NetGazeInteractor interactor, Vector3 point)
    {
        //Stay?.Invoke(this, interactor, point); //delegate
        if(food != null)
            OnGazeStay?.Invoke(inventory.GetCurrentObjectAsFood()); //UnityEvent
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
        IsActivated = false;
    }


}
