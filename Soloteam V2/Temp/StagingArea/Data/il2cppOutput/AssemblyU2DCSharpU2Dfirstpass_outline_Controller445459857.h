#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Outline
struct Outline_t1417504278;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// outline_Controller
struct  outline_Controller_t445459857  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Outline outline_Controller::_outline
	Outline_t1417504278 * ____outline_2;
	// System.Int32 outline_Controller::_range
	int32_t ____range_3;
	// System.Single outline_Controller::_speed
	float ____speed_4;

public:
	inline static int32_t get_offset_of__outline_2() { return static_cast<int32_t>(offsetof(outline_Controller_t445459857, ____outline_2)); }
	inline Outline_t1417504278 * get__outline_2() const { return ____outline_2; }
	inline Outline_t1417504278 ** get_address_of__outline_2() { return &____outline_2; }
	inline void set__outline_2(Outline_t1417504278 * value)
	{
		____outline_2 = value;
		Il2CppCodeGenWriteBarrier(&____outline_2, value);
	}

	inline static int32_t get_offset_of__range_3() { return static_cast<int32_t>(offsetof(outline_Controller_t445459857, ____range_3)); }
	inline int32_t get__range_3() const { return ____range_3; }
	inline int32_t* get_address_of__range_3() { return &____range_3; }
	inline void set__range_3(int32_t value)
	{
		____range_3 = value;
	}

	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(outline_Controller_t445459857, ____speed_4)); }
	inline float get__speed_4() const { return ____speed_4; }
	inline float* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(float value)
	{
		____speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
