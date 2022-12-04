using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class FoodTruckObject : MonoBehaviour
{
    [SerializeField] protected Material mat;
    protected const string _canShinePropertie = "_canShine";

    public virtual void ToogleGlow(bool glow)
    {
        int i = Convert.ToInt32(glow);
        if(mat != null)
        {
            mat.SetInt(_canShinePropertie, i);   
        }
    }
}
