using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QueueManager : MonoBehaviour
{
    [SerializeField] GameObject client; //Prefab Client to Instantiate
    //Indexes of the List matches
    [SerializeField] List<Transform> queuePoints; //Point on Queue
    private List<Client> queueClients = new List<Client>(); //Clients on Queue

    [SerializeField] RequestPoint finalPoint; //Entrance Position
    void Start()
    {
        InstantiateQueue();
    }
    private void InstantiateQueue()
    {
        foreach (Transform item in queuePoints)
        {
            GameObject o = Instantiate(client.gameObject, item.position, item.rotation);
            Client c = o.GetComponent<Client>();
            c.InicializeClient();

            queueClients.Add(c);
        }
    }

    public bool CanAddClient()
    {
        return queueClients.Count < queuePoints.Count;
    }


    public void AddClient()
    {
        GameObject o = Instantiate(client.gameObject, queuePoints[queuePoints.Count - 1].position, queuePoints[queuePoints.Count - 1].rotation);
    }

    public Client GetFirstClient()
    {
        if(queueClients.Count == 0)
        {
            return null;
        }
        Client c = queueClients[0];
        queueClients.RemoveAt(0);
        RelocateAllClients();
        return c;
    }

    private void RelocateAllClients()
    {
        for (int i = 0; i < queueClients.Count; i++)
        {
            queueClients[i].MoveTo(queuePoints[i].position);
        }
    }
}
