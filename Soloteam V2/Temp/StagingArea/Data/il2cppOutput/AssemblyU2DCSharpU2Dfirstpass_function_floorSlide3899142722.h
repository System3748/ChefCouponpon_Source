#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// function_floorSlide
struct  function_floorSlide_t3899142722  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material function_floorSlide::floor
	Material_t193706927 * ___floor_2;
	// System.Single function_floorSlide::SlideSpeed
	float ___SlideSpeed_3;
	// System.Single function_floorSlide::floorLook
	float ___floorLook_4;

public:
	inline static int32_t get_offset_of_floor_2() { return static_cast<int32_t>(offsetof(function_floorSlide_t3899142722, ___floor_2)); }
	inline Material_t193706927 * get_floor_2() const { return ___floor_2; }
	inline Material_t193706927 ** get_address_of_floor_2() { return &___floor_2; }
	inline void set_floor_2(Material_t193706927 * value)
	{
		___floor_2 = value;
		Il2CppCodeGenWriteBarrier(&___floor_2, value);
	}

	inline static int32_t get_offset_of_SlideSpeed_3() { return static_cast<int32_t>(offsetof(function_floorSlide_t3899142722, ___SlideSpeed_3)); }
	inline float get_SlideSpeed_3() const { return ___SlideSpeed_3; }
	inline float* get_address_of_SlideSpeed_3() { return &___SlideSpeed_3; }
	inline void set_SlideSpeed_3(float value)
	{
		___SlideSpeed_3 = value;
	}

	inline static int32_t get_offset_of_floorLook_4() { return static_cast<int32_t>(offsetof(function_floorSlide_t3899142722, ___floorLook_4)); }
	inline float get_floorLook_4() const { return ___floorLook_4; }
	inline float* get_address_of_floorLook_4() { return &___floorLook_4; }
	inline void set_floorLook_4(float value)
	{
		___floorLook_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
