#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score_Test
struct  Score_Test_t3670415239  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 Score_Test::initialPostotion
	Vector3_t2243707580  ___initialPostotion_2;
	// System.Int32 Score_Test::MaxDigit
	int32_t ___MaxDigit_3;
	// System.Int32 Score_Test::_temp
	int32_t ____temp_4;
	// UnityEngine.UI.Image[] Score_Test::score
	ImageU5BU5D_t590162004* ___score_5;
	// UnityEngine.Sprite[] Score_Test::numSprite
	SpriteU5BU5D_t3359083662* ___numSprite_6;

public:
	inline static int32_t get_offset_of_initialPostotion_2() { return static_cast<int32_t>(offsetof(Score_Test_t3670415239, ___initialPostotion_2)); }
	inline Vector3_t2243707580  get_initialPostotion_2() const { return ___initialPostotion_2; }
	inline Vector3_t2243707580 * get_address_of_initialPostotion_2() { return &___initialPostotion_2; }
	inline void set_initialPostotion_2(Vector3_t2243707580  value)
	{
		___initialPostotion_2 = value;
	}

	inline static int32_t get_offset_of_MaxDigit_3() { return static_cast<int32_t>(offsetof(Score_Test_t3670415239, ___MaxDigit_3)); }
	inline int32_t get_MaxDigit_3() const { return ___MaxDigit_3; }
	inline int32_t* get_address_of_MaxDigit_3() { return &___MaxDigit_3; }
	inline void set_MaxDigit_3(int32_t value)
	{
		___MaxDigit_3 = value;
	}

	inline static int32_t get_offset_of__temp_4() { return static_cast<int32_t>(offsetof(Score_Test_t3670415239, ____temp_4)); }
	inline int32_t get__temp_4() const { return ____temp_4; }
	inline int32_t* get_address_of__temp_4() { return &____temp_4; }
	inline void set__temp_4(int32_t value)
	{
		____temp_4 = value;
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(Score_Test_t3670415239, ___score_5)); }
	inline ImageU5BU5D_t590162004* get_score_5() const { return ___score_5; }
	inline ImageU5BU5D_t590162004** get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(ImageU5BU5D_t590162004* value)
	{
		___score_5 = value;
		Il2CppCodeGenWriteBarrier(&___score_5, value);
	}

	inline static int32_t get_offset_of_numSprite_6() { return static_cast<int32_t>(offsetof(Score_Test_t3670415239, ___numSprite_6)); }
	inline SpriteU5BU5D_t3359083662* get_numSprite_6() const { return ___numSprite_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of_numSprite_6() { return &___numSprite_6; }
	inline void set_numSprite_6(SpriteU5BU5D_t3359083662* value)
	{
		___numSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___numSprite_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
