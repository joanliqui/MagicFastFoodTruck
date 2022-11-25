using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="UniqueIngredientManager")]
public class PickablesManager : ScriptableObject
{
    public List<BaseFood> allIngredients;
    public List<Tool> allTools;
}
