using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ModeSelectionManager : MonoBehaviour
{
    public void PlayeVR()
    {
        SceneManager.LoadScene("VR");
    }

    public void PlayAR()
    {
        SceneManager.LoadScene("AR");
    }
}
