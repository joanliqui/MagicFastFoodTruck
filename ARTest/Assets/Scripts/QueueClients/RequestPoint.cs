using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RequestPoint : MonoBehaviour
{
    public bool clientIn;
    QueueManager queue;
    Client cntClient;
    private void Start()
    {
        queue = GetComponentInParent<QueueManager>();

        StartCoroutine(RequestFirstClient());
    }

    IEnumerator RequestFirstClient()
    {
        yield return new WaitForSeconds(2f);
        RequestClient();
    }

    [ContextMenu("RequestClient")]
    public void RequestClient()
    {
        cntClient = queue.GetFirstClient();
        cntClient.MoveTo(this.transform.position, cntClient.OnRequestPoint);
        cntClient.OnFoodCorrect += RequestClient;
        clientIn = true;
    }
}
