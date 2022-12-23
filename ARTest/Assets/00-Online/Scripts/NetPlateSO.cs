using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Plato")]
public class NetPlateSO : ScriptableObject
{
    public string plateName;
    public GameObject playePrefab;
    public Texture2D recipeSprite;
    public Sprite plateImage;
    private NetBaseFood _finalFood;

    private void OnEnable()
    {
        _finalFood = playePrefab.GetComponent<NetBaseFood>();
    }

    public NetBaseFood FinalFood { get => _finalFood; set => _finalFood = value; }
}
