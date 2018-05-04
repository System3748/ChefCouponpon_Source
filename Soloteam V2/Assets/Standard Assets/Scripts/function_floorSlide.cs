using UnityEngine;
using System.Collections;

public class function_floorSlide : MonoBehaviour
{
	
	public Material floor;
	// Use this for initialization
	void Start ()
	{
		floor = this.GetComponent<Renderer> ().material;
	}
	
	// Update is called once per frame
	public float SlideSpeed;
	public float floorLook;

	void Update ()
	{
		
		floor.SetTextureOffset ("_MainTex", new Vector2 (0, floor.mainTextureOffset.y + SlideSpeed)); 
		floorLook = floor.mainTextureOffset.y;

	}
}
