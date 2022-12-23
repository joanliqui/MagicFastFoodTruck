using Mirror;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class NetBaseGazeInteractable : NetworkBehaviour
{
    public abstract void GazeEnter(NetGazeInteractor interactor, Vector3 point);

    public abstract void GazeStay(NetGazeInteractor interactor, Vector3 point);

    public abstract void GazeExit(NetGazeInteractor interactor);

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
