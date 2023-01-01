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
    [SerializeField] List<GameObject> importantObjects;
    [SerializeField] NetMagicBox box;
    private List<INetInventory> objectsWithInventory = new List<INetInventory>();

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
        foreach (GameObject item in importantObjects)
        {
            objectsWithInventory.Add(item.GetComponent<INetInventory>());
        }

        foreach (INetInventory item in objectsWithInventory)
        {
            item.SetInventory(player.Inventory);
        }
        
    }


    public void UpdateVanClientRequest(NetRecipeSO recipe)
    {
        box.UpdateIngredientBoxList(recipe);
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
