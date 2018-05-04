#pragma strict

var guest_right : GameObject;
var guest_center : GameObject;
var guest_left : GameObject;

public var Clone_duration :float ;
var guestClone :int ;


var guest = new Array();

function Start () {
	guest[0] = guest_right;
	guest[1] = guest_center;
	guest[2] = guest_left;
	yield WaitForSeconds(2);
	guest_Creater();
}


function guest_Creater(){
	while(true){
		guestClone = Random.Range(0,3);
		var n = Instantiate(guest[guestClone],Vector3.zero,Quaternion.Euler(290f,0,0)) as GameObject;
		var n2 = Instantiate(guest[guestClone],Vector3.zero,Quaternion.identity) as GameObject;



		n.transform.parent = gameObject.transform;

		switch(guestClone){
			case 0:
			n.transform.localPosition = guest_right.transform.localPosition;
			break;
			case 1:
			n.transform.localPosition = guest_center.transform.localPosition;
			break;
			case 2:
			n.transform.localPosition = guest_left.transform.localPosition;
			break;
		}
			Debug.Log(n.transform.localEulerAngles.x);
			//n.GetComponent(RectTransform).rotation.x = 290;
			n.GetComponent(RectTransform).rotation = Quaternion.Euler(290f,0,0);

			//n.transform.localEulerAngles.x = -290;//guest_left.transform.localEulerAngles;
		
		//Instantiate(Monster[6],Vector3.zero,Quaternion.identity);
		yield WaitForSeconds(Clone_duration);
	}
}


