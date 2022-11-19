using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BaseGazeInteractable : MonoBehaviour
{
    public abstract void GazeEnter(GazeInteractor interactor, Vector3 point);

    public abstract void GazeStay(GazeInteractor interactor, Vector3 point);

    public abstract void GazeExit(GazeInteractor interactor);

    public abstract void Activate();

    public virtual bool IsEnabled
    {
        get { return true; }
        set { }
    }

    public virtual bool IsActivable
    {
        get { return true; }
    }
    public virtual bool IsActivated { get; protected set; }
}
