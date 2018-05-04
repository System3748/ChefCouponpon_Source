using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class coupon : MonoBehaviour {


	public GameObject mainPage;
	public GameObject couponPage;

	public GameObject BG01;
	public GameObject BG02;

	public Text exchange;
	public GameObject exchangeIMG;
	public Text exchanged;
	public GameObject exchangedIMG;


	public GameObject Check;

	// Use this for initialization
	void Start () {
		couponPage.SetActive (false);
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Input.GetKey (KeyCode.Escape)) {
			SceneManager.LoadScene (0);
		}	
	}


	public void btn_animatedCross ( string SceneName)
	{
		SceneManager.LoadScene (sceneName: SceneName);
	}

	public void cross_Coupon(){
//		Debug.Log ("YEs");
		mainPage.SetActive (!mainPage.activeSelf);
		couponPage.SetActive (!couponPage.activeSelf);
	}

	public void coupon_Click ()
	{
		BG01.SetActive (false);
		BG02.SetActive (true);
	}

	public void coupon_Exchange ()
	{
		Check.SetActive (!Check.activeSelf);
	}
	public void coupon_wanted(){
		coupon_Click ();
		Check.SetActive (false);
		exchangeIMG.SetActive (false);
		exchangedIMG.SetActive (true);
		exchange.text = "3";
		exchanged.text = "2";
	}
}
