#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrailCurve
struct  TrailCurve_t3247422523  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ParticleSystem TrailCurve::ps
	ParticleSystem_t3394631041 * ___ps_2;

public:
	inline static int32_t get_offset_of_ps_2() { return static_cast<int32_t>(offsetof(TrailCurve_t3247422523, ___ps_2)); }
	inline ParticleSystem_t3394631041 * get_ps_2() const { return ___ps_2; }
	inline ParticleSystem_t3394631041 ** get_address_of_ps_2() { return &___ps_2; }
	inline void set_ps_2(ParticleSystem_t3394631041 * value)
	{
		___ps_2 = value;
		Il2CppCodeGenWriteBarrier(&___ps_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
