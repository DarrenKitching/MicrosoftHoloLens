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
        if (lastTouch != null && gameObject.name.Length == 2)
        {
            print("Coords of last piece are " + lastTouch.transform.position);
            Vector3 temp = gameObject.transform.position;
            temp.x -= (float) 2.6;
            temp.y += (float) 1.024;
            temp.z += (float) 4.255;
            lastTouch.transform.position = temp;
            print("New coords of last touch " + lastTouch.transform.position);
            lastTouch = null;
        }
        else
        {
            print("null");
            if(gameObject.name.Length == 3) 
            { 
                lastTouch = gameObject.transform.parent.gameObject;
                print("Set last touch to " + gameObject.name);
            }
        }
    }
}
