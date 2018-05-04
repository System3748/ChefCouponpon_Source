#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityScript_Lang_U3CModuleU3E3783534214.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1396575355.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Collections_CollectionBase1101587467.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794.h"

// UnityScript.Lang.Array
struct Array_t1396575355;
// System.Collections.CollectionBase
struct CollectionBase_t1101587467;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t279959794;
extern Il2CppCodeGenString* _stringLiteral372029314;
extern const uint32_t Array_ToString_m1547520517_MetadataUsageId;
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral696029444;
extern const uint32_t Array_EnsureCapacity_m4113201241_MetadataUsageId;




// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m2525885291 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m811277129 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t4252133567 * CollectionBase_get_InnerList_m44314156 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern "C"  String_t* Builtins_join_m2036613869 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::EnsureCapacity(System.Int32)
extern "C"  void Array_EnsureCapacity_m4113201241 (Array_t1396575355 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m740218359 (CollectionBase_t1101587467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m1595007065 (ArgumentOutOfRangeException_t279959794 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m4252655432 (Array_t1396575355 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m2525885291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  Il2CppObject * Array_Coerce_m2367934489 (Array_t1396575355 * __this, Type_t * ___toType0, const MethodInfo* method)
{
	Il2CppArray * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___toType0;
		bool L_1 = Type_get_IsArray_m811277129(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType0;
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		Il2CppArray * L_4 = Array_ToBuiltin_m3086745688(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Il2CppArray *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  Il2CppArray * Array_ToBuiltin_m3086745688 (Array_t1396575355 * __this, Type_t * ___type0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		Il2CppArray * L_2 = VirtFuncInvoker1< Il2CppArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern "C"  String_t* Array_ToString_m1547520517 (Array_t1396575355 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1547520517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Array_Join_m140080931(__this, _stringLiteral372029314, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m140080931 (Array_t1396575355 * __this, String_t* ___seperator0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m2036613869(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  Il2CppObject * Array_get_Item_m3001262786 (Array_t1396575355 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		ArrayList_t4252133567 * L_0 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::set_Item(System.Int32,System.Object)
extern "C"  void Array_set_Item_m445950741 (Array_t1396575355 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index0;
		if (((int64_t)L_0 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		Array_EnsureCapacity_m4113201241(__this, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		ArrayList_t4252133567 * L_1 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		Il2CppObject * L_3 = ___value1;
		VirtActionInvoker2< int32_t, Il2CppObject * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m1064559095 (Array_t1396575355 * __this, Il2CppObject * ___newValue0, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityScript.Lang.Array::EnsureCapacity(System.Int32)
extern "C"  void Array_EnsureCapacity_m4113201241 (Array_t1396575355 * __this, int32_t ___capacity0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_EnsureCapacity_m4113201241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___capacity0;
		int32_t L_1 = CollectionBase_get_Count_m740218359(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_004d;
	}

IL_0011:
	{
		V_1 = 0;
		int32_t L_2 = ___capacity0;
		int32_t L_3 = CollectionBase_get_Count_m740218359(__this, /*hidden argument*/NULL);
		if (((int64_t)L_2 - (int64_t)L_3 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 - (int64_t)L_3 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_5 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_5, _stringLiteral696029444, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002e:
	{
		goto IL_0046;
	}

IL_0033:
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		ArrayList_t4252133567 * L_8 = CollectionBase_get_InnerList_m44314156(__this, /*hidden argument*/NULL);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, NULL);
	}

IL_0046:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0033;
		}
	}

IL_004d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
