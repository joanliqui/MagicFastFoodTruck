using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PCController : MonoBehaviour
{
    [SerializeField] float mouseSensitivity = 100f;

    private PlayerInput inputs;
    private Vector2 mouseLook;
    private Transform playerBody;
    [SerializeField] Transform camBody;
    private float xRotation = 0f;


    private void OnEnable()
    {
        inputs.Enable();
    }
    private void OnDisable()
    {
        inputs.Disable();
    }

    private void Awake()
    {
        //Referencias
        playerBody = transform;

        //Inicializaciones
        inputs = new PlayerInput();
        inputs.Player.Interact.started += Interact;
        
    }




    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }

    void Update()
    {
        Look();
    }

    private void Look()
    {
        mouseLook = inputs.Player.View.ReadValue<Vector2>();

        float mouseX = mouseLook.x * mouseSensitivity * Time.deltaTime;
        float mouseY = mouseLook.y * mouseSensitivity * Time.deltaTime;

        xRotation -= mouseY;

        camBody.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
        playerBody.Rotate(Vector3.up * mouseX);
    }

    private void Interact(InputAction.CallbackContext obj)
    {

    }


}
