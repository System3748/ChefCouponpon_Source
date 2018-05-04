#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer.SoundController
struct  SoundController_t2307757121  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip GestureRecognizer.SoundController::music
	AudioClip_t1932558630 * ___music_2;
	// UnityEngine.AudioSource GestureRecognizer.SoundController::musicAS
	AudioSource_t1135106623 * ___musicAS_3;

public:
	inline static int32_t get_offset_of_music_2() { return static_cast<int32_t>(offsetof(SoundController_t2307757121, ___music_2)); }
	inline AudioClip_t1932558630 * get_music_2() const { return ___music_2; }
	inline AudioClip_t1932558630 ** get_address_of_music_2() { return &___music_2; }
	inline void set_music_2(AudioClip_t1932558630 * value)
	{
		___music_2 = value;
		Il2CppCodeGenWriteBarrier(&___music_2, value);
	}

	inline static int32_t get_offset_of_musicAS_3() { return static_cast<int32_t>(offsetof(SoundController_t2307757121, ___musicAS_3)); }
	inline AudioSource_t1135106623 * get_musicAS_3() const { return ___musicAS_3; }
	inline AudioSource_t1135106623 ** get_address_of_musicAS_3() { return &___musicAS_3; }
	inline void set_musicAS_3(AudioSource_t1135106623 * value)
	{
		___musicAS_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicAS_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
