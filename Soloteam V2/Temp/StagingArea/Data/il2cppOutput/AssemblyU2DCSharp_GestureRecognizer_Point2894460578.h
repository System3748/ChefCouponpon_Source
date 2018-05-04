#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.Point
struct  Point_t2894460578  : public Il2CppObject
{
public:
	// System.Int32 GestureRecognizer.Point::StrokeID
	int32_t ___StrokeID_0;
	// UnityEngine.Vector2 GestureRecognizer.Point::Position
	Vector2_t2243707579  ___Position_1;

public:
	inline static int32_t get_offset_of_StrokeID_0() { return static_cast<int32_t>(offsetof(Point_t2894460578, ___StrokeID_0)); }
	inline int32_t get_StrokeID_0() const { return ___StrokeID_0; }
	inline int32_t* get_address_of_StrokeID_0() { return &___StrokeID_0; }
	inline void set_StrokeID_0(int32_t value)
	{
		___StrokeID_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(Point_t2894460578, ___Position_1)); }
	inline Vector2_t2243707579  get_Position_1() const { return ___Position_1; }
	inline Vector2_t2243707579 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector2_t2243707579  value)
	{
		___Position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
