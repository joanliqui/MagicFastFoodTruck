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
    [SerializeField] List<BaseFood> foodInside;

    private NetworkAnimator networkAnimator;

    private void Start()
    {
        anim = GetComponent<Animator>();
        col = GetComponent<Collider>();
        networkAnimator = GetComponent<NetworkAnimator>();
        foreach (var item in doors)
        {
            item.SetActive(true);
        }
    }
    [ClientCallback]
    public void Interact()
    {
        if (isOwned)
        {
            Debug.Log("Owned");
            if (!isOpen)
            {
                networkAnimator.SetTrigger("Open");
                //anim.SetTrigger("Open");
                isOpen = true;
                StartCoroutine(CloseFridge());
            }
        }
    }

    public void ClosingFridge()
    {
        StartCoroutine(CloseFridge());
    }
    IEnumerator CloseFridge()
    {
        yield return new WaitForSeconds(10f);
        anim.SetTrigger("Close");
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
