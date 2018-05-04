using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class talker : MonoBehaviour {

	public Button character_White;
	public Button character_Blue;

	public int []whoTalk;
	public GameObject []talks;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void return_Menu(string SceneName)
	{
		SceneManager.LoadScene (sceneName: SceneName);
	}

	private void who_Talk(int num)
	{
		switch (num) {
		case 0:
			character_Blue.interactable = true;
			character_White.interactable = false;
			break;
		case 1:
			character_White.interactable = true;
			character_Blue.interactable = false;
			break;
		case 2:
			character_White.interactable = false;
			character_Blue.interactable = false;
			break;
		}
	}


	private int n =0;
	public void demoMessage(string SceneName){
		if (n >= whoTalk.Length-1) {
			return_Menu (SceneName);
		}

			Debug.Log (n);
			who_Talk (whoTalk[n]);

			if (n != 0) {
				talks [n - 1].SetActive (false);
			}

			talks [n].SetActive (true);


		n++;

	}


}
