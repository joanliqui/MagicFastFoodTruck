using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class NETVanHandler : NetworkBehaviour
{
    [SyncVar]
    public string playerOwner = string.Empty;

    static MyNetworkManager netManager;
    private PlayerInfo player;

    [SerializeField] List<NetBaseFood> allFoodList = new List<NetBaseFood>();
    [SerializeField] NetMagicBox magicBox;

    private void Awake()    
    {
        if(netManager == null)
        {
            netManager = GameObject.FindGameObjectWithTag("NetworkManager").GetComponent<MyNetworkManager>();
        }
    }

    public void SetupVan(string playerName, NetworkConnectionToClient id)
    {
        playerOwner = playerName;
        SetPlayerInfo(id);
        SetInventoryForObjects();
    }

    private void SetPlayerInfo(NetworkConnectionToClient id)
    {
        player = new PlayerInfo(id);
    }

    private void SetInventoryForObjects()
    {
        for (int i = 0; i < allFoodList.Count; i++)
        {
            allFoodList[i].SetInventory(player.Inventory);
        }
        if (magicBox)
        {
            magicBox.SetInventory(player.Inventory);
        }
    }





}

public class PlayerInfo
{
    NetInventory inventory;
    public PlayerInfo(NetworkConnectionToClient con)
    {
        inventory = con.identity.transform.GetComponentInChildren<NetInventory>();
    }
    public NetInventory Inventory { get => inventory; private set => inventory = value; }
}
