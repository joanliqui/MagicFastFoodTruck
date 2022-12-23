using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyNetworkManager : NetworkManager
{
    private static int playersInGame = 0; 
    public bool prueba;

    [SerializeField]  List<NETVanHandler> vans;
    private static List<GazeInteractor> playerInteractors = new List<GazeInteractor>();



    //Ocurre cuando se instancia el player
    public override void OnServerAddPlayer(NetworkConnectionToClient conn)
    {
        base.OnServerAddPlayer(conn);
        if (conn.isReady)
        {
            if (vans[playersInGame].playerOwner == string.Empty)
            {
                vans[playersInGame].SetupVan("Player" + conn.connectionId, conn);
            }
        }
        else
        {
            Debug.LogWarning("The connexion is not ready yet");
        }
        playersInGame++;


        //RpcDisconectGazeInteractorOnJoin(conn);

        if (playersInGame == 2)
        {
            Debug.Log("START GAME");
        }

    }

    void RpcDisconectGazeInteractorOnJoin(NetworkConnectionToClient conn)
    {
        GazeInteractor inter = conn.identity.transform.GetComponentInChildren<GazeInteractor>();
        playerInteractors.Add(inter);
        inter.enabled = false;
    }
}
