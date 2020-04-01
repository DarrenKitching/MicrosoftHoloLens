using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ThreeDiscSpawn : MonoBehaviour
{
    public Transform Spawnpoint1;
    public GameObject Prefab1;

    public Transform Spawnpoint2;
    public GameObject Prefab2;

    public Transform Spawnpoint3;
    public GameObject Prefab3;
    void OnMouseDown()
    {
        Destroy(GameObject.Find("disc1(Clone)"));
        Destroy(GameObject.Find("disc2(Clone)"));
        Destroy(GameObject.Find("disc3(Clone)"));
        Destroy(GameObject.Find("disc4(Clone)"));
        Destroy(GameObject.Find("disc5(Clone)"));
        Destroy(GameObject.Find("disc6(Clone)"));
        Destroy(GameObject.Find("disc7(Clone)"));

        Instantiate(Prefab1, Spawnpoint1.position, Spawnpoint1.rotation);
        Instantiate(Prefab2, Spawnpoint2.position, Spawnpoint2.rotation);
        Instantiate(Prefab3, Spawnpoint3.position, Spawnpoint3.rotation);
        
        
    }


}
