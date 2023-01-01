using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NETFridge : NetFoodTruckObject, IInteractuable
{
    Animator anim;
    bool isOpen = false;
    Collider col;
    [SerializeField] GameObject[] doors;
    [SerializeField] List<NetBaseFood> foodInside;

    //private NetworkAnimator networkAnimator;

    private void Start()
    {
        anim = GetComponent<Animator>();
        col = GetComponent<Collider>();
        //networkAnimator = GetComponent<NetworkAnimator>();
        foreach (var item in doors)
        {
            item.SetActive(true);
        }
    }

    [ServerCallback]
    public void Interact()
    {
            if (!isOpen)
            {
                anim.SetInteger("openState", 1); //Abre
                isOpen = true;
                StartCoroutine(CloseFridge());
            }
 
    }

    public void ClosingFridge()
    {
        StartCoroutine(CloseFridge());
    }
    IEnumerator CloseFridge()
    {
        yield return new WaitForSeconds(10f);
        anim.SetInteger("openState", -1);
        isOpen = false;
        //ActivateAllFood();
        EnableCollider(true);
    }

    public void EnableCollider(bool enable)
    {
        col.enabled = enable;
    }

    public void ActivateAllFood()
    {
        for (int i = 0; i < foodInside.Count; i++)
        {
            if(foodInside[i].gameObject.activeInHierarchy == false)
            {
                foodInside[i].gameObject.SetActive(true);
            }
        }
    }
}
