using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class character_select : MonoBehaviour {

	public Sprite _west; 
	public Sprite _east; 

	public void selectWest(){
		this.GetComponent<Image> ().overrideSprite = _west;
	}
	public void selectEast(){
		this.GetComponent<Image> ().overrideSprite = _east;
	}
	public void start_Click(){
		//Application.loadedLevel (1);
		SceneManager.LoadScene(2);
	}
}
