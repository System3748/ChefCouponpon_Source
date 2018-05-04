#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.Result
struct  Result_t792980977  : public Il2CppObject
{
public:
	// System.String GestureRecognizer.Result::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Single GestureRecognizer.Result::<Score>k__BackingField
	float ___U3CScoreU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_t792980977, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CScoreU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_t792980977, ___U3CScoreU3Ek__BackingField_1)); }
	inline float get_U3CScoreU3Ek__BackingField_1() const { return ___U3CScoreU3Ek__BackingField_1; }
	inline float* get_address_of_U3CScoreU3Ek__BackingField_1() { return &___U3CScoreU3Ek__BackingField_1; }
	inline void set_U3CScoreU3Ek__BackingField_1(float value)
	{
		___U3CScoreU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
