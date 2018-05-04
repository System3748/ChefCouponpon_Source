#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// menu_splash
struct  menu_splash_t582349959  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Scrollbar menu_splash::_menuList
	Scrollbar_t3248359358 * ____menuList_2;
	// UnityEngine.UI.Image menu_splash::_background
	Image_t2042527209 * ____background_3;
	// UnityEngine.Sprite[] menu_splash::menuSprite
	SpriteU5BU5D_t3359083662* ___menuSprite_4;
	// UnityEngine.UI.Image menu_splash::_handle
	Image_t2042527209 * ____handle_5;
	// System.Double menu_splash::_step
	double ____step_6;

public:
	inline static int32_t get_offset_of__menuList_2() { return static_cast<int32_t>(offsetof(menu_splash_t582349959, ____menuList_2)); }
	inline Scrollbar_t3248359358 * get__menuList_2() const { return ____menuList_2; }
	inline Scrollbar_t3248359358 ** get_address_of__menuList_2() { return &____menuList_2; }
	inline void set__menuList_2(Scrollbar_t3248359358 * value)
	{
		____menuList_2 = value;
		Il2CppCodeGenWriteBarrier(&____menuList_2, value);
	}

	inline static int32_t get_offset_of__background_3() { return static_cast<int32_t>(offsetof(menu_splash_t582349959, ____background_3)); }
	inline Image_t2042527209 * get__background_3() const { return ____background_3; }
	inline Image_t2042527209 ** get_address_of__background_3() { return &____background_3; }
	inline void set__background_3(Image_t2042527209 * value)
	{
		____background_3 = value;
		Il2CppCodeGenWriteBarrier(&____background_3, value);
	}

	inline static int32_t get_offset_of_menuSprite_4() { return static_cast<int32_t>(offsetof(menu_splash_t582349959, ___menuSprite_4)); }
	inline SpriteU5BU5D_t3359083662* get_menuSprite_4() const { return ___menuSprite_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_menuSprite_4() { return &___menuSprite_4; }
	inline void set_menuSprite_4(SpriteU5BU5D_t3359083662* value)
	{
		___menuSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___menuSprite_4, value);
	}

	inline static int32_t get_offset_of__handle_5() { return static_cast<int32_t>(offsetof(menu_splash_t582349959, ____handle_5)); }
	inline Image_t2042527209 * get__handle_5() const { return ____handle_5; }
	inline Image_t2042527209 ** get_address_of__handle_5() { return &____handle_5; }
	inline void set__handle_5(Image_t2042527209 * value)
	{
		____handle_5 = value;
		Il2CppCodeGenWriteBarrier(&____handle_5, value);
	}

	inline static int32_t get_offset_of__step_6() { return static_cast<int32_t>(offsetof(menu_splash_t582349959, ____step_6)); }
	inline double get__step_6() const { return ____step_6; }
	inline double* get_address_of__step_6() { return &____step_6; }
	inline void set__step_6(double value)
	{
		____step_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
