using UnityEngine;
using System.Collections;

public class pointer_follow : MonoBehaviour {

	public double cooldown = 0.15f;
	public GameObject cheef_Image;
	// Use this for initialization

	Transform preFab;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		Vector3 pos = ray.GetPoint (10);

		transform.position = pos;

		Vector3 vecMousePosition = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y-15 , 20));

		if(cooldown > 0)
		{
			cooldown-=Time.deltaTime;
		}


		//var ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		//var vecMousePosition = g_camera.ScreenToWorldPoint(Vector3(mousePos.x, mousePos.y-15,20));


		#if false
		if(Input.GetMouseButton(0) && cooldown<=0)
		{
			Instantiate(cheef_Image, vecMousePosition , Quaternion.identity) ;
			cooldown = 0.15f;
		} 
		#endif

	}
}
