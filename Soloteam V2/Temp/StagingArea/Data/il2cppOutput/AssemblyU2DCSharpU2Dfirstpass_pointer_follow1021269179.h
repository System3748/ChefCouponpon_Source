#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pointer_follow
struct  pointer_follow_t1021269179  : public MonoBehaviour_t1158329972
{
public:
	// System.Double pointer_follow::cooldown
	double ___cooldown_2;
	// UnityEngine.GameObject pointer_follow::cheef_Image
	GameObject_t1756533147 * ___cheef_Image_3;
	// UnityEngine.Transform pointer_follow::preFab
	Transform_t3275118058 * ___preFab_4;

public:
	inline static int32_t get_offset_of_cooldown_2() { return static_cast<int32_t>(offsetof(pointer_follow_t1021269179, ___cooldown_2)); }
	inline double get_cooldown_2() const { return ___cooldown_2; }
	inline double* get_address_of_cooldown_2() { return &___cooldown_2; }
	inline void set_cooldown_2(double value)
	{
		___cooldown_2 = value;
	}

	inline static int32_t get_offset_of_cheef_Image_3() { return static_cast<int32_t>(offsetof(pointer_follow_t1021269179, ___cheef_Image_3)); }
	inline GameObject_t1756533147 * get_cheef_Image_3() const { return ___cheef_Image_3; }
	inline GameObject_t1756533147 ** get_address_of_cheef_Image_3() { return &___cheef_Image_3; }
	inline void set_cheef_Image_3(GameObject_t1756533147 * value)
	{
		___cheef_Image_3 = value;
		Il2CppCodeGenWriteBarrier(&___cheef_Image_3, value);
	}

	inline static int32_t get_offset_of_preFab_4() { return static_cast<int32_t>(offsetof(pointer_follow_t1021269179, ___preFab_4)); }
	inline Transform_t3275118058 * get_preFab_4() const { return ___preFab_4; }
	inline Transform_t3275118058 ** get_address_of_preFab_4() { return &___preFab_4; }
	inline void set_preFab_4(Transform_t3275118058 * value)
	{
		___preFab_4 = value;
		Il2CppCodeGenWriteBarrier(&___preFab_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
