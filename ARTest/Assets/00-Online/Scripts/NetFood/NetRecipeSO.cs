using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Receta")]
public class NetRecipeSO : ScriptableObject
{
    public PlateSO plate;
    public List<NetBaseFood> ingredients;
}
