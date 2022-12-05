using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VRMenuManager : MonoBehaviour
{
    [SerializeField] GameObject aviso;

    private void Start()
    {
        aviso.SetActive(false);
    }


    public void PlayGame(string s)
    {
        aviso.SetActive(true);
        StartCoroutine(LoadWaiting(s));
    }

    IEnumerator  LoadWaiting(string s)
    {
        yield return new WaitForSeconds(2f);
        SceneManager.LoadScene(s);
    }
}
