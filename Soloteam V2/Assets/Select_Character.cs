using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Select_Character : MonoBehaviour {
	public Button Char_White;
	public Button Char_Blue;
	public Image IMG_Blue;
	public Image IMG_White;
	private Image tempIMG;

	public GameObject text_Blue;
	public GameObject text_White;
	public GameObject text_Default;

	public string gameStage;


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.Escape)) {
			SceneManager.LoadScene (0);
		}	
	}

	public void btn_animatedCross ( string SceneName)
	{
		SceneManager.LoadScene (sceneName: SceneName);
	}

	public void enterGame(string name){
		PlayerPrefs.SetString ("select_Char", name);
		SceneManager.LoadScene (sceneName:gameStage);
	}

	public void sendInfo(Image targetIMG){
		if(tempIMG != null){
			tempIMG.fillAmount = 0;
		}
			
		tempIMG = targetIMG;
		//tempIMG.fillAmount += 1;

		InvokeRepeating ("fillIMG", 0 ,0.01f); 

		if (targetIMG == IMG_Blue) {
			Char_Blue.interactable = false;
			Char_White.interactable = true;
			text_Default.SetActive (false);
			text_Blue.SetActive (true);
			text_White.SetActive (false);
		} else {
			Char_White.interactable = false;
			Char_Blue.interactable = true;
			text_Default.SetActive (false);
			text_Blue.SetActive (false);
			text_White.SetActive (true);
		}

		//if(cho)
	}

	private void fillIMG(){
		tempIMG.fillAmount += 0.02f;
		if (tempIMG.fillAmount >= 1) {
			CancelInvoke ();
		}

	}
}
