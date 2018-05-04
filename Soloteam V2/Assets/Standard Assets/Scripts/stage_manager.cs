using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class stage_manager : MonoBehaviour {


	public static int _score = 200;
	public static int _bonus = 5;
	public int score = 0;
	public GameObject[] guestCreater;
	GameObject n ;

	public GameObject last; 
	public Text Name;

	public double beyond;
	// Use this for initialization
	void Start () {



	}
	
	// Update is called once per frame
	void Update () {
		score = _score;
		if (Input.GetKey (KeyCode.Escape)) {
			last.SetActive(!last.activeSelf);
		}

		
	}





}
