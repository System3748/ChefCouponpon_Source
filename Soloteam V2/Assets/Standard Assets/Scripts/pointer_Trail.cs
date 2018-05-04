using UnityEngine;
using System.Collections;

public class pointer_Trail : MonoBehaviour {

	private float fixX, fixY;
	// Use this for initialization
	void Start () {
		fixX = Screen.width /2;
		fixY = Screen.height /2;
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetMouseButton(0)){
			this.transform.localPosition = 
				Camera.main.ScreenToWorldPoint (new Vector3 (Input.mousePosition.x, Input.mousePosition.y, 10));
		}
	}
}
