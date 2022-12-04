using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Client : MonoBehaviour
{
    public enum ClientState
    {
        OnQueue,
        OnPointToRequest,
        Requesting,
        WaitingToFoodRequested,
        HaveFood
    }
    [SerializeField] RecipesManagerSO recipesManager;
    private RecipeSO wantedPlate;
    private VanHandler van;

    [Header("Movement")]
    [SerializeField] float speed = 10;
    private Vector3 targetPos;
    private bool move = false;
    private ClientState clientState = ClientState.OnQueue;

    [Header("Request UI")]
    [SerializeField] private GameObject bocadilloObject;
    [SerializeField] private Image platoImage;

    private GazeInteractableFood inter;
    [SerializeField] private Renderer rend;
    Collider col;

    //Animator Related
    private Animator anim;
    bool isWalking = false;
    private int walkingHash;
    private int waveHash;

    //public delegate void RequestHandler();
    public event Action OnPosArrived;
    public event Action OnFoodCorrect;
  

    Inventory inv;

    public ClientState ClientState1 { get => clientState; set => clientState = value; }

    private void OnEnable()
    {
        //OnPosArrived += OnRequestPoint;
    }

    private void OnDisable()
    {
        //OnPosArrived -= OnRequestPoint;
    }

    private void Start()
    {
        //Referencias
        van = GameObject.FindGameObjectWithTag("Van").GetComponent<VanHandler>();
        inter = GetComponent<GazeInteractableFood>();
        inv = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        anim = GetComponentInChildren<Animator>();
        col = GetComponent<Collider>();

        //Animator Hash
        walkingHash = Animator.StringToHash("isWalking");
        waveHash = Animator.StringToHash("wave");


        //Interaction Subsriber
        inter.OnGazeActivated.AddListener(TakeFood);
        col.enabled = false;

    }

    private void Update()
    {
        switch (clientState)
        {
            case ClientState.OnQueue:
                if (move)
                {
                    Vector3 moveTowards = targetPos - transform.position;
                    if (moveTowards.magnitude < 0.15f)
                    {
                        OnPosArrived?.Invoke();
                        isWalking = false;
                        move = false;
                        return;
                    }
                    transform.position += moveTowards.normalized * speed * Time.deltaTime;
                }
                break;
            case ClientState.OnPointToRequest:
                break;
            case ClientState.Requesting:
                break;
            case ClientState.WaitingToFoodRequested:
                break;
            case ClientState.HaveFood:
                if (move)
                {
                    isWalking = true;
                    transform.position += transform.forward * speed * Time.deltaTime;
                }
                break;
           
        }
  
        HandleAnimation();
    }

    public void InicializeClient()
    {
        rend.material.color = UnityEngine.Random.ColorHSV();
        move = false;
        isWalking = false;
        bocadilloObject.SetActive(false);
        platoImage.sprite = null;
        clientState = ClientState.OnQueue;
        RandomPlate();
    }
    private void RandomPlate()
    {
        wantedPlate = recipesManager.RandomRecipe();
    }

    private void HandleAnimation()
    {
        anim.SetBool(walkingHash, isWalking);
    }

    private void TakeFood(BaseFood food)
    {
        if (food.Equals(wantedPlate.plate.FinalFood))
        {
            inv.CleanInventory();
            bocadilloObject.SetActive(false);
            clientState = ClientState.HaveFood;
            StartCoroutine(LeavePlace());
        }
    }

    IEnumerator LeavePlace()
    {
        anim.SetTrigger(waveHash);
        SoloGameManager.Instance.AddPoints(1);
        yield return new WaitForSeconds(1.5f);
        move = true;
        OnFoodCorrect?.Invoke();
    }



    public void MoveTo(Vector3 pos, Action OnPosArrived = null)
    {
        targetPos = pos;
        targetPos.y = transform.position.y;
        this.OnPosArrived += OnPosArrived;
        isWalking = true;
        move = true;
    }


    //Action added from the RequesPoint Script.
    //Al llegar al punto saluda y pide la comida, actualizando la caravana.
    public void OnRequestPoint()
    {
        clientState = ClientState.OnPointToRequest;
        anim.SetTrigger(waveHash);
        col.enabled = true;
        ActivateRequestUI();
        van.UpdateVanClientRequest(wantedPlate);
    }
    private void ActivateRequestUI()
    {
        bocadilloObject.SetActive(true);
        platoImage.sprite = wantedPlate.plate.plateImage;

    }
}
