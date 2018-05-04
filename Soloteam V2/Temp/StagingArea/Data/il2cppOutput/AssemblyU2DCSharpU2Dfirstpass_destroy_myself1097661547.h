#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// destroy_myself
struct  destroy_myself_t1097661547  : public MonoBehaviour_t1158329972
{
public:
	// System.Double destroy_myself::aliveTime
	double ___aliveTime_2;
	// System.Double destroy_myself::timer
	double ___timer_3;

public:
	inline static int32_t get_offset_of_aliveTime_2() { return static_cast<int32_t>(offsetof(destroy_myself_t1097661547, ___aliveTime_2)); }
	inline double get_aliveTime_2() const { return ___aliveTime_2; }
	inline double* get_address_of_aliveTime_2() { return &___aliveTime_2; }
	inline void set_aliveTime_2(double value)
	{
		___aliveTime_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(destroy_myself_t1097661547, ___timer_3)); }
	inline double get_timer_3() const { return ___timer_3; }
	inline double* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(double value)
	{
		___timer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
