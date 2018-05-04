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
// UnityScript.Lang.Array
struct Array_t1396575355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// clone_Monster
struct  clone_Monster_t2307338744  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject clone_Monster::guest_right
	GameObject_t1756533147 * ___guest_right_2;
	// UnityEngine.GameObject clone_Monster::guest_center
	GameObject_t1756533147 * ___guest_center_3;
	// UnityEngine.GameObject clone_Monster::guest_left
	GameObject_t1756533147 * ___guest_left_4;
	// System.Single clone_Monster::Clone_duration
	float ___Clone_duration_5;
	// System.Int32 clone_Monster::guestClone
	int32_t ___guestClone_6;
	// UnityScript.Lang.Array clone_Monster::guest
	Array_t1396575355 * ___guest_7;

public:
	inline static int32_t get_offset_of_guest_right_2() { return static_cast<int32_t>(offsetof(clone_Monster_t2307338744, ___guest_right_2)); }
	inline GameObject_t1756533147 * get_guest_right_2() const { return ___guest_right_2; }
	inline GameObject_t1756533147 ** get_address_of_guest_right_2() { return &___guest_right_2; }
	inline void set_guest_right_2(GameObject_t1756533147 * value)
	{
		___guest_right_2 = value;
		Il2CppCodeGenWriteBarrier(&___guest_right_2, value);
	}

	inline static int32_t get_offset_of_guest_center_3() { return static_cast<int32_t>(offsetof(clone_Monster_t2307338744, ___guest_center_3)); }
	inline GameObject_t1756533147 * get_guest_center_3() const { return ___guest_center_3; }
	inline GameObject_t1756533147 ** get_address_of_guest_center_3() { return &___guest_center_3; }
	inline void set_guest_center_3(GameObject_t1756533147 * value)
	{
		___guest_center_3 = value;
		Il2CppCodeGenWriteBarrier(&___guest_center_3, value);
	}

	inline static int32_t get_offset_of_guest_left_4() { return static_cast<int32_t>(offsetof(clone_Monster_t2307338744, ___guest_left_4)); }
	inline GameObject_t1756533147 * get_guest_left_4() const { return ___guest_left_4; }
	inline GameObject_t1756533147 ** get_address_of_guest_left_4() { return &___guest_left_4; }
	inline void set_guest_left_4(GameObject_t1756533147 * value)
	{
		___guest_left_4 = value;
		Il2CppCodeGenWriteBarrier(&___guest_left_4, value);
	}

	inline static int32_t get_offset_of_Clone_duration_5() { return static_cast<int32_t>(offsetof(clone_Monster_t2307338744, ___Clone_duration_5)); }
	inline float get_Clone_duration_5() const { return ___Clone_duration_5; }
	inline float* get_address_of_Clone_duration_5() { return &___Clone_duration_5; }
	inline void set_Clone_duration_5(float value)
	{
		___Clone_duration_5 = value;
	}

	inline static int32_t get_offset_of_guestClone_6() { return static_cast<int32_t>(offsetof(clone_Monster_t2307338744, ___guestClone_6)); }
	inline int32_t get_guestClone_6() const { return ___guestClone_6; }
	inline int32_t* get_address_of_guestClone_6() { return &___guestClone_6; }
	inline void set_guestClone_6(int32_t value)
	{
		___guestClone_6 = value;
	}

	inline static int32_t get_offset_of_guest_7() { return static_cast<int32_t>(offsetof(clone_Monster_t2307338744, ___guest_7)); }
	inline Array_t1396575355 * get_guest_7() const { return ___guest_7; }
	inline Array_t1396575355 ** get_address_of_guest_7() { return &___guest_7; }
	inline void set_guest_7(Array_t1396575355 * value)
	{
		___guest_7 = value;
		Il2CppCodeGenWriteBarrier(&___guest_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
