using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class Score_Test : MonoBehaviour {
	
	public Vector3 initialPostotion;
	public int MaxDigit = 5;
	int _temp = 0;

	public Image[] score;// = new Image[5];


	public Sprite[] numSprite;



	// Use this for initialization
	void Start () {
		initialPostotion = this.GetComponent<RectTransform> ().localPosition;
		numSprite = Resources.LoadAll<Sprite>(@"number");
		score = this.GetComponentsInChildren<Image> ();
		
	}
	
	// Update is called once per frame
	void Update () {
		//stage_manager._score ++;
		_temp = stage_manager._score;
		//for (int n = 0; n < MaxDigit; n++) {
		for (int n = MaxDigit -1 ; n > 0; n--) {
			
		 	//score [n].overrideSprite = Resources.Load (String.Format("Texture/number_{0}","1"), typeof(Sprite)) as Sprite;

			score[n].overrideSprite = numSprite[_temp % 10];
			_temp /= 10;
		}
	}
}
