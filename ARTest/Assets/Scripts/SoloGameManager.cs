using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SoloGameManager : MonoBehaviour
{
    private static SoloGameManager _instance;
    private int score;
    public event Action onAddPoints;
    public static SoloGameManager Instance { get => _instance; }
    public int Score { get => score; set => score = value; }

    private void Awake()
    {
        if(_instance == null)
        {
            _instance = this;
        }
        else if(_instance != this)
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        score = 0;
    }

    public void AddPoints(int n)
    {
        score += n;
        onAddPoints?.Invoke();
    }
}
