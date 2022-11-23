using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IPickeable
{
    GameObject gameObject { get; }
    public void Pick();

    public void Drop();
}
