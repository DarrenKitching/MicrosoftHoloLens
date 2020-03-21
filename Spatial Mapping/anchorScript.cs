using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class anchorScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void anchor()
    {
        this.gameObject.GetComponent<Renderer>().material.color = Color.red;
        this.gameObject.GetComponent<SolverHandler>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
