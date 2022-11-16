

using System;
using UnityEditor;
using UnityEngine;
using System.Collections;

using UnityEngine.XR.Management;

using Google.XR.Cardboard;
using UnityEngine.XR.ARCore;



public class XRPluginManager : MonoBehaviour
{

    [SerializeField] ARCoreLoader arCoreLoader;

    public void InicializeXRLoader(UnityEngine.XR.Management.XRLoader loader)
    {
        bool initSucces = loader.Initialize();
        if (!initSucces)
        {
            Debug.LogError("Error initializing GoogleCarboard loader.");
        }
        else
        {
            Debug.Log("Start GoogleCarboard loader");
            bool startSuccess = loader.Start();
            if (!startSuccess)
            {
                Debug.LogError("Error starting GoogleCarboard loader.");
                loader.Deinitialize();
            }
        }
    }

    public void InicializeARCoreLoader()
    {
        bool initSucces = arCoreLoader.Initialize();
        if (!initSucces)
        {
            Debug.LogError("Error initializing ARCore loader.");
        }
        else
        {
            Debug.Log("Start ARCore loader");
            bool startSuccess = arCoreLoader.Start();
            if (!startSuccess)
            {
                Debug.LogError("Error starting ARCore loader.");
                arCoreLoader.Deinitialize();
            }
        }

    }

    UnityEngine.XR.Management.XRLoader m_SelectedXRLoader;

    public void StartXR(int loaderIndex)
    {
        // Once a loader has been selected, prevent the RuntimeXRLoaderManager from
        // losing access to the selected loader
        if (m_SelectedXRLoader == null)
        {
            m_SelectedXRLoader = XRGeneralSettings.Instance.Manager.activeLoaders[loaderIndex];
        }
        StartCoroutine(StartXRCoroutine());
    }

    IEnumerator StartXRCoroutine()
    {
        Debug.Log("Init XR loader");

        var initSuccess = m_SelectedXRLoader.Initialize();
        if (!initSuccess)
        {
            Debug.LogError("Error initializing selected loader.");
        }
        else
        {
            yield return null;
            Debug.Log("Start XR loader");
            var startSuccess = m_SelectedXRLoader.Start();
            if (!startSuccess)
            {
                yield return null;
                Debug.LogError("Error starting selected loader.");
                m_SelectedXRLoader.Deinitialize();
            }
        }
    }
    public void StopSubsystemXR()
    {
        Debug.Log("Stopping XR...");

        XRGeneralSettings.Instance.Manager.StopSubsystems();
        XRGeneralSettings.Instance.Manager.DeinitializeLoader();
        Debug.Log("XR stopped completely.");
    }
    void StopXR()
    {
        Debug.Log("Stopping XR Loader...");
        m_SelectedXRLoader.Stop();
        m_SelectedXRLoader.Deinitialize();
        m_SelectedXRLoader = null;
        Debug.Log("XR Loader stopped completely.");
    }
}

