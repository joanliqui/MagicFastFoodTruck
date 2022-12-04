using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Screen : MonoBehaviour
{
    int puntos = 0;
    [SerializeField] TextMeshProUGUI numberTetx;
    void Start()
    {
        SoloGameManager.Instance.onAddPoints += SumaPunto;
        puntos = SoloGameManager.Instance.Score;
        ResetUI();
    }

    void SumaPunto()
    {
        puntos++;
        numberTetx.text = puntos.ToString();
    }

    void ResetUI()
    {
        numberTetx.text = "0";
    }
}
