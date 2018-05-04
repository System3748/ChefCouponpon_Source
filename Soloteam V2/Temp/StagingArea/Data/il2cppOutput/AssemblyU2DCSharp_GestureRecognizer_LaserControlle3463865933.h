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

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.LaserController
struct  LaserController_t3463865933  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GestureRecognizer.LaserController::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Vector3 GestureRecognizer.LaserController::targetVector
	Vector3_t2243707580  ___targetVector_3;
	// UnityEngine.Sprite[] GestureRecognizer.LaserController::w_Recipe
	SpriteU5BU5D_t3359083662* ___w_Recipe_4;
	// UnityEngine.Sprite[] GestureRecognizer.LaserController::e_Recipe
	SpriteU5BU5D_t3359083662* ___e_Recipe_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(LaserController_t3463865933, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_targetVector_3() { return static_cast<int32_t>(offsetof(LaserController_t3463865933, ___targetVector_3)); }
	inline Vector3_t2243707580  get_targetVector_3() const { return ___targetVector_3; }
	inline Vector3_t2243707580 * get_address_of_targetVector_3() { return &___targetVector_3; }
	inline void set_targetVector_3(Vector3_t2243707580  value)
	{
		___targetVector_3 = value;
	}

	inline static int32_t get_offset_of_w_Recipe_4() { return static_cast<int32_t>(offsetof(LaserController_t3463865933, ___w_Recipe_4)); }
	inline SpriteU5BU5D_t3359083662* get_w_Recipe_4() const { return ___w_Recipe_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_w_Recipe_4() { return &___w_Recipe_4; }
	inline void set_w_Recipe_4(SpriteU5BU5D_t3359083662* value)
	{
		___w_Recipe_4 = value;
		Il2CppCodeGenWriteBarrier(&___w_Recipe_4, value);
	}

	inline static int32_t get_offset_of_e_Recipe_5() { return static_cast<int32_t>(offsetof(LaserController_t3463865933, ___e_Recipe_5)); }
	inline SpriteU5BU5D_t3359083662* get_e_Recipe_5() const { return ___e_Recipe_5; }
	inline SpriteU5BU5D_t3359083662** get_address_of_e_Recipe_5() { return &___e_Recipe_5; }
	inline void set_e_Recipe_5(SpriteU5BU5D_t3359083662* value)
	{
		___e_Recipe_5 = value;
		Il2CppCodeGenWriteBarrier(&___e_Recipe_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
