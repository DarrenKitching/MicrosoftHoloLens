using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    
    float p1Xmax = 67;  //Pole1 Max x pos
    float p1Xmin = 56;  //Pole1 Min x pos

    float p2Xmax = 16;  //Pole2 Max x pos
    float p2Xmin = 5;  //Pole2 Min x pos

    float p3Xmax = -36;   //Pole3 Max x pos
    float p3Xmin = -48;   //Pole3 Min x pos

    float zMax = 130;     //Max z pos
    float zMin = 117;     //Min z pos

    //float yMax varies based on version
    float yMin = -62;    //Min y pos

    bool won = false;

    // Update is called once per frame
    void Update()
    {
        if (GameObject.Find("disc7(Clone)") != null)
        {
            //7 disc
            float yMax = 3;

            GameObject c1 = GameObject.Find("disc1(Clone)");
            GameObject c2 = GameObject.Find("disc2(Clone)");
            GameObject c3 = GameObject.Find("disc3(Clone)");
            GameObject c4 = GameObject.Find("disc4(Clone)");
            GameObject c5 = GameObject.Find("disc5(Clone)");
            GameObject c6 = GameObject.Find("disc6(Clone)");
            GameObject c7 = GameObject.Find("disc7(Clone)");

            Vector3 c1pos = c1.transform.position;
            Vector3 c2pos = c2.transform.position;
            Vector3 c3pos = c3.transform.position;
            Vector3 c4pos = c4.transform.position;
            Vector3 c5pos = c5.transform.position;
            Vector3 c6pos = c6.transform.position;
            Vector3 c7pos = c7.transform.position;

            if (!Input.GetMouseButton(0))
            {
                if ((c1pos.x < p1Xmax) && (c1pos.x > p1Xmin)
                  && (c2pos.x < p1Xmax) && (c2pos.x > p1Xmin)
                  && (c3pos.x < p1Xmax) && (c3pos.x > p1Xmin)
                  && (c1pos.z < zMax) && (c1pos.z > zMin)
                  && (c2pos.z < zMax) && (c2pos.z > zMin)
                  && (c3pos.z < zMax) && (c3pos.z > zMin)
                  && (c4pos.z < zMax) && (c4pos.z > zMin)
                  && (c5pos.z < zMax) && (c5pos.z > zMin)
                  && (c6pos.z < zMax) && (c6pos.z > zMin)
                  && (c7pos.z < zMax) && (c7pos.z > zMin)
                  && (c1pos.y < c2pos.y) && (c2pos.y < c3pos.y) && (c3pos.y < c4pos.y)
                  && (c4pos.y < c5pos.y) && (c5pos.y < c6pos.y) && (c6pos.y < c7pos.y)
                  && (c7pos.y < yMax)
                  && (won == false))

                {
                    Debug.Log("Win");
                    won = true;
                    restart();

                }
            }
            //states against rules
            if (!Input.GetMouseButton(0))
            {      //big disc over small      on the same pole                   has landed roughly within distance
                if (((c1pos.y > c2pos.y) && (Distance(c1pos.x, c2pos.x) < 15) && (Distance(c1pos.y, c2pos.y) < 10))
                    || ((c1pos.y > c3pos.y) && (Distance(c1pos.x, c3pos.x) < 10) && (Distance(c1pos.y, c3pos.y) < 10))
                    || ((c1pos.y > c4pos.y) && (Distance(c1pos.x, c4pos.x) < 10) && (Distance(c1pos.y, c4pos.y) < 10))
                    || ((c1pos.y > c5pos.y) && (Distance(c1pos.x, c5pos.x) < 10) && (Distance(c1pos.y, c5pos.y) < 10))
                    || ((c1pos.y > c6pos.y) && (Distance(c1pos.x, c6pos.x) < 10) && (Distance(c1pos.y, c6pos.y) < 10))
                    || ((c1pos.y > c7pos.y) && (Distance(c1pos.x, c7pos.x) < 10) && (Distance(c1pos.y, c7pos.y) < 10))
                    || ((c2pos.y > c3pos.y) && (Distance(c2pos.x, c3pos.x) < 10) && (Distance(c2pos.y, c3pos.y) < 10))
                    || ((c2pos.y > c4pos.y) && (Distance(c2pos.x, c4pos.x) < 10) && (Distance(c2pos.y, c4pos.y) < 10))
                    || ((c2pos.y > c5pos.y) && (Distance(c2pos.x, c5pos.x) < 10) && (Distance(c2pos.y, c5pos.y) < 10))
                    || ((c2pos.y > c6pos.y) && (Distance(c2pos.x, c6pos.x) < 10) && (Distance(c2pos.y, c6pos.y) < 10))
                    || ((c2pos.y > c7pos.y) && (Distance(c2pos.x, c7pos.x) < 10) && (Distance(c2pos.y, c7pos.y) < 10))
                    || ((c3pos.y > c4pos.y) && (Distance(c3pos.x, c4pos.x) < 10) && (Distance(c3pos.y, c4pos.y) < 10))
                    || ((c3pos.y > c5pos.y) && (Distance(c3pos.x, c5pos.x) < 10) && (Distance(c3pos.y, c5pos.y) < 10))
                    || ((c3pos.y > c6pos.y) && (Distance(c3pos.x, c6pos.x) < 10) && (Distance(c3pos.y, c6pos.y) < 10))
                    || ((c3pos.y > c7pos.y) && (Distance(c3pos.x, c7pos.x) < 10) && (Distance(c3pos.y, c7pos.y) < 10))
                    || ((c4pos.y > c5pos.y) && (Distance(c4pos.x, c5pos.x) < 10) && (Distance(c4pos.y, c5pos.y) < 10))
                    || ((c4pos.y > c6pos.y) && (Distance(c4pos.x, c6pos.x) < 10) && (Distance(c4pos.y, c6pos.y) < 10))
                    || ((c4pos.y > c7pos.y) && (Distance(c4pos.x, c7pos.x) < 10) && (Distance(c4pos.y, c7pos.y) < 10))
                    || ((c5pos.y > c6pos.y) && (Distance(c5pos.x, c6pos.x) < 10) && (Distance(c5pos.y, c6pos.y) < 10))
                    || ((c5pos.y > c7pos.y) && (Distance(c5pos.x, c7pos.x) < 10) && (Distance(c5pos.y, c7pos.y) < 10))
                    || ((c6pos.y > c7pos.y) && (Distance(c6pos.x, c7pos.x) < 10) && (Distance(c6pos.y, c7pos.y) < 10)))

                {
                    Debug.Log("wrong");
                    restart();
                }
            }
            //disc falls off edge
            if (!Input.GetMouseButton(0))
            {
                if ((c1pos.y < yMin) || (c2pos.y < yMin) || (c3pos.y < yMin)
                    || (c4pos.y < yMin) || (c5pos.y < yMin) || (c6pos.y < yMin) || (c7pos.y < yMin))
                {
                    Debug.Log("reset");
                    restart();
                }
            }
        }
        else if(GameObject.Find("disc5(Clone)") != null)
        {
            //5 disc
            float yMax = -7;     //Max y pos

            GameObject c1 = GameObject.Find("disc1(Clone)");
            GameObject c2 = GameObject.Find("disc2(Clone)");
            GameObject c3 = GameObject.Find("disc3(Clone)");
            GameObject c4 = GameObject.Find("disc4(Clone)");
            GameObject c5 = GameObject.Find("disc5(Clone)");

            Vector3 c1pos = c1.transform.position;
            Vector3 c2pos = c2.transform.position;
            Vector3 c3pos = c3.transform.position;
            Vector3 c4pos = c4.transform.position;
            Vector3 c5pos = c5.transform.position;

            if (!Input.GetMouseButton(0))
            {
                if ((c1pos.x < p1Xmax) && (c1pos.x > p1Xmin)
                  && (c2pos.x < p1Xmax) && (c2pos.x > p1Xmin)
                  && (c3pos.x < p1Xmax) && (c3pos.x > p1Xmin)
                  && (c1pos.z < zMax) && (c1pos.z > zMin)
                  && (c2pos.z < zMax) && (c2pos.z > zMin)
                  && (c3pos.z < zMax) && (c3pos.z > zMin)
                  && (c4pos.z < zMax) && (c4pos.z > zMin)
                  && (c5pos.z < zMax) && (c5pos.z > zMin)
                  && (c1pos.y < c2pos.y) && (c2pos.y < c3pos.y) && (c3pos.y < c4pos.y)
                  && (c4pos.y < c5pos.y)
                  && (c5pos.y < yMax)
                  && (won == false))

                {
                    Debug.Log("Win");
                    won = true;
                    restart();

                }
            }
            //states against rules
            if (!Input.GetMouseButton(0))
            {      //big disc over small      on the same pole                   has landed roughly within distance
                if (((c1pos.y > c2pos.y) && (Distance(c1pos.x, c2pos.x) < 15) && (Distance(c1pos.y, c2pos.y) < 10))
                    || ((c1pos.y > c3pos.y) && (Distance(c1pos.x, c3pos.x) < 10) && (Distance(c1pos.y, c3pos.y) < 10))
                    || ((c1pos.y > c4pos.y) && (Distance(c1pos.x, c4pos.x) < 10) && (Distance(c1pos.y, c4pos.y) < 10))
                    || ((c1pos.y > c5pos.y) && (Distance(c1pos.x, c5pos.x) < 10) && (Distance(c1pos.y, c5pos.y) < 10))
                    || ((c2pos.y > c3pos.y) && (Distance(c2pos.x, c3pos.x) < 10) && (Distance(c2pos.y, c3pos.y) < 10))
                    || ((c2pos.y > c4pos.y) && (Distance(c2pos.x, c4pos.x) < 10) && (Distance(c2pos.y, c4pos.y) < 10))
                    || ((c2pos.y > c5pos.y) && (Distance(c2pos.x, c5pos.x) < 10) && (Distance(c2pos.y, c5pos.y) < 10))
                    || ((c3pos.y > c4pos.y) && (Distance(c3pos.x, c4pos.x) < 10) && (Distance(c3pos.y, c4pos.y) < 10))
                    || ((c3pos.y > c5pos.y) && (Distance(c3pos.x, c5pos.x) < 10) && (Distance(c3pos.y, c5pos.y) < 10))
                    || ((c4pos.y > c5pos.y) && (Distance(c4pos.x, c5pos.x) < 10) && (Distance(c4pos.y, c5pos.y) < 10)))
                {
                    Debug.Log("wrong");
                    restart();
                }
            }
            //disc falls off edge
            if (!Input.GetMouseButton(0))
            {
                if ((c1pos.y < yMin) || (c2pos.y < yMin) || (c3pos.y < yMin)
                    || (c4pos.y < yMin) || (c5pos.y < yMin))
                {
                    Debug.Log("reset");
                    restart();
                }
            }
        }
        else
        {
            //3 disc
            float yMax = -17;     //Max y pos

            GameObject c1 = GameObject.Find("disc1(Clone)");
            GameObject c2 = GameObject.Find("disc2(Clone)");
            GameObject c3 = GameObject.Find("disc3(Clone)");

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
                  && (c1pos.y < c2pos.y) && (c2pos.y < c3pos.y)
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
            {      //big disc over small      on the same pole                   has landed roughly within distance
                if (((c1pos.y > c2pos.y) && (Distance(c1pos.x, c2pos.x) < 10) && (Distance(c1pos.y, c2pos.y) < 10))
                    || ((c1pos.y > c3pos.y) && (Distance(c1pos.x, c3pos.x) < 10) && (Distance(c1pos.y, c3pos.y) < 10))
                    || ((c2pos.y > c3pos.y) && (Distance(c2pos.x, c3pos.x) < 10) && (Distance(c2pos.y, c3pos.y) < 10)))
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
