using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SevenDiskSpawn : MonoBehaviour
{
    public Transform Spawnpoint1;
    public GameObject Prefab1;

    public Transform Spawnpoint2;
    public GameObject Prefab2;

    public Transform Spawnpoint3;
    public GameObject Prefab3;

    public Transform Spawnpoint4;
    public GameObject Prefab4;

    public Transform Spawnpoint5;
    public GameObject Prefab5;

    public Transform Spawnpoint6;
    public GameObject Prefab6;

    public Transform Spawnpoint7;
    public GameObject Prefab7;
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
        Instantiate(Prefab4, Spawnpoint4.position, Spawnpoint4.rotation);
        Instantiate(Prefab5, Spawnpoint5.position, Spawnpoint5.rotation);
        Instantiate(Prefab6, Spawnpoint6.position, Spawnpoint6.rotation);
        Instantiate(Prefab7, Spawnpoint7.position, Spawnpoint7.rotation);


    }


}
