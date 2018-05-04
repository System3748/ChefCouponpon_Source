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
// GestureRecognizer.Point[]
struct PointU5BU5D_t4007690391;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.Gesture
struct  Gesture_t2982933633  : public Il2CppObject
{
public:
	// System.String GestureRecognizer.Gesture::Name
	String_t* ___Name_0;
	// System.Boolean GestureRecognizer.Gesture::IsShown
	bool ___IsShown_1;
	// GestureRecognizer.Point[] GestureRecognizer.Gesture::NormalizedPoints
	PointU5BU5D_t4007690391* ___NormalizedPoints_2;
	// GestureRecognizer.Point[] GestureRecognizer.Gesture::OriginalPoints
	PointU5BU5D_t4007690391* ___OriginalPoints_3;
	// System.Int32 GestureRecognizer.Gesture::numberOfPoints
	int32_t ___numberOfPoints_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Gesture_t2982933633, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_IsShown_1() { return static_cast<int32_t>(offsetof(Gesture_t2982933633, ___IsShown_1)); }
	inline bool get_IsShown_1() const { return ___IsShown_1; }
	inline bool* get_address_of_IsShown_1() { return &___IsShown_1; }
	inline void set_IsShown_1(bool value)
	{
		___IsShown_1 = value;
	}

	inline static int32_t get_offset_of_NormalizedPoints_2() { return static_cast<int32_t>(offsetof(Gesture_t2982933633, ___NormalizedPoints_2)); }
	inline PointU5BU5D_t4007690391* get_NormalizedPoints_2() const { return ___NormalizedPoints_2; }
	inline PointU5BU5D_t4007690391** get_address_of_NormalizedPoints_2() { return &___NormalizedPoints_2; }
	inline void set_NormalizedPoints_2(PointU5BU5D_t4007690391* value)
	{
		___NormalizedPoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___NormalizedPoints_2, value);
	}

	inline static int32_t get_offset_of_OriginalPoints_3() { return static_cast<int32_t>(offsetof(Gesture_t2982933633, ___OriginalPoints_3)); }
	inline PointU5BU5D_t4007690391* get_OriginalPoints_3() const { return ___OriginalPoints_3; }
	inline PointU5BU5D_t4007690391** get_address_of_OriginalPoints_3() { return &___OriginalPoints_3; }
	inline void set_OriginalPoints_3(PointU5BU5D_t4007690391* value)
	{
		___OriginalPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___OriginalPoints_3, value);
	}

	inline static int32_t get_offset_of_numberOfPoints_4() { return static_cast<int32_t>(offsetof(Gesture_t2982933633, ___numberOfPoints_4)); }
	inline int32_t get_numberOfPoints_4() const { return ___numberOfPoints_4; }
	inline int32_t* get_address_of_numberOfPoints_4() { return &___numberOfPoints_4; }
	inline void set_numberOfPoints_4(int32_t value)
	{
		___numberOfPoints_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
