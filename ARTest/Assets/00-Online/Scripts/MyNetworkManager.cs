using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyNetworkManager : NetworkManager
{
    [SerializeField] Transform wardrobePrefabTransform;
    GameObject wardrobeObject;
    public bool prueba;
    public override void OnServerAddPlayer(NetworkConnectionToClient conn)
    {
        base.OnServerAddPlayer(conn);
        if (prueba)
        {
            GameObject o = spawnPrefabs[0];
            wardrobeObject = Instantiate(o, wardrobePrefabTransform.position, wardrobePrefabTransform.rotation);
            wardrobeObject.transform.localScale = wardrobePrefabTransform.localScale;
            wardrobePrefabTransform.gameObject.SetActive(false);
            NetworkServer.Spawn(wardrobeObject);
        }
    }
}
