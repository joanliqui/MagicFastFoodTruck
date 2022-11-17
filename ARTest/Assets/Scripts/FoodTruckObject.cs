using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class FoodTruckObject : MonoBehaviour
{
    public virtual void ToogleGlow(bool glow)
    {
        if (glow)
            Debug.Log("Brilla");
        else
            Debug.Log("Stop Brilla");
    }
}
