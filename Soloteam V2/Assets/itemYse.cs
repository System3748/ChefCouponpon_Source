using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class itemYse : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	public void killItems (GameObject item) {
		Destroy (item.gameObject);	
	}
}
