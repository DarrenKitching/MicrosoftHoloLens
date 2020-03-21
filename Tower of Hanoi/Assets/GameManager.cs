using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    
    float p1Xmax = 179;  //Pole1 Max x pos
    float p1Xmin = 164;  //Pole1 Min x pos

    float p2Xmax = 126;  //Pole2 Max x pos
    float p2Xmin = 113;  //Pole2 Min x pos

    float p3Xmax = 74;   //Pole3 Max x pos
    float p3Xmin = 62;   //Pole3 Min x pos

    float zMax = 90;     //Max z pos
    float zMin = 75;     //Min z pos

    float yMax = 23;     //Max y pos
    float yMin = -35;    //Min y pos

    bool won = false;
 
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        GameObject c1 = GameObject.Find("Cylinder");
        GameObject c2 = GameObject.Find("Cylinder2");
        GameObject c3 = GameObject.Find("Cylinder3");

        Vector3 c1pos = c1.transform.position;
        Vector3 c2pos = c2.transform.position;
        Vector3 c3pos = c3.transform.position;


        //winning status
        if (!Input.GetMouseButton(0))
        {
            if ((c1pos.x < p1Xmax) && (c1pos.x > p1Xmin)
              && (c2pos.x < p1Xmax) && (c2pos.x > p1Xmin)
              && (c3pos.x < p1Xmax) && (c3pos.x > p1Xmin)
              && (c1pos.z < zMax) && (c1pos.z > zMin)
              && (c2pos.z < zMax) && (c2pos.z > zMin)
              && (c3pos.z < zMax) && (c3pos.z > zMin)
              && (c1pos.y < c2pos.y) && (c1pos.y < c3pos.y) && (c2pos.y < c3pos.y)
              && (c3pos.y < yMax)
              && (won == false))

            {
                Debug.Log("Win");
                won = true;
                restart();

            }
        }

        //states against rules
        if (!Input.GetMouseButton(0))
        {
            if (((c1pos.y > c2pos.y) && (Distance(c1pos.x, c2pos.x) < 20))
                || ((c1pos.y > c3pos.y) && (Distance(c1pos.x, c3pos.x) < 20))
                || ((c2pos.y > c3pos.y) && (Distance(c2pos.x, c3pos.x) < 20)))
            {
                Debug.Log("wrong");
                restart();
            }
        }


        //disc falls off edge
        if (!Input.GetMouseButton(0))
        {
            if ((c1pos.y < yMin) || (c2pos.y < yMin) || (c3pos.y < yMin))
            {
                Debug.Log("reset");
                restart();
            }
        }
       


    }
    void restart()
    {
        SceneManager.LoadScene("Tower of Hanoi");
        won = false;
    }
    
    float Distance(float a, float b)
    {
        float distance = a - b;
        if(distance < 0)
        {
            return distance * -1;
        }
        else
        {
            return distance;
        }
    }
}
