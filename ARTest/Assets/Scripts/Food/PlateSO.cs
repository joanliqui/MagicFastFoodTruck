using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Plato")]
public class PlateSO : ScriptableObject
{
    public string plateName;
    public GameObject playePrefab;
    public Texture2D recipeSprite;
    public Sprite plateImage;
    private BaseFood _finalFood;

    private void OnEnable()
    {
        _finalFood = playePrefab.GetComponent<BaseFood>();
    }

    public BaseFood FinalFood { get => _finalFood; set => _finalFood = value; }
}
