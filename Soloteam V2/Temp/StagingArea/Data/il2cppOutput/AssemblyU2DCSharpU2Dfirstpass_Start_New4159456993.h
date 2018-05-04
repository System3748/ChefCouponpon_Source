#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t278199169;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Start_New
struct  Start_New_t4159456993  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Start_New::isFill
	bool ___isFill_3;
	// UnityEngine.UI.Image Start_New::tempIMG
	Image_t2042527209 * ___tempIMG_4;

public:
	inline static int32_t get_offset_of_isFill_3() { return static_cast<int32_t>(offsetof(Start_New_t4159456993, ___isFill_3)); }
	inline bool get_isFill_3() const { return ___isFill_3; }
	inline bool* get_address_of_isFill_3() { return &___isFill_3; }
	inline void set_isFill_3(bool value)
	{
		___isFill_3 = value;
	}

	inline static int32_t get_offset_of_tempIMG_4() { return static_cast<int32_t>(offsetof(Start_New_t4159456993, ___tempIMG_4)); }
	inline Image_t2042527209 * get_tempIMG_4() const { return ___tempIMG_4; }
	inline Image_t2042527209 ** get_address_of_tempIMG_4() { return &___tempIMG_4; }
	inline void set_tempIMG_4(Image_t2042527209 * value)
	{
		___tempIMG_4 = value;
		Il2CppCodeGenWriteBarrier(&___tempIMG_4, value);
	}
};

struct Start_New_t4159456993_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int64> Start_New::charScore
	List_1_t278199169 * ___charScore_2;

public:
	inline static int32_t get_offset_of_charScore_2() { return static_cast<int32_t>(offsetof(Start_New_t4159456993_StaticFields, ___charScore_2)); }
	inline List_1_t278199169 * get_charScore_2() const { return ___charScore_2; }
	inline List_1_t278199169 ** get_address_of_charScore_2() { return &___charScore_2; }
	inline void set_charScore_2(List_1_t278199169 * value)
	{
		___charScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___charScore_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
