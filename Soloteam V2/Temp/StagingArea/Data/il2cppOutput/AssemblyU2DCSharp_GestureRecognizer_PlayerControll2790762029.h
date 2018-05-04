#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GestureRecognizer_PlayerState3908981722.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// GestureRecognizer.LevelController
struct LevelController_t1105956392;
// GestureRecognizer.GestureBehaviour
struct GestureBehaviour_t2600571940;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.PlayerController
struct  PlayerController_t2790762029  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GestureRecognizer.PlayerController::laserPrefab
	GameObject_t1756533147 * ___laserPrefab_2;
	// UnityEngine.GameObject GestureRecognizer.PlayerController::explosionPrefab
	GameObject_t1756533147 * ___explosionPrefab_3;
	// UnityEngine.GameObject GestureRecognizer.PlayerController::engines
	GameObject_t1756533147 * ___engines_4;
	// UnityEngine.MeshRenderer GestureRecognizer.PlayerController::shipRenderer
	MeshRenderer_t1268241104 * ___shipRenderer_5;
	// UnityEngine.GameObject GestureRecognizer.PlayerController::playerTarget
	GameObject_t1756533147 * ___playerTarget_6;
	// GestureRecognizer.LevelController GestureRecognizer.PlayerController::levelController
	LevelController_t1105956392 * ___levelController_7;
	// GestureRecognizer.GestureBehaviour GestureRecognizer.PlayerController::gestureBehaviour
	GestureBehaviour_t2600571940 * ___gestureBehaviour_8;
	// GestureRecognizer.PlayerState GestureRecognizer.PlayerController::playerState
	int32_t ___playerState_9;
	// System.Single GestureRecognizer.PlayerController::angularSpeed
	float ___angularSpeed_10;
	// System.Single GestureRecognizer.PlayerController::angle
	float ___angle_11;
	// System.Single GestureRecognizer.PlayerController::deathTimer
	float ___deathTimer_12;
	// System.Single GestureRecognizer.PlayerController::blinkTimer
	float ___blinkTimer_13;
	// System.Int32 GestureRecognizer.PlayerController::numberOfBlinksCurrent
	int32_t ___numberOfBlinksCurrent_14;
	// UnityEngine.GameObject GestureRecognizer.PlayerController::laserObject
	GameObject_t1756533147 * ___laserObject_15;
	// UnityEngine.Transform GestureRecognizer.PlayerController::target
	Transform_t3275118058 * ___target_16;
	// UnityEngine.Vector3 GestureRecognizer.PlayerController::targetVector
	Vector3_t2243707580  ___targetVector_17;
	// UnityEngine.Quaternion GestureRecognizer.PlayerController::q
	Quaternion_t4030073918  ___q_18;

public:
	inline static int32_t get_offset_of_laserPrefab_2() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___laserPrefab_2)); }
	inline GameObject_t1756533147 * get_laserPrefab_2() const { return ___laserPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_laserPrefab_2() { return &___laserPrefab_2; }
	inline void set_laserPrefab_2(GameObject_t1756533147 * value)
	{
		___laserPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___laserPrefab_2, value);
	}

	inline static int32_t get_offset_of_explosionPrefab_3() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___explosionPrefab_3)); }
	inline GameObject_t1756533147 * get_explosionPrefab_3() const { return ___explosionPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_explosionPrefab_3() { return &___explosionPrefab_3; }
	inline void set_explosionPrefab_3(GameObject_t1756533147 * value)
	{
		___explosionPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_3, value);
	}

	inline static int32_t get_offset_of_engines_4() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___engines_4)); }
	inline GameObject_t1756533147 * get_engines_4() const { return ___engines_4; }
	inline GameObject_t1756533147 ** get_address_of_engines_4() { return &___engines_4; }
	inline void set_engines_4(GameObject_t1756533147 * value)
	{
		___engines_4 = value;
		Il2CppCodeGenWriteBarrier(&___engines_4, value);
	}

	inline static int32_t get_offset_of_shipRenderer_5() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___shipRenderer_5)); }
	inline MeshRenderer_t1268241104 * get_shipRenderer_5() const { return ___shipRenderer_5; }
	inline MeshRenderer_t1268241104 ** get_address_of_shipRenderer_5() { return &___shipRenderer_5; }
	inline void set_shipRenderer_5(MeshRenderer_t1268241104 * value)
	{
		___shipRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___shipRenderer_5, value);
	}

	inline static int32_t get_offset_of_playerTarget_6() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___playerTarget_6)); }
	inline GameObject_t1756533147 * get_playerTarget_6() const { return ___playerTarget_6; }
	inline GameObject_t1756533147 ** get_address_of_playerTarget_6() { return &___playerTarget_6; }
	inline void set_playerTarget_6(GameObject_t1756533147 * value)
	{
		___playerTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerTarget_6, value);
	}

	inline static int32_t get_offset_of_levelController_7() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___levelController_7)); }
	inline LevelController_t1105956392 * get_levelController_7() const { return ___levelController_7; }
	inline LevelController_t1105956392 ** get_address_of_levelController_7() { return &___levelController_7; }
	inline void set_levelController_7(LevelController_t1105956392 * value)
	{
		___levelController_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelController_7, value);
	}

	inline static int32_t get_offset_of_gestureBehaviour_8() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___gestureBehaviour_8)); }
	inline GestureBehaviour_t2600571940 * get_gestureBehaviour_8() const { return ___gestureBehaviour_8; }
	inline GestureBehaviour_t2600571940 ** get_address_of_gestureBehaviour_8() { return &___gestureBehaviour_8; }
	inline void set_gestureBehaviour_8(GestureBehaviour_t2600571940 * value)
	{
		___gestureBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier(&___gestureBehaviour_8, value);
	}

	inline static int32_t get_offset_of_playerState_9() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___playerState_9)); }
	inline int32_t get_playerState_9() const { return ___playerState_9; }
	inline int32_t* get_address_of_playerState_9() { return &___playerState_9; }
	inline void set_playerState_9(int32_t value)
	{
		___playerState_9 = value;
	}

	inline static int32_t get_offset_of_angularSpeed_10() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___angularSpeed_10)); }
	inline float get_angularSpeed_10() const { return ___angularSpeed_10; }
	inline float* get_address_of_angularSpeed_10() { return &___angularSpeed_10; }
	inline void set_angularSpeed_10(float value)
	{
		___angularSpeed_10 = value;
	}

	inline static int32_t get_offset_of_angle_11() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___angle_11)); }
	inline float get_angle_11() const { return ___angle_11; }
	inline float* get_address_of_angle_11() { return &___angle_11; }
	inline void set_angle_11(float value)
	{
		___angle_11 = value;
	}

	inline static int32_t get_offset_of_deathTimer_12() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___deathTimer_12)); }
	inline float get_deathTimer_12() const { return ___deathTimer_12; }
	inline float* get_address_of_deathTimer_12() { return &___deathTimer_12; }
	inline void set_deathTimer_12(float value)
	{
		___deathTimer_12 = value;
	}

	inline static int32_t get_offset_of_blinkTimer_13() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___blinkTimer_13)); }
	inline float get_blinkTimer_13() const { return ___blinkTimer_13; }
	inline float* get_address_of_blinkTimer_13() { return &___blinkTimer_13; }
	inline void set_blinkTimer_13(float value)
	{
		___blinkTimer_13 = value;
	}

	inline static int32_t get_offset_of_numberOfBlinksCurrent_14() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___numberOfBlinksCurrent_14)); }
	inline int32_t get_numberOfBlinksCurrent_14() const { return ___numberOfBlinksCurrent_14; }
	inline int32_t* get_address_of_numberOfBlinksCurrent_14() { return &___numberOfBlinksCurrent_14; }
	inline void set_numberOfBlinksCurrent_14(int32_t value)
	{
		___numberOfBlinksCurrent_14 = value;
	}

	inline static int32_t get_offset_of_laserObject_15() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___laserObject_15)); }
	inline GameObject_t1756533147 * get_laserObject_15() const { return ___laserObject_15; }
	inline GameObject_t1756533147 ** get_address_of_laserObject_15() { return &___laserObject_15; }
	inline void set_laserObject_15(GameObject_t1756533147 * value)
	{
		___laserObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___laserObject_15, value);
	}

	inline static int32_t get_offset_of_target_16() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___target_16)); }
	inline Transform_t3275118058 * get_target_16() const { return ___target_16; }
	inline Transform_t3275118058 ** get_address_of_target_16() { return &___target_16; }
	inline void set_target_16(Transform_t3275118058 * value)
	{
		___target_16 = value;
		Il2CppCodeGenWriteBarrier(&___target_16, value);
	}

	inline static int32_t get_offset_of_targetVector_17() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___targetVector_17)); }
	inline Vector3_t2243707580  get_targetVector_17() const { return ___targetVector_17; }
	inline Vector3_t2243707580 * get_address_of_targetVector_17() { return &___targetVector_17; }
	inline void set_targetVector_17(Vector3_t2243707580  value)
	{
		___targetVector_17 = value;
	}

	inline static int32_t get_offset_of_q_18() { return static_cast<int32_t>(offsetof(PlayerController_t2790762029, ___q_18)); }
	inline Quaternion_t4030073918  get_q_18() const { return ___q_18; }
	inline Quaternion_t4030073918 * get_address_of_q_18() { return &___q_18; }
	inline void set_q_18(Quaternion_t4030073918  value)
	{
		___q_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
