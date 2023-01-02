using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToolContanerHelper : MonoBehaviour
{
    [SerializeField] NetTool grater;
    [SerializeField] NetTool knife;
    [SerializeField] NetToolContainer graterContainer;
    [SerializeField] NetToolContainer knifeContainer;
    void Start()
    {
        graterContainer.Tool = grater;
        knifeContainer.Tool = knife;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
