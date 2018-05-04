using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using UnityEngine.SceneManagement;

namespace GestureRecognizer
{
	public enum GameState { Menu, Tutorial, Settings, Playing, Paused, LifeLost, CountDownToStart, CountDownToEnd, GameOver }

	/// <summary>
	/// Controls the level (game in general)
	/// </summary>
	public class LevelController : MonoBehaviour
	{
		/// <summary>
		/// Reference of the sound controller
		/// </summary>
		public SoundController soundController;

		/// <summary>
		/// Enemy prefab
		/// </summary>
		public GameObject enemyPrefab;

		/// <summary>
		/// Reference of the player
		/// </summary>
		public GameObject player;
		public GameObject character_White;
		public GameObject item_White;
		public GameObject character_Blue;
		public GameObject item_Blue;
		public bool character_toggle = false;


		public string MainPage;

		/// <summary>
		/// Reference of the countdown text container
		/// </summary>
		public GameObject countdownTextContainer;

		/// <summary>
		/// Reference of the hud
		/// </summary>
		public GameObject hud;

		/// <summary>
		/// Reference of the scoreboard
		/// </summary>
		public GameObject scoreBoard;
		public GameObject comboBoard;
		public GameObject[] liveBoard;

		/// <summary>
		/// Reference of the pause menu
		/// </summary>
		public GameObject pauseMenu;

		/// <summary>
		/// Reference of the main menu
		/// </summary>
		public GameObject mainMenu;

		/// <summary>
		/// The text in the menu which shows the best score
		/// </summary>
		public Text menuBestScoreText;

		/// <summary>
		/// The text in the menu which shows the best score
		/// </summary>
		public Text timerText;

		public Text moneyText;

		/// <summary>
		/// The text which shows the countdown
		/// </summary>
		public Text countdownText;

		/// <summary>
		/// The text which shows the number of lives the player has
		/// </summary>
		public Text livesText;

		/// <summary>
		/// The text which shows the player's score
		/// </summary>
		public Text scoreText;

		public Text comboText;



		/// <summary>
		/// The text which shows the final score
		/// </summary>
		public Text endScoreText;

		/// <summary>
		/// How fast enemies spawn one after another
		/// </summary>
		[HideInInspector]
		public float enemySpawnRate;

		/// <summary>
		/// Game's state
		/// </summary>
		public static GameState gameState = GameState.Menu;

		/// <summary>
		/// Current health of the player
		/// </summary>
		public static int healthCurrent;

		/// <summary>
		/// Screen positions are required to spawn enemies outside of the screen limits
		/// </summary>
		public static float screenTop;
		public static float screenBottom;
		public static float screenLeft;
		public static float screenRight;


		public double timer = 180f;
		public double totaltimer;
		/// <summary>
		/// Current player score
		/// </summary>
		private float score;
		private int combo;

		/// <summary>
		/// Player's highest score
		/// </summary>
		private float highScore;

		/// <summary>
		/// Timer for enemy spawn
		/// </summary>
		private float enemySpawnTimer;

		/// <summary>
		/// The timer which counts down before start
		/// </summary>
		private float countdownToStartTimer;

		/// <summary>
		/// The timer which counts down after the player loses his last health
		/// </summary>
		private float countdownToEndTimer;

		/// <summary>
		/// Time required to spawn after dying
		/// </summary>
		private float respawnTimerStep = 1f;

		/// <summary>
		/// Countdown
		/// </summary>
		private float countdown;

		/// <summary>
		/// Temp variable for instantiating an enemy object
		/// </summary>
		private GameObject enemyObject;

		/// <summary>
		/// The enemy that was destroy and is about to be removed from the enemy list
		/// </summary>
		private GameObject enemyToDestroy;

		/// <summary>
		/// List of enemies
		/// </summary>
		//private List<GameObject> enemyList = new List<GameObject>();
		public List<GameObject> enemyList = new List<GameObject>();
		public List<GameObject> recipeList = new List<GameObject>();

		/// <summary>
		/// A copy of enemy list
		/// </summary>
		private List<GameObject> enemyListCopy = new List<GameObject>();

		/// <summary>
		/// Reference of the player controller
		/// </summary>
		private PlayerController playerController;


		private void Awake()
		{

			// Set application settings
			Screen.sleepTimeout = SleepTimeout.NeverSleep;

			// Set high score and show on main menu
			if (!PlayerPrefs.HasKey(Strings.HighScore))
			{
				PlayerPrefs.SetFloat(Strings.HighScore, 0f);
			}

			highScore = PlayerPrefs.GetFloat(Strings.HighScore);

			menuBestScoreText.text = PlayerPrefs.GetFloat(Strings.HighScore).ToString("C0");
			timerText.text = timer > 60 ? 
				string.Format ("{0:0}:{1:00}", timer / 60, timer % 60) :
				string.Format ("{0:0.00 s}", timer);

			screenLeft = Camera.main.ScreenToWorldPoint(Vector3.zero).x;
			screenBottom = Camera.main.ScreenToWorldPoint(Vector3.zero).y;
			screenRight = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0)).x;
			screenTop = Camera.main.ScreenToWorldPoint(new Vector3(0, Screen.height, 0)).y;


			if (PlayerPrefs.HasKey ("select_Char")) {
				switch (PlayerPrefs.GetString ("select_Char")) {
				case "White":
					character_toggle = false;
					break;

				case "Blue":
					character_toggle  = true;
					break;

				}
				character_Blue.SetActive (character_toggle);
				item_Blue.SetActive (character_toggle);
				character_White.SetActive (!character_toggle);
				item_White.SetActive (!character_toggle);
			}

			//ComboObject = comboText.gameObject;
		}


		private void Start()
		{
			combo = 0;
			timerText.text = timer > 60 ?
				string.Format ("{0:0}:{1:00}", (int)timer / 60, (int)timer % 60) :
				string.Format ("{0:#.00 s}", timer);

			playerController = player.GetComponent<PlayerController>();

			RestartGame ();
		}


		private void Update()
		{
			switch (gameState)
			{
				case GameState.Menu:

					if (Input.GetKeyDown(KeyCode.Escape))
					{
					SceneManager.LoadScene (0);
					}

					break;

			case GameState.Playing:
				enemySpawnTimer += Time.deltaTime;
				enemySpawnRate = Mathf.Clamp (enemySpawnRate - (Time.deltaTime * Constants.EnemySpawnRateTimeMultiplier), Constants.EnemySpawnRateMin, Constants.EnemySpawnRateMax);


				UpdateTimer (Time.deltaTime);
				SpawnRecipe ();

					if (enemySpawnTimer > enemySpawnRate)
					{
						enemySpawnTimer = 0;
						SpawnEnemy();
					}

					if (Input.GetKey(KeyCode.Space))
					{
						score++;
						
					}

					if (Input.GetKeyDown(KeyCode.Escape))
					{
						ToggleGame();
					}

					break;

				case GameState.Paused:

					if (Input.GetKeyDown(KeyCode.Escape))
					{
						ToggleGame();
					}

					break;

			case GameState.CountDownToStart:

				countdownToStartTimer += Time.deltaTime * Constants.CountDownMultiplier;
				countdownText.fontSize--;
				//Debug.Log (countdownText.fontSize);
					
					if (countdownToStartTimer >= respawnTimerStep)
					{
						countdownToStartTimer = 0;
						countdown--;

					countdownText.fontSize=189;

						countdownText.text = (countdown > 0) ? countdown.ToString() : "GO!";

						if (countdown == -1)
						{
							countdownTextContainer.SetActive(false);
							countdownText.text = "3";
							gameState = GameState.Playing;
							SpawnEnemy();
						}
					}

					break;

				case GameState.CountDownToEnd:

					countdownToEndTimer += Time.deltaTime;

					if (countdownToEndTimer >= Constants.CountDownToEndTimeout)
					{
						FinalizeGame();
					}

					break;

			}


		}


		public int reciptCurrNum = -1;

		private void SpawnEnemy()
		{
			enemyObject = Instantiate(enemyPrefab, new Vector3(UnityEngine.Random.Range(screenLeft, screenRight), screenTop + Constants.EnemySpawnOffset, 0), Quaternion.identity) as GameObject;
			enemyObject.GetComponent<EnemyController>().levelController = this;

			enemyObject.name = Strings.Enemy;
			enemyObject.GetComponent<EnemyController> ().Combo = this.comboBoard;

			enemyList.Add(enemyObject);


		}

		private void SpawnRecipe(){
			
			if (enemyList.Count > 0) {

				if (reciptCurrNum != -1)
					recipeList [reciptCurrNum].SetActive (false);

				reciptCurrNum = enemyList[0].GetComponent<EnemyController>().typeNum;
				recipeList [reciptCurrNum].SetActive (true);
			}
//
//			if (enemyList != null) {
//				recipeList [enemyList [0].GetComponent<EnemyController> ().typeNum].SetActive (true);
//			}

		}

		private GameObject FindTarget(string enemyType)
		{

			foreach (GameObject enemy in enemyList)
			{
				if (enemy.GetComponent<EnemyController>().enemy.TypeString == enemyType)
				{
					return enemy;
				}
			}

			return null;
		}


		public void Fire(string enemyType)
		{

			GameObject target = FindTarget(enemyType);

			if (target != null)
			{
				playerController.Fire(target);
			}

		}


		public void ConfirmEnemyKill(GameObject enemyToDestroy, bool scoreTheKill)
		{
			enemyList.Remove(enemyToDestroy);

			playerController.NullTarget();
			if (scoreTheKill) IncrementScore();
		}


		public void ConfirmPlayerKill()
		{
			enemySpawnRate = Mathf.Clamp(enemySpawnRate + Constants.EnemySpawnRateRegain, Constants.EnemySpawnRateMin, Constants.EnemySpawnRateMax);

			gameState = GameState.LifeLost;
			healthCurrent -= 1;

			KillAllEnemies();

			if (healthCurrent == 0)
			{
				EndGame();
			}
		}


		public void KillAllEnemies(bool scoreTheKill = false)
		{
			foreach (GameObject e in enemyList)
			{
				enemyListCopy.Add(e);
			}

			foreach (GameObject e in enemyListCopy)
			{
				e.GetComponent<EnemyController>().KillEnemy(scoreTheKill);
			}


			enemyListCopy.Clear();
			enemyList.Clear();

		}



		public void DestroyAllEnemies()
		{
			for (int i = enemyList.Count - 1; i == 0; i--)
			{
				enemyToDestroy = enemyList[i];
				enemyList.RemoveAt(i);

				Destroy(enemyToDestroy);
			}
		}


		public void DestroyObjects(EnemyController[] objectsToDestroy)
		{
			for (int i = 0; i < objectsToDestroy.Length; i++)
			{
				Destroy(objectsToDestroy[i].gameObject);
			}
		}


		public void DestroyObjects(LaserController[] objectsToDestroy)
		{
			for (int i = 0; i < objectsToDestroy.Length; i++)
			{
				Destroy(objectsToDestroy[i].gameObject);
			}
		}


		public void DestroyAllObjects()
		{
			DestroyObjects(GameObject.FindObjectsOfType<EnemyController>());
			DestroyObjects(GameObject.FindObjectsOfType<LaserController>());
		}


		public void RespawnPlayer()
		{
			gameState = GameState.Playing;
			UpdateLives();
		}


		public void IncrementScore()
		{
			combo++;
			UpdateScore();
			score++;

			if(combo > 1){
				comboBoard.SetActive (true);
				UpdateCombo();
			}
		}


		public void ToggleGame()
		{
			if (gameState == GameState.Playing)
			{
				soundController.DoMusic(SoundAction.Pause);
				gameState = GameState.Paused;
				pauseMenu.SetActive(true);
				Time.timeScale = 0;
			}
			else if (gameState == GameState.Paused)
			{
				soundController.DoMusic(SoundAction.Play);
				gameState = GameState.Playing;
				pauseMenu.SetActive(false);
				Time.timeScale = 1;
			}
		}


		private float sceneTotalTime;
		public void StartGame()
		{
			foreach (GameObject n in liveBoard) {
				n.SetActive (true);
			}

			player.transform.rotation = Quaternion.identity;
			enemyList.Clear();
			enemyListCopy.Clear();
			gameState = GameState.CountDownToStart;

			healthCurrent = Constants.HealthDefault;
			score = Constants.ZeroDefault;
			countdown = Constants.CountDownDefault;
			countdownToStartTimer = Constants.ZeroDefault;
			countdownToEndTimer = Constants.ZeroDefault;
			enemySpawnTimer = Constants.ZeroDefault;
			enemySpawnRate = Constants.EnemySpawnRateMax;
			countdownTextContainer.SetActive(true);

			hud.SetActive(true);
			mainMenu.SetActive(false);
			scoreBoard.SetActive(false);
			pauseMenu.SetActive(false);

			playerController.StartPlayer();


			totaltimer = timer;
			//InvokeRepeating ("UpdateTimer", (float)timer, 0.1f);

			Time.timeScale = 1;
		}


		private void EndGame()
		{
			liveBoard [0].SetActive (false);
			gameState = GameState.CountDownToEnd;

			if ((float)_money > highScore)
			{
				highScore = (float)_money;
				PlayerPrefs.SetFloat(Strings.HighScore, highScore);
			}

			hud.SetActive(false);



		}


		private void FinalizeGame()
		{
			DestroyAllObjects();
			countdownToEndTimer = Constants.ZeroDefault;
			gameState = GameState.GameOver;
			scoreBoard.SetActive(true);
			//scoreBoard.SetActive(false);

			//endScoreText.text = score.ToString();
			endScoreText.text = _money > highScore ? 
				String.Format ("{0:C0} -> {1:C0}", highScore, _money) :
				_money.ToString ("C0");
		}

		public void RestartGame_MENU(){
			if (MainPage != null) {
				SceneManager.LoadScene (sceneName: MainPage);
			} else {
				SceneManager.LoadScene (0);
			}
		}

		public void RestartGame()
		{

			DestroyAllObjects();
			EndGame();
			StartGame();
			soundController.DoMusic(SoundAction.Play);
		}


		public void QuitGame()
		{
			DestroyAllObjects();
			playerController.EndPlayer();
			gameState = GameState.Menu;

			mainMenu.SetActive(true);
			scoreBoard.SetActive(false);
			pauseMenu.SetActive(false);
			hud.SetActive(false);
			soundController.DoMusic(SoundAction.Play);
		}


		private Vector2 ScreenToWorld(Vector3 position)
		{
			Vector3 worldCoordinate = new Vector3(position.x, position.y, 10);
			return Camera.main.ScreenToWorldPoint(worldCoordinate);
		}


		private void UpdateLives()
		{
			liveBoard [healthCurrent].SetActive (false);

			livesText.text = healthCurrent.ToString();
			combo = 0;
			UpdateCombo ();
			comboBoard.SetActive (false);


		}

		private double _money;
		private void UpdateScore()
		{
			scoreText.text = score.ToString("000");
			_money += Math.Sqrt ((double)combo) * 500; 
			moneyText.text = _money.ToString ("000");
		}

		private void UpdateCombo()
		{
			comboText.text = combo.ToString ();
		}

		private void UpdateTimer(float curr){
			totaltimer -= curr;

			if (totaltimer <= 0) {
				FinalizeGame ();
				CancelInvoke ();
			}

			timerText.text = totaltimer > 60 ?
				string.Format ("{0:0}:{1:00}", (int)totaltimer / 60, (int)totaltimer % 60) :
				string.Format ("{0:#.00 s}", totaltimer);
		}
	} 
}