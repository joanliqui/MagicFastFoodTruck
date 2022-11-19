using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Receta")]
public class RecipeSO : ScriptableObject
{
    public PlateSO plate;
    public List<BaseFood> ingredients;
}
