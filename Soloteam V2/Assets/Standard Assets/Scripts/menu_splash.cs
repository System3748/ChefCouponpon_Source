using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class menu_splash : MonoBehaviour {

	public Scrollbar _menuList ;
	public Image _background;

	public Sprite[] menuSprite;

	public Image _handle;

	public double _step;
	// Use this for initialization
	void Start () {
		_menuList = this.GetComponent<Scrollbar> ();
		menuSprite = Resources.LoadAll<Sprite>(@"background");

		//_handle = this.GetComponentInChildren<Image> ();
		_step =  1 / _menuList.numberOfSteps;
		_menuList.onValueChanged.AddListener (delegate {changeBackground ( (int)(_menuList.value / 0.33));});
	}

	public void changeBackground(int value){
		Debug.Log (value);
		_background.overrideSprite = menuSprite [value];
		_handle.overrideSprite = menuSprite [value];

	}	
	// Update is called once per frame
	void Update () {
		Ray raycast = Camera.main.ScreenPointToRay (Input.mousePosition);
		Vector3 pos = raycast.GetPoint (10);

		transform.position = pos;
	}
}
