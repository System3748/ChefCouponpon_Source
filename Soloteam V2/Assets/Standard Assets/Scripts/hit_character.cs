using UnityEngine;
using System.Collections;

public class hit_character : MonoBehaviour {


	RaycastHit hit;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
//		Vector3 pos = ray.GetPoint (10);




		//Debug.DrawLine (ray.origin, 10000);


		if (Physics.Raycast (ray, out hit, 10)) {
			Debug.DrawLine (ray.origin, hit.point);
			Debug.Log (hit.transform.name);
			guestSuccess (hit);

		}
	}


	void guestSuccess(RaycastHit _hit){
		stage_manager._score += stage_manager._bonus;
		Destroy (_hit.transform.gameObject);
		
	}
}
