#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GestureRecognizer_GameState4101749473.h"

// GestureRecognizer.SoundController
struct SoundController_t2307757121;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// GestureRecognizer.PlayerController
struct PlayerController_t2790762029;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.LevelController
struct  LevelController_t1105956392  : public MonoBehaviour_t1158329972
{
public:
	// GestureRecognizer.SoundController GestureRecognizer.LevelController::soundController
	SoundController_t2307757121 * ___soundController_2;
	// UnityEngine.GameObject GestureRecognizer.LevelController::enemyPrefab
	GameObject_t1756533147 * ___enemyPrefab_3;
	// UnityEngine.GameObject GestureRecognizer.LevelController::player
	GameObject_t1756533147 * ___player_4;
	// UnityEngine.GameObject GestureRecognizer.LevelController::character_White
	GameObject_t1756533147 * ___character_White_5;
	// UnityEngine.GameObject GestureRecognizer.LevelController::item_White
	GameObject_t1756533147 * ___item_White_6;
	// UnityEngine.GameObject GestureRecognizer.LevelController::character_Blue
	GameObject_t1756533147 * ___character_Blue_7;
	// UnityEngine.GameObject GestureRecognizer.LevelController::item_Blue
	GameObject_t1756533147 * ___item_Blue_8;
	// System.Boolean GestureRecognizer.LevelController::character_toggle
	bool ___character_toggle_9;
	// System.String GestureRecognizer.LevelController::MainPage
	String_t* ___MainPage_10;
	// UnityEngine.GameObject GestureRecognizer.LevelController::countdownTextContainer
	GameObject_t1756533147 * ___countdownTextContainer_11;
	// UnityEngine.GameObject GestureRecognizer.LevelController::hud
	GameObject_t1756533147 * ___hud_12;
	// UnityEngine.GameObject GestureRecognizer.LevelController::scoreBoard
	GameObject_t1756533147 * ___scoreBoard_13;
	// UnityEngine.GameObject GestureRecognizer.LevelController::comboBoard
	GameObject_t1756533147 * ___comboBoard_14;
	// UnityEngine.GameObject[] GestureRecognizer.LevelController::liveBoard
	GameObjectU5BU5D_t3057952154* ___liveBoard_15;
	// UnityEngine.GameObject GestureRecognizer.LevelController::pauseMenu
	GameObject_t1756533147 * ___pauseMenu_16;
	// UnityEngine.GameObject GestureRecognizer.LevelController::mainMenu
	GameObject_t1756533147 * ___mainMenu_17;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::menuBestScoreText
	Text_t356221433 * ___menuBestScoreText_18;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::timerText
	Text_t356221433 * ___timerText_19;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::moneyText
	Text_t356221433 * ___moneyText_20;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::countdownText
	Text_t356221433 * ___countdownText_21;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::livesText
	Text_t356221433 * ___livesText_22;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::scoreText
	Text_t356221433 * ___scoreText_23;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::comboText
	Text_t356221433 * ___comboText_24;
	// UnityEngine.UI.Text GestureRecognizer.LevelController::endScoreText
	Text_t356221433 * ___endScoreText_25;
	// System.Single GestureRecognizer.LevelController::enemySpawnRate
	float ___enemySpawnRate_26;
	// System.Double GestureRecognizer.LevelController::timer
	double ___timer_33;
	// System.Double GestureRecognizer.LevelController::totaltimer
	double ___totaltimer_34;
	// System.Single GestureRecognizer.LevelController::score
	float ___score_35;
	// System.Int32 GestureRecognizer.LevelController::combo
	int32_t ___combo_36;
	// System.Single GestureRecognizer.LevelController::highScore
	float ___highScore_37;
	// System.Single GestureRecognizer.LevelController::enemySpawnTimer
	float ___enemySpawnTimer_38;
	// System.Single GestureRecognizer.LevelController::countdownToStartTimer
	float ___countdownToStartTimer_39;
	// System.Single GestureRecognizer.LevelController::countdownToEndTimer
	float ___countdownToEndTimer_40;
	// System.Single GestureRecognizer.LevelController::respawnTimerStep
	float ___respawnTimerStep_41;
	// System.Single GestureRecognizer.LevelController::countdown
	float ___countdown_42;
	// UnityEngine.GameObject GestureRecognizer.LevelController::enemyObject
	GameObject_t1756533147 * ___enemyObject_43;
	// UnityEngine.GameObject GestureRecognizer.LevelController::enemyToDestroy
	GameObject_t1756533147 * ___enemyToDestroy_44;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GestureRecognizer.LevelController::enemyList
	List_1_t1125654279 * ___enemyList_45;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GestureRecognizer.LevelController::recipeList
	List_1_t1125654279 * ___recipeList_46;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GestureRecognizer.LevelController::enemyListCopy
	List_1_t1125654279 * ___enemyListCopy_47;
	// GestureRecognizer.PlayerController GestureRecognizer.LevelController::playerController
	PlayerController_t2790762029 * ___playerController_48;
	// System.Int32 GestureRecognizer.LevelController::reciptCurrNum
	int32_t ___reciptCurrNum_49;
	// System.Single GestureRecognizer.LevelController::sceneTotalTime
	float ___sceneTotalTime_50;
	// System.Double GestureRecognizer.LevelController::_money
	double ____money_51;

public:
	inline static int32_t get_offset_of_soundController_2() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___soundController_2)); }
	inline SoundController_t2307757121 * get_soundController_2() const { return ___soundController_2; }
	inline SoundController_t2307757121 ** get_address_of_soundController_2() { return &___soundController_2; }
	inline void set_soundController_2(SoundController_t2307757121 * value)
	{
		___soundController_2 = value;
		Il2CppCodeGenWriteBarrier(&___soundController_2, value);
	}

	inline static int32_t get_offset_of_enemyPrefab_3() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemyPrefab_3)); }
	inline GameObject_t1756533147 * get_enemyPrefab_3() const { return ___enemyPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_enemyPrefab_3() { return &___enemyPrefab_3; }
	inline void set_enemyPrefab_3(GameObject_t1756533147 * value)
	{
		___enemyPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_character_White_5() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___character_White_5)); }
	inline GameObject_t1756533147 * get_character_White_5() const { return ___character_White_5; }
	inline GameObject_t1756533147 ** get_address_of_character_White_5() { return &___character_White_5; }
	inline void set_character_White_5(GameObject_t1756533147 * value)
	{
		___character_White_5 = value;
		Il2CppCodeGenWriteBarrier(&___character_White_5, value);
	}

	inline static int32_t get_offset_of_item_White_6() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___item_White_6)); }
	inline GameObject_t1756533147 * get_item_White_6() const { return ___item_White_6; }
	inline GameObject_t1756533147 ** get_address_of_item_White_6() { return &___item_White_6; }
	inline void set_item_White_6(GameObject_t1756533147 * value)
	{
		___item_White_6 = value;
		Il2CppCodeGenWriteBarrier(&___item_White_6, value);
	}

	inline static int32_t get_offset_of_character_Blue_7() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___character_Blue_7)); }
	inline GameObject_t1756533147 * get_character_Blue_7() const { return ___character_Blue_7; }
	inline GameObject_t1756533147 ** get_address_of_character_Blue_7() { return &___character_Blue_7; }
	inline void set_character_Blue_7(GameObject_t1756533147 * value)
	{
		___character_Blue_7 = value;
		Il2CppCodeGenWriteBarrier(&___character_Blue_7, value);
	}

	inline static int32_t get_offset_of_item_Blue_8() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___item_Blue_8)); }
	inline GameObject_t1756533147 * get_item_Blue_8() const { return ___item_Blue_8; }
	inline GameObject_t1756533147 ** get_address_of_item_Blue_8() { return &___item_Blue_8; }
	inline void set_item_Blue_8(GameObject_t1756533147 * value)
	{
		___item_Blue_8 = value;
		Il2CppCodeGenWriteBarrier(&___item_Blue_8, value);
	}

	inline static int32_t get_offset_of_character_toggle_9() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___character_toggle_9)); }
	inline bool get_character_toggle_9() const { return ___character_toggle_9; }
	inline bool* get_address_of_character_toggle_9() { return &___character_toggle_9; }
	inline void set_character_toggle_9(bool value)
	{
		___character_toggle_9 = value;
	}

	inline static int32_t get_offset_of_MainPage_10() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___MainPage_10)); }
	inline String_t* get_MainPage_10() const { return ___MainPage_10; }
	inline String_t** get_address_of_MainPage_10() { return &___MainPage_10; }
	inline void set_MainPage_10(String_t* value)
	{
		___MainPage_10 = value;
		Il2CppCodeGenWriteBarrier(&___MainPage_10, value);
	}

	inline static int32_t get_offset_of_countdownTextContainer_11() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___countdownTextContainer_11)); }
	inline GameObject_t1756533147 * get_countdownTextContainer_11() const { return ___countdownTextContainer_11; }
	inline GameObject_t1756533147 ** get_address_of_countdownTextContainer_11() { return &___countdownTextContainer_11; }
	inline void set_countdownTextContainer_11(GameObject_t1756533147 * value)
	{
		___countdownTextContainer_11 = value;
		Il2CppCodeGenWriteBarrier(&___countdownTextContainer_11, value);
	}

	inline static int32_t get_offset_of_hud_12() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___hud_12)); }
	inline GameObject_t1756533147 * get_hud_12() const { return ___hud_12; }
	inline GameObject_t1756533147 ** get_address_of_hud_12() { return &___hud_12; }
	inline void set_hud_12(GameObject_t1756533147 * value)
	{
		___hud_12 = value;
		Il2CppCodeGenWriteBarrier(&___hud_12, value);
	}

	inline static int32_t get_offset_of_scoreBoard_13() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___scoreBoard_13)); }
	inline GameObject_t1756533147 * get_scoreBoard_13() const { return ___scoreBoard_13; }
	inline GameObject_t1756533147 ** get_address_of_scoreBoard_13() { return &___scoreBoard_13; }
	inline void set_scoreBoard_13(GameObject_t1756533147 * value)
	{
		___scoreBoard_13 = value;
		Il2CppCodeGenWriteBarrier(&___scoreBoard_13, value);
	}

	inline static int32_t get_offset_of_comboBoard_14() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___comboBoard_14)); }
	inline GameObject_t1756533147 * get_comboBoard_14() const { return ___comboBoard_14; }
	inline GameObject_t1756533147 ** get_address_of_comboBoard_14() { return &___comboBoard_14; }
	inline void set_comboBoard_14(GameObject_t1756533147 * value)
	{
		___comboBoard_14 = value;
		Il2CppCodeGenWriteBarrier(&___comboBoard_14, value);
	}

	inline static int32_t get_offset_of_liveBoard_15() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___liveBoard_15)); }
	inline GameObjectU5BU5D_t3057952154* get_liveBoard_15() const { return ___liveBoard_15; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_liveBoard_15() { return &___liveBoard_15; }
	inline void set_liveBoard_15(GameObjectU5BU5D_t3057952154* value)
	{
		___liveBoard_15 = value;
		Il2CppCodeGenWriteBarrier(&___liveBoard_15, value);
	}

	inline static int32_t get_offset_of_pauseMenu_16() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___pauseMenu_16)); }
	inline GameObject_t1756533147 * get_pauseMenu_16() const { return ___pauseMenu_16; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenu_16() { return &___pauseMenu_16; }
	inline void set_pauseMenu_16(GameObject_t1756533147 * value)
	{
		___pauseMenu_16 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenu_16, value);
	}

	inline static int32_t get_offset_of_mainMenu_17() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___mainMenu_17)); }
	inline GameObject_t1756533147 * get_mainMenu_17() const { return ___mainMenu_17; }
	inline GameObject_t1756533147 ** get_address_of_mainMenu_17() { return &___mainMenu_17; }
	inline void set_mainMenu_17(GameObject_t1756533147 * value)
	{
		___mainMenu_17 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_17, value);
	}

	inline static int32_t get_offset_of_menuBestScoreText_18() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___menuBestScoreText_18)); }
	inline Text_t356221433 * get_menuBestScoreText_18() const { return ___menuBestScoreText_18; }
	inline Text_t356221433 ** get_address_of_menuBestScoreText_18() { return &___menuBestScoreText_18; }
	inline void set_menuBestScoreText_18(Text_t356221433 * value)
	{
		___menuBestScoreText_18 = value;
		Il2CppCodeGenWriteBarrier(&___menuBestScoreText_18, value);
	}

	inline static int32_t get_offset_of_timerText_19() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___timerText_19)); }
	inline Text_t356221433 * get_timerText_19() const { return ___timerText_19; }
	inline Text_t356221433 ** get_address_of_timerText_19() { return &___timerText_19; }
	inline void set_timerText_19(Text_t356221433 * value)
	{
		___timerText_19 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_19, value);
	}

	inline static int32_t get_offset_of_moneyText_20() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___moneyText_20)); }
	inline Text_t356221433 * get_moneyText_20() const { return ___moneyText_20; }
	inline Text_t356221433 ** get_address_of_moneyText_20() { return &___moneyText_20; }
	inline void set_moneyText_20(Text_t356221433 * value)
	{
		___moneyText_20 = value;
		Il2CppCodeGenWriteBarrier(&___moneyText_20, value);
	}

	inline static int32_t get_offset_of_countdownText_21() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___countdownText_21)); }
	inline Text_t356221433 * get_countdownText_21() const { return ___countdownText_21; }
	inline Text_t356221433 ** get_address_of_countdownText_21() { return &___countdownText_21; }
	inline void set_countdownText_21(Text_t356221433 * value)
	{
		___countdownText_21 = value;
		Il2CppCodeGenWriteBarrier(&___countdownText_21, value);
	}

	inline static int32_t get_offset_of_livesText_22() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___livesText_22)); }
	inline Text_t356221433 * get_livesText_22() const { return ___livesText_22; }
	inline Text_t356221433 ** get_address_of_livesText_22() { return &___livesText_22; }
	inline void set_livesText_22(Text_t356221433 * value)
	{
		___livesText_22 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_22, value);
	}

	inline static int32_t get_offset_of_scoreText_23() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___scoreText_23)); }
	inline Text_t356221433 * get_scoreText_23() const { return ___scoreText_23; }
	inline Text_t356221433 ** get_address_of_scoreText_23() { return &___scoreText_23; }
	inline void set_scoreText_23(Text_t356221433 * value)
	{
		___scoreText_23 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_23, value);
	}

	inline static int32_t get_offset_of_comboText_24() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___comboText_24)); }
	inline Text_t356221433 * get_comboText_24() const { return ___comboText_24; }
	inline Text_t356221433 ** get_address_of_comboText_24() { return &___comboText_24; }
	inline void set_comboText_24(Text_t356221433 * value)
	{
		___comboText_24 = value;
		Il2CppCodeGenWriteBarrier(&___comboText_24, value);
	}

	inline static int32_t get_offset_of_endScoreText_25() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___endScoreText_25)); }
	inline Text_t356221433 * get_endScoreText_25() const { return ___endScoreText_25; }
	inline Text_t356221433 ** get_address_of_endScoreText_25() { return &___endScoreText_25; }
	inline void set_endScoreText_25(Text_t356221433 * value)
	{
		___endScoreText_25 = value;
		Il2CppCodeGenWriteBarrier(&___endScoreText_25, value);
	}

	inline static int32_t get_offset_of_enemySpawnRate_26() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemySpawnRate_26)); }
	inline float get_enemySpawnRate_26() const { return ___enemySpawnRate_26; }
	inline float* get_address_of_enemySpawnRate_26() { return &___enemySpawnRate_26; }
	inline void set_enemySpawnRate_26(float value)
	{
		___enemySpawnRate_26 = value;
	}

	inline static int32_t get_offset_of_timer_33() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___timer_33)); }
	inline double get_timer_33() const { return ___timer_33; }
	inline double* get_address_of_timer_33() { return &___timer_33; }
	inline void set_timer_33(double value)
	{
		___timer_33 = value;
	}

	inline static int32_t get_offset_of_totaltimer_34() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___totaltimer_34)); }
	inline double get_totaltimer_34() const { return ___totaltimer_34; }
	inline double* get_address_of_totaltimer_34() { return &___totaltimer_34; }
	inline void set_totaltimer_34(double value)
	{
		___totaltimer_34 = value;
	}

	inline static int32_t get_offset_of_score_35() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___score_35)); }
	inline float get_score_35() const { return ___score_35; }
	inline float* get_address_of_score_35() { return &___score_35; }
	inline void set_score_35(float value)
	{
		___score_35 = value;
	}

	inline static int32_t get_offset_of_combo_36() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___combo_36)); }
	inline int32_t get_combo_36() const { return ___combo_36; }
	inline int32_t* get_address_of_combo_36() { return &___combo_36; }
	inline void set_combo_36(int32_t value)
	{
		___combo_36 = value;
	}

	inline static int32_t get_offset_of_highScore_37() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___highScore_37)); }
	inline float get_highScore_37() const { return ___highScore_37; }
	inline float* get_address_of_highScore_37() { return &___highScore_37; }
	inline void set_highScore_37(float value)
	{
		___highScore_37 = value;
	}

	inline static int32_t get_offset_of_enemySpawnTimer_38() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemySpawnTimer_38)); }
	inline float get_enemySpawnTimer_38() const { return ___enemySpawnTimer_38; }
	inline float* get_address_of_enemySpawnTimer_38() { return &___enemySpawnTimer_38; }
	inline void set_enemySpawnTimer_38(float value)
	{
		___enemySpawnTimer_38 = value;
	}

	inline static int32_t get_offset_of_countdownToStartTimer_39() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___countdownToStartTimer_39)); }
	inline float get_countdownToStartTimer_39() const { return ___countdownToStartTimer_39; }
	inline float* get_address_of_countdownToStartTimer_39() { return &___countdownToStartTimer_39; }
	inline void set_countdownToStartTimer_39(float value)
	{
		___countdownToStartTimer_39 = value;
	}

	inline static int32_t get_offset_of_countdownToEndTimer_40() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___countdownToEndTimer_40)); }
	inline float get_countdownToEndTimer_40() const { return ___countdownToEndTimer_40; }
	inline float* get_address_of_countdownToEndTimer_40() { return &___countdownToEndTimer_40; }
	inline void set_countdownToEndTimer_40(float value)
	{
		___countdownToEndTimer_40 = value;
	}

	inline static int32_t get_offset_of_respawnTimerStep_41() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___respawnTimerStep_41)); }
	inline float get_respawnTimerStep_41() const { return ___respawnTimerStep_41; }
	inline float* get_address_of_respawnTimerStep_41() { return &___respawnTimerStep_41; }
	inline void set_respawnTimerStep_41(float value)
	{
		___respawnTimerStep_41 = value;
	}

	inline static int32_t get_offset_of_countdown_42() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___countdown_42)); }
	inline float get_countdown_42() const { return ___countdown_42; }
	inline float* get_address_of_countdown_42() { return &___countdown_42; }
	inline void set_countdown_42(float value)
	{
		___countdown_42 = value;
	}

	inline static int32_t get_offset_of_enemyObject_43() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemyObject_43)); }
	inline GameObject_t1756533147 * get_enemyObject_43() const { return ___enemyObject_43; }
	inline GameObject_t1756533147 ** get_address_of_enemyObject_43() { return &___enemyObject_43; }
	inline void set_enemyObject_43(GameObject_t1756533147 * value)
	{
		___enemyObject_43 = value;
		Il2CppCodeGenWriteBarrier(&___enemyObject_43, value);
	}

	inline static int32_t get_offset_of_enemyToDestroy_44() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemyToDestroy_44)); }
	inline GameObject_t1756533147 * get_enemyToDestroy_44() const { return ___enemyToDestroy_44; }
	inline GameObject_t1756533147 ** get_address_of_enemyToDestroy_44() { return &___enemyToDestroy_44; }
	inline void set_enemyToDestroy_44(GameObject_t1756533147 * value)
	{
		___enemyToDestroy_44 = value;
		Il2CppCodeGenWriteBarrier(&___enemyToDestroy_44, value);
	}

	inline static int32_t get_offset_of_enemyList_45() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemyList_45)); }
	inline List_1_t1125654279 * get_enemyList_45() const { return ___enemyList_45; }
	inline List_1_t1125654279 ** get_address_of_enemyList_45() { return &___enemyList_45; }
	inline void set_enemyList_45(List_1_t1125654279 * value)
	{
		___enemyList_45 = value;
		Il2CppCodeGenWriteBarrier(&___enemyList_45, value);
	}

	inline static int32_t get_offset_of_recipeList_46() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___recipeList_46)); }
	inline List_1_t1125654279 * get_recipeList_46() const { return ___recipeList_46; }
	inline List_1_t1125654279 ** get_address_of_recipeList_46() { return &___recipeList_46; }
	inline void set_recipeList_46(List_1_t1125654279 * value)
	{
		___recipeList_46 = value;
		Il2CppCodeGenWriteBarrier(&___recipeList_46, value);
	}

	inline static int32_t get_offset_of_enemyListCopy_47() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___enemyListCopy_47)); }
	inline List_1_t1125654279 * get_enemyListCopy_47() const { return ___enemyListCopy_47; }
	inline List_1_t1125654279 ** get_address_of_enemyListCopy_47() { return &___enemyListCopy_47; }
	inline void set_enemyListCopy_47(List_1_t1125654279 * value)
	{
		___enemyListCopy_47 = value;
		Il2CppCodeGenWriteBarrier(&___enemyListCopy_47, value);
	}

	inline static int32_t get_offset_of_playerController_48() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___playerController_48)); }
	inline PlayerController_t2790762029 * get_playerController_48() const { return ___playerController_48; }
	inline PlayerController_t2790762029 ** get_address_of_playerController_48() { return &___playerController_48; }
	inline void set_playerController_48(PlayerController_t2790762029 * value)
	{
		___playerController_48 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_48, value);
	}

	inline static int32_t get_offset_of_reciptCurrNum_49() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___reciptCurrNum_49)); }
	inline int32_t get_reciptCurrNum_49() const { return ___reciptCurrNum_49; }
	inline int32_t* get_address_of_reciptCurrNum_49() { return &___reciptCurrNum_49; }
	inline void set_reciptCurrNum_49(int32_t value)
	{
		___reciptCurrNum_49 = value;
	}

	inline static int32_t get_offset_of_sceneTotalTime_50() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ___sceneTotalTime_50)); }
	inline float get_sceneTotalTime_50() const { return ___sceneTotalTime_50; }
	inline float* get_address_of_sceneTotalTime_50() { return &___sceneTotalTime_50; }
	inline void set_sceneTotalTime_50(float value)
	{
		___sceneTotalTime_50 = value;
	}

	inline static int32_t get_offset_of__money_51() { return static_cast<int32_t>(offsetof(LevelController_t1105956392, ____money_51)); }
	inline double get__money_51() const { return ____money_51; }
	inline double* get_address_of__money_51() { return &____money_51; }
	inline void set__money_51(double value)
	{
		____money_51 = value;
	}
};

struct LevelController_t1105956392_StaticFields
{
public:
	// GestureRecognizer.GameState GestureRecognizer.LevelController::gameState
	int32_t ___gameState_27;
	// System.Int32 GestureRecognizer.LevelController::healthCurrent
	int32_t ___healthCurrent_28;
	// System.Single GestureRecognizer.LevelController::screenTop
	float ___screenTop_29;
	// System.Single GestureRecognizer.LevelController::screenBottom
	float ___screenBottom_30;
	// System.Single GestureRecognizer.LevelController::screenLeft
	float ___screenLeft_31;
	// System.Single GestureRecognizer.LevelController::screenRight
	float ___screenRight_32;

public:
	inline static int32_t get_offset_of_gameState_27() { return static_cast<int32_t>(offsetof(LevelController_t1105956392_StaticFields, ___gameState_27)); }
	inline int32_t get_gameState_27() const { return ___gameState_27; }
	inline int32_t* get_address_of_gameState_27() { return &___gameState_27; }
	inline void set_gameState_27(int32_t value)
	{
		___gameState_27 = value;
	}

	inline static int32_t get_offset_of_healthCurrent_28() { return static_cast<int32_t>(offsetof(LevelController_t1105956392_StaticFields, ___healthCurrent_28)); }
	inline int32_t get_healthCurrent_28() const { return ___healthCurrent_28; }
	inline int32_t* get_address_of_healthCurrent_28() { return &___healthCurrent_28; }
	inline void set_healthCurrent_28(int32_t value)
	{
		___healthCurrent_28 = value;
	}

	inline static int32_t get_offset_of_screenTop_29() { return static_cast<int32_t>(offsetof(LevelController_t1105956392_StaticFields, ___screenTop_29)); }
	inline float get_screenTop_29() const { return ___screenTop_29; }
	inline float* get_address_of_screenTop_29() { return &___screenTop_29; }
	inline void set_screenTop_29(float value)
	{
		___screenTop_29 = value;
	}

	inline static int32_t get_offset_of_screenBottom_30() { return static_cast<int32_t>(offsetof(LevelController_t1105956392_StaticFields, ___screenBottom_30)); }
	inline float get_screenBottom_30() const { return ___screenBottom_30; }
	inline float* get_address_of_screenBottom_30() { return &___screenBottom_30; }
	inline void set_screenBottom_30(float value)
	{
		___screenBottom_30 = value;
	}

	inline static int32_t get_offset_of_screenLeft_31() { return static_cast<int32_t>(offsetof(LevelController_t1105956392_StaticFields, ___screenLeft_31)); }
	inline float get_screenLeft_31() const { return ___screenLeft_31; }
	inline float* get_address_of_screenLeft_31() { return &___screenLeft_31; }
	inline void set_screenLeft_31(float value)
	{
		___screenLeft_31 = value;
	}

	inline static int32_t get_offset_of_screenRight_32() { return static_cast<int32_t>(offsetof(LevelController_t1105956392_StaticFields, ___screenRight_32)); }
	inline float get_screenRight_32() const { return ___screenRight_32; }
	inline float* get_address_of_screenRight_32() { return &___screenRight_32; }
	inline void set_screenRight_32(float value)
	{
		___screenRight_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
