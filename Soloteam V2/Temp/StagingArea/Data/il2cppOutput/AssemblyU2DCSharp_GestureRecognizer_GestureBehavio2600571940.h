#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GestureRecognizer_GestureLimitTyp661915304.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// GestureRecognizer.GestureLibrary
struct GestureLibrary_t2354058694;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// System.Collections.Generic.List`1<GestureRecognizer.Point>
struct List_1_t2263581710;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// GestureRecognizer.Gesture
struct Gesture_t2982933633;
// ScreenRect
struct ScreenRect_t647282214;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Canvas
struct Canvas_t209405766;
// System.Action`2<GestureRecognizer.Gesture,GestureRecognizer.Result>
struct Action_2_t1560244725;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.GestureBehaviour
struct  GestureBehaviour_t2600571940  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GestureRecognizer.GestureBehaviour::isEnabled
	bool ___isEnabled_2;
	// GestureRecognizer.GestureLibrary GestureRecognizer.GestureBehaviour::library
	GestureLibrary_t2354058694 * ___library_3;
	// GestureRecognizer.GestureLimitType GestureRecognizer.GestureBehaviour::limitType
	int32_t ___limitType_4;
	// System.Single GestureRecognizer.GestureBehaviour::distanceBetweenPoints
	float ___distanceBetweenPoints_5;
	// System.Int32 GestureRecognizer.GestureBehaviour::minimumPointsToRecognize
	int32_t ___minimumPointsToRecognize_6;
	// UnityEngine.Material GestureRecognizer.GestureBehaviour::lineMaterial
	Material_t193706927 * ___lineMaterial_7;
	// System.Single GestureRecognizer.GestureBehaviour::startThickness
	float ___startThickness_8;
	// System.Single GestureRecognizer.GestureBehaviour::endThickness
	float ___endThickness_9;
	// UnityEngine.Color GestureRecognizer.GestureBehaviour::startColor
	Color_t2020392075  ___startColor_10;
	// UnityEngine.Color GestureRecognizer.GestureBehaviour::endColor
	Color_t2020392075  ___endColor_11;
	// UnityEngine.LineRenderer GestureRecognizer.GestureBehaviour::currentStrokeRenderer
	LineRenderer_t849157671 * ___currentStrokeRenderer_12;
	// System.Int32 GestureRecognizer.GestureBehaviour::currentStrokeID
	int32_t ___currentStrokeID_13;
	// UnityEngine.Vector2 GestureRecognizer.GestureBehaviour::lastPoint
	Vector2_t2243707579  ___lastPoint_14;
	// System.Int32 GestureRecognizer.GestureBehaviour::vertexCount
	int32_t ___vertexCount_15;
	// System.Collections.Generic.List`1<GestureRecognizer.Point> GestureRecognizer.GestureBehaviour::points
	List_1_t2263581710 * ___points_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GestureRecognizer.GestureBehaviour::strokes
	List_1_t1125654279 * ___strokes_17;
	// GestureRecognizer.Gesture GestureRecognizer.GestureBehaviour::gesture
	Gesture_t2982933633 * ___gesture_18;
	// System.Boolean GestureRecognizer.GestureBehaviour::isRecognized
	bool ___isRecognized_19;
	// ScreenRect GestureRecognizer.GestureBehaviour::limitedDrawAreaRect
	ScreenRect_t647282214 * ___limitedDrawAreaRect_20;
	// UnityEngine.RectTransform GestureRecognizer.GestureBehaviour::unlimitedDrawArea
	RectTransform_t3349966182 * ___unlimitedDrawArea_21;
	// UnityEngine.RectTransform GestureRecognizer.GestureBehaviour::limitedDrawArea
	RectTransform_t3349966182 * ___limitedDrawArea_22;
	// UnityEngine.Canvas GestureRecognizer.GestureBehaviour::canvas
	Canvas_t209405766 * ___canvas_23;
	// UnityEngine.Vector3 GestureRecognizer.GestureBehaviour::screenPoint
	Vector3_t2243707580  ___screenPoint_24;

public:
	inline static int32_t get_offset_of_isEnabled_2() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___isEnabled_2)); }
	inline bool get_isEnabled_2() const { return ___isEnabled_2; }
	inline bool* get_address_of_isEnabled_2() { return &___isEnabled_2; }
	inline void set_isEnabled_2(bool value)
	{
		___isEnabled_2 = value;
	}

	inline static int32_t get_offset_of_library_3() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___library_3)); }
	inline GestureLibrary_t2354058694 * get_library_3() const { return ___library_3; }
	inline GestureLibrary_t2354058694 ** get_address_of_library_3() { return &___library_3; }
	inline void set_library_3(GestureLibrary_t2354058694 * value)
	{
		___library_3 = value;
		Il2CppCodeGenWriteBarrier(&___library_3, value);
	}

	inline static int32_t get_offset_of_limitType_4() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___limitType_4)); }
	inline int32_t get_limitType_4() const { return ___limitType_4; }
	inline int32_t* get_address_of_limitType_4() { return &___limitType_4; }
	inline void set_limitType_4(int32_t value)
	{
		___limitType_4 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenPoints_5() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___distanceBetweenPoints_5)); }
	inline float get_distanceBetweenPoints_5() const { return ___distanceBetweenPoints_5; }
	inline float* get_address_of_distanceBetweenPoints_5() { return &___distanceBetweenPoints_5; }
	inline void set_distanceBetweenPoints_5(float value)
	{
		___distanceBetweenPoints_5 = value;
	}

	inline static int32_t get_offset_of_minimumPointsToRecognize_6() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___minimumPointsToRecognize_6)); }
	inline int32_t get_minimumPointsToRecognize_6() const { return ___minimumPointsToRecognize_6; }
	inline int32_t* get_address_of_minimumPointsToRecognize_6() { return &___minimumPointsToRecognize_6; }
	inline void set_minimumPointsToRecognize_6(int32_t value)
	{
		___minimumPointsToRecognize_6 = value;
	}

	inline static int32_t get_offset_of_lineMaterial_7() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___lineMaterial_7)); }
	inline Material_t193706927 * get_lineMaterial_7() const { return ___lineMaterial_7; }
	inline Material_t193706927 ** get_address_of_lineMaterial_7() { return &___lineMaterial_7; }
	inline void set_lineMaterial_7(Material_t193706927 * value)
	{
		___lineMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___lineMaterial_7, value);
	}

	inline static int32_t get_offset_of_startThickness_8() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___startThickness_8)); }
	inline float get_startThickness_8() const { return ___startThickness_8; }
	inline float* get_address_of_startThickness_8() { return &___startThickness_8; }
	inline void set_startThickness_8(float value)
	{
		___startThickness_8 = value;
	}

	inline static int32_t get_offset_of_endThickness_9() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___endThickness_9)); }
	inline float get_endThickness_9() const { return ___endThickness_9; }
	inline float* get_address_of_endThickness_9() { return &___endThickness_9; }
	inline void set_endThickness_9(float value)
	{
		___endThickness_9 = value;
	}

	inline static int32_t get_offset_of_startColor_10() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___startColor_10)); }
	inline Color_t2020392075  get_startColor_10() const { return ___startColor_10; }
	inline Color_t2020392075 * get_address_of_startColor_10() { return &___startColor_10; }
	inline void set_startColor_10(Color_t2020392075  value)
	{
		___startColor_10 = value;
	}

	inline static int32_t get_offset_of_endColor_11() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___endColor_11)); }
	inline Color_t2020392075  get_endColor_11() const { return ___endColor_11; }
	inline Color_t2020392075 * get_address_of_endColor_11() { return &___endColor_11; }
	inline void set_endColor_11(Color_t2020392075  value)
	{
		___endColor_11 = value;
	}

	inline static int32_t get_offset_of_currentStrokeRenderer_12() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___currentStrokeRenderer_12)); }
	inline LineRenderer_t849157671 * get_currentStrokeRenderer_12() const { return ___currentStrokeRenderer_12; }
	inline LineRenderer_t849157671 ** get_address_of_currentStrokeRenderer_12() { return &___currentStrokeRenderer_12; }
	inline void set_currentStrokeRenderer_12(LineRenderer_t849157671 * value)
	{
		___currentStrokeRenderer_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentStrokeRenderer_12, value);
	}

	inline static int32_t get_offset_of_currentStrokeID_13() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___currentStrokeID_13)); }
	inline int32_t get_currentStrokeID_13() const { return ___currentStrokeID_13; }
	inline int32_t* get_address_of_currentStrokeID_13() { return &___currentStrokeID_13; }
	inline void set_currentStrokeID_13(int32_t value)
	{
		___currentStrokeID_13 = value;
	}

	inline static int32_t get_offset_of_lastPoint_14() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___lastPoint_14)); }
	inline Vector2_t2243707579  get_lastPoint_14() const { return ___lastPoint_14; }
	inline Vector2_t2243707579 * get_address_of_lastPoint_14() { return &___lastPoint_14; }
	inline void set_lastPoint_14(Vector2_t2243707579  value)
	{
		___lastPoint_14 = value;
	}

	inline static int32_t get_offset_of_vertexCount_15() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___vertexCount_15)); }
	inline int32_t get_vertexCount_15() const { return ___vertexCount_15; }
	inline int32_t* get_address_of_vertexCount_15() { return &___vertexCount_15; }
	inline void set_vertexCount_15(int32_t value)
	{
		___vertexCount_15 = value;
	}

	inline static int32_t get_offset_of_points_16() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___points_16)); }
	inline List_1_t2263581710 * get_points_16() const { return ___points_16; }
	inline List_1_t2263581710 ** get_address_of_points_16() { return &___points_16; }
	inline void set_points_16(List_1_t2263581710 * value)
	{
		___points_16 = value;
		Il2CppCodeGenWriteBarrier(&___points_16, value);
	}

	inline static int32_t get_offset_of_strokes_17() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___strokes_17)); }
	inline List_1_t1125654279 * get_strokes_17() const { return ___strokes_17; }
	inline List_1_t1125654279 ** get_address_of_strokes_17() { return &___strokes_17; }
	inline void set_strokes_17(List_1_t1125654279 * value)
	{
		___strokes_17 = value;
		Il2CppCodeGenWriteBarrier(&___strokes_17, value);
	}

	inline static int32_t get_offset_of_gesture_18() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___gesture_18)); }
	inline Gesture_t2982933633 * get_gesture_18() const { return ___gesture_18; }
	inline Gesture_t2982933633 ** get_address_of_gesture_18() { return &___gesture_18; }
	inline void set_gesture_18(Gesture_t2982933633 * value)
	{
		___gesture_18 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_18, value);
	}

	inline static int32_t get_offset_of_isRecognized_19() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___isRecognized_19)); }
	inline bool get_isRecognized_19() const { return ___isRecognized_19; }
	inline bool* get_address_of_isRecognized_19() { return &___isRecognized_19; }
	inline void set_isRecognized_19(bool value)
	{
		___isRecognized_19 = value;
	}

	inline static int32_t get_offset_of_limitedDrawAreaRect_20() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___limitedDrawAreaRect_20)); }
	inline ScreenRect_t647282214 * get_limitedDrawAreaRect_20() const { return ___limitedDrawAreaRect_20; }
	inline ScreenRect_t647282214 ** get_address_of_limitedDrawAreaRect_20() { return &___limitedDrawAreaRect_20; }
	inline void set_limitedDrawAreaRect_20(ScreenRect_t647282214 * value)
	{
		___limitedDrawAreaRect_20 = value;
		Il2CppCodeGenWriteBarrier(&___limitedDrawAreaRect_20, value);
	}

	inline static int32_t get_offset_of_unlimitedDrawArea_21() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___unlimitedDrawArea_21)); }
	inline RectTransform_t3349966182 * get_unlimitedDrawArea_21() const { return ___unlimitedDrawArea_21; }
	inline RectTransform_t3349966182 ** get_address_of_unlimitedDrawArea_21() { return &___unlimitedDrawArea_21; }
	inline void set_unlimitedDrawArea_21(RectTransform_t3349966182 * value)
	{
		___unlimitedDrawArea_21 = value;
		Il2CppCodeGenWriteBarrier(&___unlimitedDrawArea_21, value);
	}

	inline static int32_t get_offset_of_limitedDrawArea_22() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___limitedDrawArea_22)); }
	inline RectTransform_t3349966182 * get_limitedDrawArea_22() const { return ___limitedDrawArea_22; }
	inline RectTransform_t3349966182 ** get_address_of_limitedDrawArea_22() { return &___limitedDrawArea_22; }
	inline void set_limitedDrawArea_22(RectTransform_t3349966182 * value)
	{
		___limitedDrawArea_22 = value;
		Il2CppCodeGenWriteBarrier(&___limitedDrawArea_22, value);
	}

	inline static int32_t get_offset_of_canvas_23() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___canvas_23)); }
	inline Canvas_t209405766 * get_canvas_23() const { return ___canvas_23; }
	inline Canvas_t209405766 ** get_address_of_canvas_23() { return &___canvas_23; }
	inline void set_canvas_23(Canvas_t209405766 * value)
	{
		___canvas_23 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_23, value);
	}

	inline static int32_t get_offset_of_screenPoint_24() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940, ___screenPoint_24)); }
	inline Vector3_t2243707580  get_screenPoint_24() const { return ___screenPoint_24; }
	inline Vector3_t2243707580 * get_address_of_screenPoint_24() { return &___screenPoint_24; }
	inline void set_screenPoint_24(Vector3_t2243707580  value)
	{
		___screenPoint_24 = value;
	}
};

struct GestureBehaviour_t2600571940_StaticFields
{
public:
	// System.Action`2<GestureRecognizer.Gesture,GestureRecognizer.Result> GestureRecognizer.GestureBehaviour::OnGestureRecognition
	Action_2_t1560244725 * ___OnGestureRecognition_25;

public:
	inline static int32_t get_offset_of_OnGestureRecognition_25() { return static_cast<int32_t>(offsetof(GestureBehaviour_t2600571940_StaticFields, ___OnGestureRecognition_25)); }
	inline Action_2_t1560244725 * get_OnGestureRecognition_25() const { return ___OnGestureRecognition_25; }
	inline Action_2_t1560244725 ** get_address_of_OnGestureRecognition_25() { return &___OnGestureRecognition_25; }
	inline void set_OnGestureRecognition_25(Action_2_t1560244725 * value)
	{
		___OnGestureRecognition_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnGestureRecognition_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
