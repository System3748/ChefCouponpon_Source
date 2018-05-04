using UnityEngine;
using System.Collections;

public class destroy_myself : MonoBehaviour {


	public double aliveTime =0.0f;
	double timer = 0.0f;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		timer += 0.01f;
		if (aliveTime <= timer) {
			Destroy (this.transform.gameObject);
		}
	}
}
