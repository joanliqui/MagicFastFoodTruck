using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IngredientListManager : MonoBehaviour
{
    private static IngredientListManager _instance;
    [SerializeField] PickablesManager pickablesManager;

    public PickablesManager IngredientManager { get => pickablesManager; set => pickablesManager = value; }
    public static IngredientListManager Instance { get => _instance;}

    // Start is called before the first frame update
    void Start()
    {
        if(_instance == null)
        {
            _instance = this;
        }
        else if(_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
    }
}
