#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Collider
struct Collider_t3497673348;
// GestureRecognizer.Enemy
struct Enemy_t2632318156;
// GestureRecognizer.LevelController
struct LevelController_t1105956392;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.EnemyController
struct  EnemyController_t68291428  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] GestureRecognizer.EnemyController::gestureSprites
	SpriteU5BU5D_t3359083662* ___gestureSprites_2;
	// UnityEngine.GameObject GestureRecognizer.EnemyController::explosionObject
	GameObject_t1756533147 * ___explosionObject_3;
	// UnityEngine.GameObject GestureRecognizer.EnemyController::enemyShip
	GameObject_t1756533147 * ___enemyShip_4;
	// UnityEngine.SpriteRenderer GestureRecognizer.EnemyController::enemyShape
	SpriteRenderer_t1209076198 * ___enemyShape_5;
	// UnityEngine.Collider GestureRecognizer.EnemyController::enemyCollider
	Collider_t3497673348 * ___enemyCollider_6;
	// GestureRecognizer.Enemy GestureRecognizer.EnemyController::enemy
	Enemy_t2632318156 * ___enemy_7;
	// UnityEngine.GameObject GestureRecognizer.EnemyController::Combo
	GameObject_t1756533147 * ___Combo_8;
	// GestureRecognizer.LevelController GestureRecognizer.EnemyController::levelController
	LevelController_t1105956392 * ___levelController_9;
	// System.Single GestureRecognizer.EnemyController::speed
	float ___speed_10;
	// UnityEngine.Vector3 GestureRecognizer.EnemyController::targetVector
	Vector3_t2243707580  ___targetVector_11;
	// UnityEngine.ParticleSystem GestureRecognizer.EnemyController::explosionPS
	ParticleSystem_t3394631041 * ___explosionPS_12;
	// System.Int32 GestureRecognizer.EnemyController::typeNum
	int32_t ___typeNum_13;

public:
	inline static int32_t get_offset_of_gestureSprites_2() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___gestureSprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_gestureSprites_2() const { return ___gestureSprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_gestureSprites_2() { return &___gestureSprites_2; }
	inline void set_gestureSprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___gestureSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___gestureSprites_2, value);
	}

	inline static int32_t get_offset_of_explosionObject_3() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___explosionObject_3)); }
	inline GameObject_t1756533147 * get_explosionObject_3() const { return ___explosionObject_3; }
	inline GameObject_t1756533147 ** get_address_of_explosionObject_3() { return &___explosionObject_3; }
	inline void set_explosionObject_3(GameObject_t1756533147 * value)
	{
		___explosionObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionObject_3, value);
	}

	inline static int32_t get_offset_of_enemyShip_4() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___enemyShip_4)); }
	inline GameObject_t1756533147 * get_enemyShip_4() const { return ___enemyShip_4; }
	inline GameObject_t1756533147 ** get_address_of_enemyShip_4() { return &___enemyShip_4; }
	inline void set_enemyShip_4(GameObject_t1756533147 * value)
	{
		___enemyShip_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemyShip_4, value);
	}

	inline static int32_t get_offset_of_enemyShape_5() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___enemyShape_5)); }
	inline SpriteRenderer_t1209076198 * get_enemyShape_5() const { return ___enemyShape_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_enemyShape_5() { return &___enemyShape_5; }
	inline void set_enemyShape_5(SpriteRenderer_t1209076198 * value)
	{
		___enemyShape_5 = value;
		Il2CppCodeGenWriteBarrier(&___enemyShape_5, value);
	}

	inline static int32_t get_offset_of_enemyCollider_6() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___enemyCollider_6)); }
	inline Collider_t3497673348 * get_enemyCollider_6() const { return ___enemyCollider_6; }
	inline Collider_t3497673348 ** get_address_of_enemyCollider_6() { return &___enemyCollider_6; }
	inline void set_enemyCollider_6(Collider_t3497673348 * value)
	{
		___enemyCollider_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemyCollider_6, value);
	}

	inline static int32_t get_offset_of_enemy_7() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___enemy_7)); }
	inline Enemy_t2632318156 * get_enemy_7() const { return ___enemy_7; }
	inline Enemy_t2632318156 ** get_address_of_enemy_7() { return &___enemy_7; }
	inline void set_enemy_7(Enemy_t2632318156 * value)
	{
		___enemy_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_7, value);
	}

	inline static int32_t get_offset_of_Combo_8() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___Combo_8)); }
	inline GameObject_t1756533147 * get_Combo_8() const { return ___Combo_8; }
	inline GameObject_t1756533147 ** get_address_of_Combo_8() { return &___Combo_8; }
	inline void set_Combo_8(GameObject_t1756533147 * value)
	{
		___Combo_8 = value;
		Il2CppCodeGenWriteBarrier(&___Combo_8, value);
	}

	inline static int32_t get_offset_of_levelController_9() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___levelController_9)); }
	inline LevelController_t1105956392 * get_levelController_9() const { return ___levelController_9; }
	inline LevelController_t1105956392 ** get_address_of_levelController_9() { return &___levelController_9; }
	inline void set_levelController_9(LevelController_t1105956392 * value)
	{
		___levelController_9 = value;
		Il2CppCodeGenWriteBarrier(&___levelController_9, value);
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_targetVector_11() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___targetVector_11)); }
	inline Vector3_t2243707580  get_targetVector_11() const { return ___targetVector_11; }
	inline Vector3_t2243707580 * get_address_of_targetVector_11() { return &___targetVector_11; }
	inline void set_targetVector_11(Vector3_t2243707580  value)
	{
		___targetVector_11 = value;
	}

	inline static int32_t get_offset_of_explosionPS_12() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___explosionPS_12)); }
	inline ParticleSystem_t3394631041 * get_explosionPS_12() const { return ___explosionPS_12; }
	inline ParticleSystem_t3394631041 ** get_address_of_explosionPS_12() { return &___explosionPS_12; }
	inline void set_explosionPS_12(ParticleSystem_t3394631041 * value)
	{
		___explosionPS_12 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPS_12, value);
	}

	inline static int32_t get_offset_of_typeNum_13() { return static_cast<int32_t>(offsetof(EnemyController_t68291428, ___typeNum_13)); }
	inline int32_t get_typeNum_13() const { return ___typeNum_13; }
	inline int32_t* get_address_of_typeNum_13() { return &___typeNum_13; }
	inline void set_typeNum_13(int32_t value)
	{
		___typeNum_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
