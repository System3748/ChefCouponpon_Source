#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// talker
struct  talker_t1240555251  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button talker::character_White
	Button_t2872111280 * ___character_White_2;
	// UnityEngine.UI.Button talker::character_Blue
	Button_t2872111280 * ___character_Blue_3;
	// System.Int32[] talker::whoTalk
	Int32U5BU5D_t3030399641* ___whoTalk_4;
	// UnityEngine.GameObject[] talker::talks
	GameObjectU5BU5D_t3057952154* ___talks_5;
	// System.Int32 talker::n
	int32_t ___n_6;

public:
	inline static int32_t get_offset_of_character_White_2() { return static_cast<int32_t>(offsetof(talker_t1240555251, ___character_White_2)); }
	inline Button_t2872111280 * get_character_White_2() const { return ___character_White_2; }
	inline Button_t2872111280 ** get_address_of_character_White_2() { return &___character_White_2; }
	inline void set_character_White_2(Button_t2872111280 * value)
	{
		___character_White_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_White_2, value);
	}

	inline static int32_t get_offset_of_character_Blue_3() { return static_cast<int32_t>(offsetof(talker_t1240555251, ___character_Blue_3)); }
	inline Button_t2872111280 * get_character_Blue_3() const { return ___character_Blue_3; }
	inline Button_t2872111280 ** get_address_of_character_Blue_3() { return &___character_Blue_3; }
	inline void set_character_Blue_3(Button_t2872111280 * value)
	{
		___character_Blue_3 = value;
		Il2CppCodeGenWriteBarrier(&___character_Blue_3, value);
	}

	inline static int32_t get_offset_of_whoTalk_4() { return static_cast<int32_t>(offsetof(talker_t1240555251, ___whoTalk_4)); }
	inline Int32U5BU5D_t3030399641* get_whoTalk_4() const { return ___whoTalk_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_whoTalk_4() { return &___whoTalk_4; }
	inline void set_whoTalk_4(Int32U5BU5D_t3030399641* value)
	{
		___whoTalk_4 = value;
		Il2CppCodeGenWriteBarrier(&___whoTalk_4, value);
	}

	inline static int32_t get_offset_of_talks_5() { return static_cast<int32_t>(offsetof(talker_t1240555251, ___talks_5)); }
	inline GameObjectU5BU5D_t3057952154* get_talks_5() const { return ___talks_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_talks_5() { return &___talks_5; }
	inline void set_talks_5(GameObjectU5BU5D_t3057952154* value)
	{
		___talks_5 = value;
		Il2CppCodeGenWriteBarrier(&___talks_5, value);
	}

	inline static int32_t get_offset_of_n_6() { return static_cast<int32_t>(offsetof(talker_t1240555251, ___n_6)); }
	inline int32_t get_n_6() const { return ___n_6; }
	inline int32_t* get_address_of_n_6() { return &___n_6; }
	inline void set_n_6(int32_t value)
	{
		___n_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
