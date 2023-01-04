using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LogoManager : MonoBehaviour
{
    [SerializeField] private float sec = 2.5f;
    private void Start()
    {
        StartCoroutine(GoMenu());
    }

    IEnumerator GoMenu()
    {
        yield return new WaitForSeconds(sec);
        NextScene();
    }
    public void NextScene()
    {
        SceneManager.LoadScene(1);
    }
}
