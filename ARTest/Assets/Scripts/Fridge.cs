using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fridge : Electrodomestico, IInteractuable
{
    Animator anim;
    bool isOpen = false;

    private void Start()
    {
        anim = GetComponent<Animator>();
    }
    public void Interact()
    {
        if (!isOpen)
        {
            anim.SetTrigger("Open");
            isOpen = true;
            StartCoroutine(CloseFridge());
        }
    }

    IEnumerator CloseFridge()
    {
        yield return new WaitForSeconds(10f);
        anim.SetTrigger("Close");
        isOpen = false;
    }
}
