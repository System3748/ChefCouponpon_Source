#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.BackgroundScroller
struct  BackgroundScroller_t4275420210  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer GestureRecognizer.BackgroundScroller::r
	Renderer_t257310565 * ___r_2;
	// System.Single GestureRecognizer.BackgroundScroller::offset
	float ___offset_3;
	// System.Single GestureRecognizer.BackgroundScroller::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_r_2() { return static_cast<int32_t>(offsetof(BackgroundScroller_t4275420210, ___r_2)); }
	inline Renderer_t257310565 * get_r_2() const { return ___r_2; }
	inline Renderer_t257310565 ** get_address_of_r_2() { return &___r_2; }
	inline void set_r_2(Renderer_t257310565 * value)
	{
		___r_2 = value;
		Il2CppCodeGenWriteBarrier(&___r_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(BackgroundScroller_t4275420210, ___offset_3)); }
	inline float get_offset_3() const { return ___offset_3; }
	inline float* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(float value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BackgroundScroller_t4275420210, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
