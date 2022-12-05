using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ModeSelectionManager : MonoBehaviour
{
    public void PlayVR()
    {
        SceneManager.LoadScene("VRMenuScene");
    }

    public void PlayAR()
    {
        SceneManager.LoadScene("AR");
    }
}
