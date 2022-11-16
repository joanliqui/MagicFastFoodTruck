using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeMaterial : MonoBehaviour
{

    [SerializeField] Material enterMat;
    [SerializeField] Material activatedMat;
    private Material originalMat;

    private MeshRenderer rend;
    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<MeshRenderer>();
        originalMat = rend.material;
    }

    public void SwapToEnterMaterial()
    {
        rend.material = enterMat;
    }

    public void SwapToActivatedMat()
    {
        rend.material = activatedMat;
    }

    public void Reset()
    {
        rend.material = originalMat;
    }
}
