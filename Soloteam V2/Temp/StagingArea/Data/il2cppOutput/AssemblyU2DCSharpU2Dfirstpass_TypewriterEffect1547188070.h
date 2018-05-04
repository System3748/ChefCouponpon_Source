#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TypewriterEffect
struct  TypewriterEffect_t1547188070  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TypewriterEffect::charsPerSecond
	int32_t ___charsPerSecond_2;
	// UnityEngine.UI.Text TypewriterEffect::mLabel
	Text_t356221433 * ___mLabel_3;
	// System.String TypewriterEffect::mText
	String_t* ___mText_4;
	// System.Int32 TypewriterEffect::mOffset
	int32_t ___mOffset_5;
	// System.Single TypewriterEffect::mNextChar
	float ___mNextChar_6;
	// System.Boolean TypewriterEffect::isTyped
	bool ___isTyped_7;
	// System.Int32 TypewriterEffect::maxLength
	int32_t ___maxLength_8;
	// System.Int32 TypewriterEffect::totalTime
	int32_t ___totalTime_9;

public:
	inline static int32_t get_offset_of_charsPerSecond_2() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___charsPerSecond_2)); }
	inline int32_t get_charsPerSecond_2() const { return ___charsPerSecond_2; }
	inline int32_t* get_address_of_charsPerSecond_2() { return &___charsPerSecond_2; }
	inline void set_charsPerSecond_2(int32_t value)
	{
		___charsPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_mLabel_3() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___mLabel_3)); }
	inline Text_t356221433 * get_mLabel_3() const { return ___mLabel_3; }
	inline Text_t356221433 ** get_address_of_mLabel_3() { return &___mLabel_3; }
	inline void set_mLabel_3(Text_t356221433 * value)
	{
		___mLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___mLabel_3, value);
	}

	inline static int32_t get_offset_of_mText_4() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___mText_4)); }
	inline String_t* get_mText_4() const { return ___mText_4; }
	inline String_t** get_address_of_mText_4() { return &___mText_4; }
	inline void set_mText_4(String_t* value)
	{
		___mText_4 = value;
		Il2CppCodeGenWriteBarrier(&___mText_4, value);
	}

	inline static int32_t get_offset_of_mOffset_5() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___mOffset_5)); }
	inline int32_t get_mOffset_5() const { return ___mOffset_5; }
	inline int32_t* get_address_of_mOffset_5() { return &___mOffset_5; }
	inline void set_mOffset_5(int32_t value)
	{
		___mOffset_5 = value;
	}

	inline static int32_t get_offset_of_mNextChar_6() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___mNextChar_6)); }
	inline float get_mNextChar_6() const { return ___mNextChar_6; }
	inline float* get_address_of_mNextChar_6() { return &___mNextChar_6; }
	inline void set_mNextChar_6(float value)
	{
		___mNextChar_6 = value;
	}

	inline static int32_t get_offset_of_isTyped_7() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___isTyped_7)); }
	inline bool get_isTyped_7() const { return ___isTyped_7; }
	inline bool* get_address_of_isTyped_7() { return &___isTyped_7; }
	inline void set_isTyped_7(bool value)
	{
		___isTyped_7 = value;
	}

	inline static int32_t get_offset_of_maxLength_8() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___maxLength_8)); }
	inline int32_t get_maxLength_8() const { return ___maxLength_8; }
	inline int32_t* get_address_of_maxLength_8() { return &___maxLength_8; }
	inline void set_maxLength_8(int32_t value)
	{
		___maxLength_8 = value;
	}

	inline static int32_t get_offset_of_totalTime_9() { return static_cast<int32_t>(offsetof(TypewriterEffect_t1547188070, ___totalTime_9)); }
	inline int32_t get_totalTime_9() const { return ___totalTime_9; }
	inline int32_t* get_address_of_totalTime_9() { return &___totalTime_9; }
	inline void set_totalTime_9(int32_t value)
	{
		___totalTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
