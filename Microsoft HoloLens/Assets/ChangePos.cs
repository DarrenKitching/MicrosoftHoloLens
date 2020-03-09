using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangePos : MonoBehaviour
{
    // Start is called before the first frame update

    public static GameObject lastTouch = null;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Change() 
    {
        print("Hello");
        if (lastTouch != null)
        {
            print("Coords of last piece are " + lastTouch.transform.position);
            Vector3 temp = gameObject.transform.position;
            temp.x += (float) 0.35;
            temp.y += 1;
            temp.z += (float) 4.2;
            lastTouch.transform.position = temp;
            print("New coords of last touch " + lastTouch.transform.position);
        }
        else
        {
            print("null");
            lastTouch = gameObject;
            print("Set last touch to " + lastTouch.name);
        }
    }
}
