using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Start_New : MonoBehaviour
{
	public static List <long> charScore;

	// Use this for initialization
	void Start ()
	{
		//charScore.Add (PlayerPrefs.GetInt ("save 1"));
		Time.timeScale = 1;

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Input.GetKey (KeyCode.Escape)) {
			SceneManager.LoadScene (0);
		}	
	}

	void OnMouseDown() {
		Application.CaptureScreenshot("Screenshot.png");
	}

	public void btn_animatedCross ( string SceneName)
	{
		SceneManager.LoadScene (sceneName: SceneName);
	}
	public void btn_animatedCross (Animation crossAni, string SceneName)
	{
		crossAni.Play ();
		while (crossAni.isPlaying) {
		}
		SceneManager.LoadScene (sceneName: SceneName);

	}

	bool isFill = false;
	public void setImageRadio(Image targetIMG){
		
		tempIMG = targetIMG;
		//tempIMG.fillAmount += 1;

		InvokeRepeating ("fillIMG", 1 ,0.01f); 

	}


	Image tempIMG;

	void fillIMG(){
		Debug.Log ("HI");
		tempIMG.fillAmount += 0.02f;
		if (tempIMG.fillAmount >= 1) {
			CancelInvoke ();
		}
			
	}

}
