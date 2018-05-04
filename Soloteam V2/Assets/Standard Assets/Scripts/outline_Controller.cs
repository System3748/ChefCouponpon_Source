using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class outline_Controller : MonoBehaviour {

	// Use this for initialization
	private Outline _outline;
	[Range(0,1000)]
	public int _range;
	public float _speed;

	void Start () {
		_outline = this.GetComponent <Outline> ();
		//Time.fixedTime = _speed;
	}

	void Update(){
		//Time.fixedTime = _speed;

	}

	// Update is called once per frame
	void FixedUpdate () {
		_outline.effectDistance = new Vector2 (Random.Range (-_range, _range), Random.Range (-_range, _range));
	}
}
