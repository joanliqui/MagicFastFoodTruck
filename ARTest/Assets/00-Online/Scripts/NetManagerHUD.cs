using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NetManagerHUD : MonoBehaviour
{
    NetworkManager manager;
    [SerializeField] GameObject panel;
    [SerializeField] GameObject cam;
    // Start is called before the first frame update
    void Start()
    {
        manager = GameObject.FindGameObjectWithTag("NetworkManager").GetComponent<NetworkManager>();
    }

    public void StartHost()
    {
        manager.StartHost();
        DeactivatePanel();
    }


    public void StartClient()
    {
        if (NetworkServer.active)
        {
            manager.StartClient();
            DeactivatePanel();
        }
        else
        {
            Debug.LogWarning("Server still no Active");
        }
    }

    public void DeactivatePanel()
    {
        panel.SetActive(false);
        cam.SetActive(false);
    }
}
