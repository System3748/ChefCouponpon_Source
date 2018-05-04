#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// character_select
struct  character_select_t2004000448  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite character_select::_west
	Sprite_t309593783 * ____west_2;
	// UnityEngine.Sprite character_select::_east
	Sprite_t309593783 * ____east_3;

public:
	inline static int32_t get_offset_of__west_2() { return static_cast<int32_t>(offsetof(character_select_t2004000448, ____west_2)); }
	inline Sprite_t309593783 * get__west_2() const { return ____west_2; }
	inline Sprite_t309593783 ** get_address_of__west_2() { return &____west_2; }
	inline void set__west_2(Sprite_t309593783 * value)
	{
		____west_2 = value;
		Il2CppCodeGenWriteBarrier(&____west_2, value);
	}

	inline static int32_t get_offset_of__east_3() { return static_cast<int32_t>(offsetof(character_select_t2004000448, ____east_3)); }
	inline Sprite_t309593783 * get__east_3() const { return ____east_3; }
	inline Sprite_t309593783 ** get_address_of__east_3() { return &____east_3; }
	inline void set__east_3(Sprite_t309593783 * value)
	{
		____east_3 = value;
		Il2CppCodeGenWriteBarrier(&____east_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
