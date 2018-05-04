#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// stage_manager
struct  stage_manager_t667965450  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 stage_manager::score
	int32_t ___score_4;
	// UnityEngine.GameObject[] stage_manager::guestCreater
	GameObjectU5BU5D_t3057952154* ___guestCreater_5;
	// UnityEngine.GameObject stage_manager::n
	GameObject_t1756533147 * ___n_6;
	// UnityEngine.GameObject stage_manager::last
	GameObject_t1756533147 * ___last_7;
	// UnityEngine.UI.Text stage_manager::Name
	Text_t356221433 * ___Name_8;
	// System.Double stage_manager::beyond
	double ___beyond_9;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(stage_manager_t667965450, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_guestCreater_5() { return static_cast<int32_t>(offsetof(stage_manager_t667965450, ___guestCreater_5)); }
	inline GameObjectU5BU5D_t3057952154* get_guestCreater_5() const { return ___guestCreater_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_guestCreater_5() { return &___guestCreater_5; }
	inline void set_guestCreater_5(GameObjectU5BU5D_t3057952154* value)
	{
		___guestCreater_5 = value;
		Il2CppCodeGenWriteBarrier(&___guestCreater_5, value);
	}

	inline static int32_t get_offset_of_n_6() { return static_cast<int32_t>(offsetof(stage_manager_t667965450, ___n_6)); }
	inline GameObject_t1756533147 * get_n_6() const { return ___n_6; }
	inline GameObject_t1756533147 ** get_address_of_n_6() { return &___n_6; }
	inline void set_n_6(GameObject_t1756533147 * value)
	{
		___n_6 = value;
		Il2CppCodeGenWriteBarrier(&___n_6, value);
	}

	inline static int32_t get_offset_of_last_7() { return static_cast<int32_t>(offsetof(stage_manager_t667965450, ___last_7)); }
	inline GameObject_t1756533147 * get_last_7() const { return ___last_7; }
	inline GameObject_t1756533147 ** get_address_of_last_7() { return &___last_7; }
	inline void set_last_7(GameObject_t1756533147 * value)
	{
		___last_7 = value;
		Il2CppCodeGenWriteBarrier(&___last_7, value);
	}

	inline static int32_t get_offset_of_Name_8() { return static_cast<int32_t>(offsetof(stage_manager_t667965450, ___Name_8)); }
	inline Text_t356221433 * get_Name_8() const { return ___Name_8; }
	inline Text_t356221433 ** get_address_of_Name_8() { return &___Name_8; }
	inline void set_Name_8(Text_t356221433 * value)
	{
		___Name_8 = value;
		Il2CppCodeGenWriteBarrier(&___Name_8, value);
	}

	inline static int32_t get_offset_of_beyond_9() { return static_cast<int32_t>(offsetof(stage_manager_t667965450, ___beyond_9)); }
	inline double get_beyond_9() const { return ___beyond_9; }
	inline double* get_address_of_beyond_9() { return &___beyond_9; }
	inline void set_beyond_9(double value)
	{
		___beyond_9 = value;
	}
};

struct stage_manager_t667965450_StaticFields
{
public:
	// System.Int32 stage_manager::_score
	int32_t ____score_2;
	// System.Int32 stage_manager::_bonus
	int32_t ____bonus_3;

public:
	inline static int32_t get_offset_of__score_2() { return static_cast<int32_t>(offsetof(stage_manager_t667965450_StaticFields, ____score_2)); }
	inline int32_t get__score_2() const { return ____score_2; }
	inline int32_t* get_address_of__score_2() { return &____score_2; }
	inline void set__score_2(int32_t value)
	{
		____score_2 = value;
	}

	inline static int32_t get_offset_of__bonus_3() { return static_cast<int32_t>(offsetof(stage_manager_t667965450_StaticFields, ____bonus_3)); }
	inline int32_t get__bonus_3() const { return ____bonus_3; }
	inline int32_t* get_address_of__bonus_3() { return &____bonus_3; }
	inline void set__bonus_3(int32_t value)
	{
		____bonus_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
