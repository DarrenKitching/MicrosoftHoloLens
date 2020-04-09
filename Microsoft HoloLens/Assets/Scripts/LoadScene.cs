using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LoadScene : MonoBehaviour
{
    public void change(string sceneName, LoadSceneMode mode = LoadSceneMode.Single)
    {
        SceneManager.LoadScene(sceneName, mode);
    }

    public void Load(string sceneName)
    {
        //todo menu.add(currentScene)
        //this.gameObject.GetComponent<Renderer>().material.color = Color.red;
        SceneManager.LoadScene(sceneName);
        //todo menu.remove(currentScene)
    }
}
