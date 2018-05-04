#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.Collections.Generic.List`1<GestureRecognizer.Gesture>
struct List_1_t2352054765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.GestureLibrary
struct  GestureLibrary_t2354058694  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<GestureRecognizer.Gesture> GestureRecognizer.GestureLibrary::Gestures
	List_1_t2352054765 * ___Gestures_2;

public:
	inline static int32_t get_offset_of_Gestures_2() { return static_cast<int32_t>(offsetof(GestureLibrary_t2354058694, ___Gestures_2)); }
	inline List_1_t2352054765 * get_Gestures_2() const { return ___Gestures_2; }
	inline List_1_t2352054765 ** get_address_of_Gestures_2() { return &___Gestures_2; }
	inline void set_Gestures_2(List_1_t2352054765 * value)
	{
		___Gestures_2 = value;
		Il2CppCodeGenWriteBarrier(&___Gestures_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
