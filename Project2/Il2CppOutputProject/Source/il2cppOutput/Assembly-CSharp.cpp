#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// HoloToolkit.Unity.Billboard
struct Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// ButtonScript
struct ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// HoloToolkit.Unity.FixedAngularSize
struct FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// HoloToolkit.Unity.Interpolator
struct Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// HoloToolkit.Unity.SimpleTagalong
struct SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C;
// Spin
struct Spin_tFE879423FB67400CA1124220E3FFAF49D3D1FF7D;
// System.String
struct String_t;
// HoloToolkit.Unity.Tagalong
struct Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9;
// Toggle
struct Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral56BA396E8C654CF606C76D7829FC69A8BC02CAA7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0EC08DBB3113E5727BF13850E83DA70E203441B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4_mC34892FDEDE54E6E3165591FC014BB41234A254A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInterpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9_mC1841B5FA1FDD34451676C86E14A3DB014E78DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mCA9C318B1CE1645D00B57BE962799944A01603B1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// HoloToolkit.Unity.CameraCache
struct CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033  : public RuntimeObject
{
public:

public:
};

struct CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_StaticFields
{
public:
	// UnityEngine.Camera HoloToolkit.Unity.CameraCache::cachedCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cachedCamera_0;

public:
	inline static int32_t get_offset_of_cachedCamera_0() { return static_cast<int32_t>(offsetof(CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_StaticFields, ___cachedCamera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cachedCamera_0() const { return ___cachedCamera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cachedCamera_0() { return &___cachedCamera_0; }
	inline void set_cachedCamera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cachedCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedCamera_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// HoloToolkit.Unity.PivotAxis
struct PivotAxis_t566603A3C8D29430881F470E06AC82E308AF2D9B 
{
public:
	// System.Int32 HoloToolkit.Unity.PivotAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PivotAxis_t566603A3C8D29430881F470E06AC82E308AF2D9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// HoloToolkit.Unity.Billboard
struct Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// HoloToolkit.Unity.PivotAxis HoloToolkit.Unity.Billboard::PivotAxis
	int32_t ___PivotAxis_4;
	// UnityEngine.Transform HoloToolkit.Unity.Billboard::TargetTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TargetTransform_5;

public:
	inline static int32_t get_offset_of_PivotAxis_4() { return static_cast<int32_t>(offsetof(Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB, ___PivotAxis_4)); }
	inline int32_t get_PivotAxis_4() const { return ___PivotAxis_4; }
	inline int32_t* get_address_of_PivotAxis_4() { return &___PivotAxis_4; }
	inline void set_PivotAxis_4(int32_t value)
	{
		___PivotAxis_4 = value;
	}

	inline static int32_t get_offset_of_TargetTransform_5() { return static_cast<int32_t>(offsetof(Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB, ___TargetTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TargetTransform_5() const { return ___TargetTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TargetTransform_5() { return &___TargetTransform_5; }
	inline void set_TargetTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TargetTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetTransform_5), (void*)value);
	}
};


// ButtonScript
struct ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ButtonScript::BookInf
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BookInf_4;
	// UnityEngine.GameObject ButtonScript::BookRev
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BookRev_5;

public:
	inline static int32_t get_offset_of_BookInf_4() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___BookInf_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BookInf_4() const { return ___BookInf_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BookInf_4() { return &___BookInf_4; }
	inline void set_BookInf_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BookInf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BookInf_4), (void*)value);
	}

	inline static int32_t get_offset_of_BookRev_5() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___BookRev_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BookRev_5() const { return ___BookRev_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BookRev_5() { return &___BookRev_5; }
	inline void set_BookRev_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BookRev_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BookRev_5), (void*)value);
	}
};


// HoloToolkit.Unity.FixedAngularSize
struct FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HoloToolkit.Unity.FixedAngularSize::SizeRatio
	float ___SizeRatio_4;
	// System.Single HoloToolkit.Unity.FixedAngularSize::startingDistance
	float ___startingDistance_5;
	// UnityEngine.Vector3 HoloToolkit.Unity.FixedAngularSize::startingScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startingScale_6;

public:
	inline static int32_t get_offset_of_SizeRatio_4() { return static_cast<int32_t>(offsetof(FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4, ___SizeRatio_4)); }
	inline float get_SizeRatio_4() const { return ___SizeRatio_4; }
	inline float* get_address_of_SizeRatio_4() { return &___SizeRatio_4; }
	inline void set_SizeRatio_4(float value)
	{
		___SizeRatio_4 = value;
	}

	inline static int32_t get_offset_of_startingDistance_5() { return static_cast<int32_t>(offsetof(FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4, ___startingDistance_5)); }
	inline float get_startingDistance_5() const { return ___startingDistance_5; }
	inline float* get_address_of_startingDistance_5() { return &___startingDistance_5; }
	inline void set_startingDistance_5(float value)
	{
		___startingDistance_5 = value;
	}

	inline static int32_t get_offset_of_startingScale_6() { return static_cast<int32_t>(offsetof(FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4, ___startingScale_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startingScale_6() const { return ___startingScale_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startingScale_6() { return &___startingScale_6; }
	inline void set_startingScale_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startingScale_6 = value;
	}
};


// HoloToolkit.Unity.Interpolator
struct Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean HoloToolkit.Unity.Interpolator::UseUnscaledTime
	bool ___UseUnscaledTime_4;
	// System.Single HoloToolkit.Unity.Interpolator::PositionPerSecond
	float ___PositionPerSecond_6;
	// System.Single HoloToolkit.Unity.Interpolator::RotationDegreesPerSecond
	float ___RotationDegreesPerSecond_7;
	// System.Single HoloToolkit.Unity.Interpolator::RotationSpeedScaler
	float ___RotationSpeedScaler_8;
	// System.Single HoloToolkit.Unity.Interpolator::ScalePerSecond
	float ___ScalePerSecond_9;
	// System.Boolean HoloToolkit.Unity.Interpolator::SmoothLerpToTarget
	bool ___SmoothLerpToTarget_10;
	// System.Single HoloToolkit.Unity.Interpolator::SmoothPositionLerpRatio
	float ___SmoothPositionLerpRatio_11;
	// System.Single HoloToolkit.Unity.Interpolator::SmoothRotationLerpRatio
	float ___SmoothRotationLerpRatio_12;
	// System.Single HoloToolkit.Unity.Interpolator::SmoothScaleLerpRatio
	float ___SmoothScaleLerpRatio_13;
	// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_14;
	// System.Boolean HoloToolkit.Unity.Interpolator::<AnimatingPosition>k__BackingField
	bool ___U3CAnimatingPositionU3Ek__BackingField_15;
	// UnityEngine.Quaternion HoloToolkit.Unity.Interpolator::targetRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___targetRotation_16;
	// System.Boolean HoloToolkit.Unity.Interpolator::<AnimatingRotation>k__BackingField
	bool ___U3CAnimatingRotationU3Ek__BackingField_17;
	// UnityEngine.Quaternion HoloToolkit.Unity.Interpolator::targetLocalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___targetLocalRotation_18;
	// System.Boolean HoloToolkit.Unity.Interpolator::<AnimatingLocalRotation>k__BackingField
	bool ___U3CAnimatingLocalRotationU3Ek__BackingField_19;
	// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::targetLocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetLocalScale_20;
	// System.Boolean HoloToolkit.Unity.Interpolator::<AnimatingLocalScale>k__BackingField
	bool ___U3CAnimatingLocalScaleU3Ek__BackingField_21;
	// System.Action HoloToolkit.Unity.Interpolator::InterpolationStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InterpolationStarted_22;
	// System.Action HoloToolkit.Unity.Interpolator::InterpolationDone
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InterpolationDone_23;
	// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::<PositionVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionVelocityU3Ek__BackingField_24;
	// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::oldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldPosition_25;

public:
	inline static int32_t get_offset_of_UseUnscaledTime_4() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___UseUnscaledTime_4)); }
	inline bool get_UseUnscaledTime_4() const { return ___UseUnscaledTime_4; }
	inline bool* get_address_of_UseUnscaledTime_4() { return &___UseUnscaledTime_4; }
	inline void set_UseUnscaledTime_4(bool value)
	{
		___UseUnscaledTime_4 = value;
	}

	inline static int32_t get_offset_of_PositionPerSecond_6() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___PositionPerSecond_6)); }
	inline float get_PositionPerSecond_6() const { return ___PositionPerSecond_6; }
	inline float* get_address_of_PositionPerSecond_6() { return &___PositionPerSecond_6; }
	inline void set_PositionPerSecond_6(float value)
	{
		___PositionPerSecond_6 = value;
	}

	inline static int32_t get_offset_of_RotationDegreesPerSecond_7() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___RotationDegreesPerSecond_7)); }
	inline float get_RotationDegreesPerSecond_7() const { return ___RotationDegreesPerSecond_7; }
	inline float* get_address_of_RotationDegreesPerSecond_7() { return &___RotationDegreesPerSecond_7; }
	inline void set_RotationDegreesPerSecond_7(float value)
	{
		___RotationDegreesPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_RotationSpeedScaler_8() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___RotationSpeedScaler_8)); }
	inline float get_RotationSpeedScaler_8() const { return ___RotationSpeedScaler_8; }
	inline float* get_address_of_RotationSpeedScaler_8() { return &___RotationSpeedScaler_8; }
	inline void set_RotationSpeedScaler_8(float value)
	{
		___RotationSpeedScaler_8 = value;
	}

	inline static int32_t get_offset_of_ScalePerSecond_9() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___ScalePerSecond_9)); }
	inline float get_ScalePerSecond_9() const { return ___ScalePerSecond_9; }
	inline float* get_address_of_ScalePerSecond_9() { return &___ScalePerSecond_9; }
	inline void set_ScalePerSecond_9(float value)
	{
		___ScalePerSecond_9 = value;
	}

	inline static int32_t get_offset_of_SmoothLerpToTarget_10() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___SmoothLerpToTarget_10)); }
	inline bool get_SmoothLerpToTarget_10() const { return ___SmoothLerpToTarget_10; }
	inline bool* get_address_of_SmoothLerpToTarget_10() { return &___SmoothLerpToTarget_10; }
	inline void set_SmoothLerpToTarget_10(bool value)
	{
		___SmoothLerpToTarget_10 = value;
	}

	inline static int32_t get_offset_of_SmoothPositionLerpRatio_11() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___SmoothPositionLerpRatio_11)); }
	inline float get_SmoothPositionLerpRatio_11() const { return ___SmoothPositionLerpRatio_11; }
	inline float* get_address_of_SmoothPositionLerpRatio_11() { return &___SmoothPositionLerpRatio_11; }
	inline void set_SmoothPositionLerpRatio_11(float value)
	{
		___SmoothPositionLerpRatio_11 = value;
	}

	inline static int32_t get_offset_of_SmoothRotationLerpRatio_12() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___SmoothRotationLerpRatio_12)); }
	inline float get_SmoothRotationLerpRatio_12() const { return ___SmoothRotationLerpRatio_12; }
	inline float* get_address_of_SmoothRotationLerpRatio_12() { return &___SmoothRotationLerpRatio_12; }
	inline void set_SmoothRotationLerpRatio_12(float value)
	{
		___SmoothRotationLerpRatio_12 = value;
	}

	inline static int32_t get_offset_of_SmoothScaleLerpRatio_13() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___SmoothScaleLerpRatio_13)); }
	inline float get_SmoothScaleLerpRatio_13() const { return ___SmoothScaleLerpRatio_13; }
	inline float* get_address_of_SmoothScaleLerpRatio_13() { return &___SmoothScaleLerpRatio_13; }
	inline void set_SmoothScaleLerpRatio_13(float value)
	{
		___SmoothScaleLerpRatio_13 = value;
	}

	inline static int32_t get_offset_of_targetPosition_14() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___targetPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_14() const { return ___targetPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_14() { return &___targetPosition_14; }
	inline void set_targetPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_14 = value;
	}

	inline static int32_t get_offset_of_U3CAnimatingPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___U3CAnimatingPositionU3Ek__BackingField_15)); }
	inline bool get_U3CAnimatingPositionU3Ek__BackingField_15() const { return ___U3CAnimatingPositionU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CAnimatingPositionU3Ek__BackingField_15() { return &___U3CAnimatingPositionU3Ek__BackingField_15; }
	inline void set_U3CAnimatingPositionU3Ek__BackingField_15(bool value)
	{
		___U3CAnimatingPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_targetRotation_16() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___targetRotation_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_targetRotation_16() const { return ___targetRotation_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_targetRotation_16() { return &___targetRotation_16; }
	inline void set_targetRotation_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___targetRotation_16 = value;
	}

	inline static int32_t get_offset_of_U3CAnimatingRotationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___U3CAnimatingRotationU3Ek__BackingField_17)); }
	inline bool get_U3CAnimatingRotationU3Ek__BackingField_17() const { return ___U3CAnimatingRotationU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CAnimatingRotationU3Ek__BackingField_17() { return &___U3CAnimatingRotationU3Ek__BackingField_17; }
	inline void set_U3CAnimatingRotationU3Ek__BackingField_17(bool value)
	{
		___U3CAnimatingRotationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_targetLocalRotation_18() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___targetLocalRotation_18)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_targetLocalRotation_18() const { return ___targetLocalRotation_18; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_targetLocalRotation_18() { return &___targetLocalRotation_18; }
	inline void set_targetLocalRotation_18(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___targetLocalRotation_18 = value;
	}

	inline static int32_t get_offset_of_U3CAnimatingLocalRotationU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___U3CAnimatingLocalRotationU3Ek__BackingField_19)); }
	inline bool get_U3CAnimatingLocalRotationU3Ek__BackingField_19() const { return ___U3CAnimatingLocalRotationU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAnimatingLocalRotationU3Ek__BackingField_19() { return &___U3CAnimatingLocalRotationU3Ek__BackingField_19; }
	inline void set_U3CAnimatingLocalRotationU3Ek__BackingField_19(bool value)
	{
		___U3CAnimatingLocalRotationU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_targetLocalScale_20() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___targetLocalScale_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetLocalScale_20() const { return ___targetLocalScale_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetLocalScale_20() { return &___targetLocalScale_20; }
	inline void set_targetLocalScale_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetLocalScale_20 = value;
	}

	inline static int32_t get_offset_of_U3CAnimatingLocalScaleU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___U3CAnimatingLocalScaleU3Ek__BackingField_21)); }
	inline bool get_U3CAnimatingLocalScaleU3Ek__BackingField_21() const { return ___U3CAnimatingLocalScaleU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CAnimatingLocalScaleU3Ek__BackingField_21() { return &___U3CAnimatingLocalScaleU3Ek__BackingField_21; }
	inline void set_U3CAnimatingLocalScaleU3Ek__BackingField_21(bool value)
	{
		___U3CAnimatingLocalScaleU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_InterpolationStarted_22() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___InterpolationStarted_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InterpolationStarted_22() const { return ___InterpolationStarted_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InterpolationStarted_22() { return &___InterpolationStarted_22; }
	inline void set_InterpolationStarted_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InterpolationStarted_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterpolationStarted_22), (void*)value);
	}

	inline static int32_t get_offset_of_InterpolationDone_23() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___InterpolationDone_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InterpolationDone_23() const { return ___InterpolationDone_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InterpolationDone_23() { return &___InterpolationDone_23; }
	inline void set_InterpolationDone_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InterpolationDone_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterpolationDone_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPositionVelocityU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___U3CPositionVelocityU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionVelocityU3Ek__BackingField_24() const { return ___U3CPositionVelocityU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionVelocityU3Ek__BackingField_24() { return &___U3CPositionVelocityU3Ek__BackingField_24; }
	inline void set_U3CPositionVelocityU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionVelocityU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_oldPosition_25() { return static_cast<int32_t>(offsetof(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9, ___oldPosition_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldPosition_25() const { return ___oldPosition_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldPosition_25() { return &___oldPosition_25; }
	inline void set_oldPosition_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldPosition_25 = value;
	}
};


// HoloToolkit.Unity.SimpleTagalong
struct SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HoloToolkit.Unity.SimpleTagalong::TagalongDistance
	float ___TagalongDistance_4;
	// System.Boolean HoloToolkit.Unity.SimpleTagalong::EnforceDistance
	bool ___EnforceDistance_5;
	// System.Single HoloToolkit.Unity.SimpleTagalong::PositionUpdateSpeed
	float ___PositionUpdateSpeed_6;
	// System.Boolean HoloToolkit.Unity.SimpleTagalong::SmoothMotion
	bool ___SmoothMotion_7;
	// System.Single HoloToolkit.Unity.SimpleTagalong::SmoothingFactor
	float ___SmoothingFactor_8;
	// UnityEngine.BoxCollider HoloToolkit.Unity.SimpleTagalong::tagalongCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___tagalongCollider_9;
	// HoloToolkit.Unity.Interpolator HoloToolkit.Unity.SimpleTagalong::interpolator
	Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * ___interpolator_10;
	// UnityEngine.Plane[] HoloToolkit.Unity.SimpleTagalong::frustumPlanes
	PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* ___frustumPlanes_11;

public:
	inline static int32_t get_offset_of_TagalongDistance_4() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___TagalongDistance_4)); }
	inline float get_TagalongDistance_4() const { return ___TagalongDistance_4; }
	inline float* get_address_of_TagalongDistance_4() { return &___TagalongDistance_4; }
	inline void set_TagalongDistance_4(float value)
	{
		___TagalongDistance_4 = value;
	}

	inline static int32_t get_offset_of_EnforceDistance_5() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___EnforceDistance_5)); }
	inline bool get_EnforceDistance_5() const { return ___EnforceDistance_5; }
	inline bool* get_address_of_EnforceDistance_5() { return &___EnforceDistance_5; }
	inline void set_EnforceDistance_5(bool value)
	{
		___EnforceDistance_5 = value;
	}

	inline static int32_t get_offset_of_PositionUpdateSpeed_6() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___PositionUpdateSpeed_6)); }
	inline float get_PositionUpdateSpeed_6() const { return ___PositionUpdateSpeed_6; }
	inline float* get_address_of_PositionUpdateSpeed_6() { return &___PositionUpdateSpeed_6; }
	inline void set_PositionUpdateSpeed_6(float value)
	{
		___PositionUpdateSpeed_6 = value;
	}

	inline static int32_t get_offset_of_SmoothMotion_7() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___SmoothMotion_7)); }
	inline bool get_SmoothMotion_7() const { return ___SmoothMotion_7; }
	inline bool* get_address_of_SmoothMotion_7() { return &___SmoothMotion_7; }
	inline void set_SmoothMotion_7(bool value)
	{
		___SmoothMotion_7 = value;
	}

	inline static int32_t get_offset_of_SmoothingFactor_8() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___SmoothingFactor_8)); }
	inline float get_SmoothingFactor_8() const { return ___SmoothingFactor_8; }
	inline float* get_address_of_SmoothingFactor_8() { return &___SmoothingFactor_8; }
	inline void set_SmoothingFactor_8(float value)
	{
		___SmoothingFactor_8 = value;
	}

	inline static int32_t get_offset_of_tagalongCollider_9() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___tagalongCollider_9)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_tagalongCollider_9() const { return ___tagalongCollider_9; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_tagalongCollider_9() { return &___tagalongCollider_9; }
	inline void set_tagalongCollider_9(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___tagalongCollider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagalongCollider_9), (void*)value);
	}

	inline static int32_t get_offset_of_interpolator_10() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___interpolator_10)); }
	inline Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * get_interpolator_10() const { return ___interpolator_10; }
	inline Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 ** get_address_of_interpolator_10() { return &___interpolator_10; }
	inline void set_interpolator_10(Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * value)
	{
		___interpolator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interpolator_10), (void*)value);
	}

	inline static int32_t get_offset_of_frustumPlanes_11() { return static_cast<int32_t>(offsetof(SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C, ___frustumPlanes_11)); }
	inline PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* get_frustumPlanes_11() const { return ___frustumPlanes_11; }
	inline PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD** get_address_of_frustumPlanes_11() { return &___frustumPlanes_11; }
	inline void set_frustumPlanes_11(PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* value)
	{
		___frustumPlanes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frustumPlanes_11), (void*)value);
	}
};


// Spin
struct Spin_tFE879423FB67400CA1124220E3FFAF49D3D1FF7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Toggle
struct Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Toggle::BookInf
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BookInf_4;
	// UnityEngine.GameObject Toggle::BookRev
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BookRev_5;

public:
	inline static int32_t get_offset_of_BookInf_4() { return static_cast<int32_t>(offsetof(Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B, ___BookInf_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BookInf_4() const { return ___BookInf_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BookInf_4() { return &___BookInf_4; }
	inline void set_BookInf_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BookInf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BookInf_4), (void*)value);
	}

	inline static int32_t get_offset_of_BookRev_5() { return static_cast<int32_t>(offsetof(Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B, ___BookRev_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BookRev_5() const { return ___BookRev_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BookRev_5() { return &___BookRev_5; }
	inline void set_BookRev_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BookRev_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BookRev_5), (void*)value);
	}
};


// HoloToolkit.Unity.Tagalong
struct Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9  : public SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C
{
public:
	// System.Single HoloToolkit.Unity.Tagalong::MinimumHorizontalOverlap
	float ___MinimumHorizontalOverlap_16;
	// System.Single HoloToolkit.Unity.Tagalong::TargetHorizontalOverlap
	float ___TargetHorizontalOverlap_17;
	// System.Single HoloToolkit.Unity.Tagalong::MinimumVerticalOverlap
	float ___MinimumVerticalOverlap_18;
	// System.Single HoloToolkit.Unity.Tagalong::TargetVerticalOverlap
	float ___TargetVerticalOverlap_19;
	// System.Int32 HoloToolkit.Unity.Tagalong::HorizontalRayCount
	int32_t ___HorizontalRayCount_20;
	// System.Int32 HoloToolkit.Unity.Tagalong::VerticalRayCount
	int32_t ___VerticalRayCount_21;
	// System.Single HoloToolkit.Unity.Tagalong::MinimumTagalongDistance
	float ___MinimumTagalongDistance_22;
	// System.Boolean HoloToolkit.Unity.Tagalong::MaintainFixedSize
	bool ___MaintainFixedSize_23;
	// System.Single HoloToolkit.Unity.Tagalong::DepthUpdateSpeed
	float ___DepthUpdateSpeed_24;
	// System.Single HoloToolkit.Unity.Tagalong::defaultTagalongDistance
	float ___defaultTagalongDistance_25;
	// System.Boolean HoloToolkit.Unity.Tagalong::DebugDrawLines
	bool ___DebugDrawLines_26;
	// UnityEngine.Light HoloToolkit.Unity.Tagalong::DebugPointLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___DebugPointLight_27;

public:
	inline static int32_t get_offset_of_MinimumHorizontalOverlap_16() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___MinimumHorizontalOverlap_16)); }
	inline float get_MinimumHorizontalOverlap_16() const { return ___MinimumHorizontalOverlap_16; }
	inline float* get_address_of_MinimumHorizontalOverlap_16() { return &___MinimumHorizontalOverlap_16; }
	inline void set_MinimumHorizontalOverlap_16(float value)
	{
		___MinimumHorizontalOverlap_16 = value;
	}

	inline static int32_t get_offset_of_TargetHorizontalOverlap_17() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___TargetHorizontalOverlap_17)); }
	inline float get_TargetHorizontalOverlap_17() const { return ___TargetHorizontalOverlap_17; }
	inline float* get_address_of_TargetHorizontalOverlap_17() { return &___TargetHorizontalOverlap_17; }
	inline void set_TargetHorizontalOverlap_17(float value)
	{
		___TargetHorizontalOverlap_17 = value;
	}

	inline static int32_t get_offset_of_MinimumVerticalOverlap_18() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___MinimumVerticalOverlap_18)); }
	inline float get_MinimumVerticalOverlap_18() const { return ___MinimumVerticalOverlap_18; }
	inline float* get_address_of_MinimumVerticalOverlap_18() { return &___MinimumVerticalOverlap_18; }
	inline void set_MinimumVerticalOverlap_18(float value)
	{
		___MinimumVerticalOverlap_18 = value;
	}

	inline static int32_t get_offset_of_TargetVerticalOverlap_19() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___TargetVerticalOverlap_19)); }
	inline float get_TargetVerticalOverlap_19() const { return ___TargetVerticalOverlap_19; }
	inline float* get_address_of_TargetVerticalOverlap_19() { return &___TargetVerticalOverlap_19; }
	inline void set_TargetVerticalOverlap_19(float value)
	{
		___TargetVerticalOverlap_19 = value;
	}

	inline static int32_t get_offset_of_HorizontalRayCount_20() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___HorizontalRayCount_20)); }
	inline int32_t get_HorizontalRayCount_20() const { return ___HorizontalRayCount_20; }
	inline int32_t* get_address_of_HorizontalRayCount_20() { return &___HorizontalRayCount_20; }
	inline void set_HorizontalRayCount_20(int32_t value)
	{
		___HorizontalRayCount_20 = value;
	}

	inline static int32_t get_offset_of_VerticalRayCount_21() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___VerticalRayCount_21)); }
	inline int32_t get_VerticalRayCount_21() const { return ___VerticalRayCount_21; }
	inline int32_t* get_address_of_VerticalRayCount_21() { return &___VerticalRayCount_21; }
	inline void set_VerticalRayCount_21(int32_t value)
	{
		___VerticalRayCount_21 = value;
	}

	inline static int32_t get_offset_of_MinimumTagalongDistance_22() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___MinimumTagalongDistance_22)); }
	inline float get_MinimumTagalongDistance_22() const { return ___MinimumTagalongDistance_22; }
	inline float* get_address_of_MinimumTagalongDistance_22() { return &___MinimumTagalongDistance_22; }
	inline void set_MinimumTagalongDistance_22(float value)
	{
		___MinimumTagalongDistance_22 = value;
	}

	inline static int32_t get_offset_of_MaintainFixedSize_23() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___MaintainFixedSize_23)); }
	inline bool get_MaintainFixedSize_23() const { return ___MaintainFixedSize_23; }
	inline bool* get_address_of_MaintainFixedSize_23() { return &___MaintainFixedSize_23; }
	inline void set_MaintainFixedSize_23(bool value)
	{
		___MaintainFixedSize_23 = value;
	}

	inline static int32_t get_offset_of_DepthUpdateSpeed_24() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___DepthUpdateSpeed_24)); }
	inline float get_DepthUpdateSpeed_24() const { return ___DepthUpdateSpeed_24; }
	inline float* get_address_of_DepthUpdateSpeed_24() { return &___DepthUpdateSpeed_24; }
	inline void set_DepthUpdateSpeed_24(float value)
	{
		___DepthUpdateSpeed_24 = value;
	}

	inline static int32_t get_offset_of_defaultTagalongDistance_25() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___defaultTagalongDistance_25)); }
	inline float get_defaultTagalongDistance_25() const { return ___defaultTagalongDistance_25; }
	inline float* get_address_of_defaultTagalongDistance_25() { return &___defaultTagalongDistance_25; }
	inline void set_defaultTagalongDistance_25(float value)
	{
		___defaultTagalongDistance_25 = value;
	}

	inline static int32_t get_offset_of_DebugDrawLines_26() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___DebugDrawLines_26)); }
	inline bool get_DebugDrawLines_26() const { return ___DebugDrawLines_26; }
	inline bool* get_address_of_DebugDrawLines_26() { return &___DebugDrawLines_26; }
	inline void set_DebugDrawLines_26(bool value)
	{
		___DebugDrawLines_26 = value;
	}

	inline static int32_t get_offset_of_DebugPointLight_27() { return static_cast<int32_t>(offsetof(Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9, ___DebugPointLight_27)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_DebugPointLight_27() const { return ___DebugPointLight_27; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_DebugPointLight_27() { return &___DebugPointLight_27; }
	inline void set_DebugPointLight_27(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___DebugPointLight_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugPointLight_27), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Plane[]
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  m_Items[1];

public:
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera HoloToolkit.Unity.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Billboard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billboard_Update_m266806D96B009FC8D2B890C15105C385D17CE14F (Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Camera HoloToolkit.Unity.CameraCache::Refresh(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_Refresh_m48F440049E292F53B87295A7B7C6D804B23B1ADC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newMain0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.FixedAngularSize::SetSizeRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedAngularSize_SetSizeRatio_m2F18BEBAB64630AED4291EC1A65BB74AFD4DE590 (FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * __this, float ___ratio0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingRotation_m7201936CBDD7BD6ACB01678115235B193C28BF92_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingLocalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingLocalRotation_m339D88A11EF303C2FEF3FC7D57392C2247CF5C70_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingLocalScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingLocalScale_mCC228EEE443EA8A49FD326CF166BA62466824690_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.Interpolator::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingPosition(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingRotation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingLocalRotation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingLocalScale(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::NonLinearInterpolateTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_NonLinearInterpolateTo_mEE47DD2EF658372780E851A7BFF1118D1F030F13 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___deltaTime2, float ___speed3, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::set_PositionVelocity(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_PositionVelocity_m64822951DFFC2200006FF5B33F051EDE4B593B04_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::get_TargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_get_TargetPosition_mE639B9EFF6E0379A1E172EE48050A277C27490F4 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion HoloToolkit.Unity.Interpolator::get_TargetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Interpolator_get_TargetRotation_mF75D9EAE3BEEB6BDDD8085473B22C8A98F50FD68 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion HoloToolkit.Unity.Interpolator::get_TargetLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Interpolator_get_TargetLocalRotation_m47E6C7D899FC52E30A5609551CC83BCF738E5EE3 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::get_TargetLocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_get_TargetLocalScale_mA435EAB66DA550E87BF7468383BF9451E58B05B7 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_Reset_m9D5B6BBEE328F507675D160D2CC65089CCF2D261 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HoloToolkit.Unity.Interpolator>()
inline Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * GameObject_GetComponent_TisInterpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9_mC1841B5FA1FDD34451676C86E14A3DB014E78DFC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* GeometryUtility_CalculateFrustumPlanes_mB4DD05307602B87B5279CD3D9B4EED69D4429663 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.Interpolator::SetTargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_SetTargetPosition_m0B337E11828E5772B1F94C4B95E4A51840A67EA6 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_mC37D104FA9ACBC6A959A7CCD6C1EAD3A7A450491 (PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* ___planes0, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Plane::GetDistanceToPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SimpleTagalong::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTagalong_Start_mD110391CF168157D7B9A596E6662C0A9692DA069 (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<HoloToolkit.Unity.FixedAngularSize>()
inline FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * GameObject_AddComponent_TisFixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4_mC34892FDEDE54E6E3165591FC014BB41234A254A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void HoloToolkit.Unity.SimpleTagalong::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTagalong_Update_m1AFEE64B5F908011173AF460E466AD9F278869F9 (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.Tagalong::AdjustTagalongDistance(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tagalong_AdjustTagalongDistance_m25DE534C629FC6DA5B4DB483551F2BB77E6F70C3 (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___newPosition1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_mAC54A53224BBEFE37A4387DCBD0EF3774751221E (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Vector3 HoloToolkit.Unity.Tagalong::CalculateTargetPosition(System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.Plane,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Tagalong_CalculateTargetPosition_mCBC20CD385370474672B54CED9FE60ABBF70485C (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, bool ___isHorizontal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centermostEdge1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vectorTowardCenter2, float ___width3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center4, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___frustumPlane5, bool ___invertAngle6, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* Physics_RaycastAll_m2BBC8D2731B38EE0B704A5C6A09D0F8BBA074A4D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, float ___maxDistance2, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Light>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * Object_Instantiate_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mCA9C318B1CE1645D00B57BE962799944A01603B1 (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (Light_tA2F349FE839781469A0344CF6039B51512394275 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SimpleTagalong::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTagalong__ctor_mC344395CA376A23C69E2548A0AD5EBC1C34AD421 (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643 (float ___dot0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HoloToolkit.Unity.Billboard::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billboard_OnEnable_m7B6C746E1ABD853BF71C684366646011643368D8 (Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TargetTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_TargetTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// TargetTransform = CameraCache.Main.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		__this->set_TargetTransform_5(L_3);
	}

IL_001e:
	{
		// Update();
		Billboard_Update_m266806D96B009FC8D2B890C15105C385D17CE14F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Billboard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billboard_Update_m266806D96B009FC8D2B890C15105C385D17CE14F (Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (TargetTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_TargetTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Vector3 directionToTarget = TargetTransform.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_TargetTransform_5();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// switch (PivotAxis)
		int32_t L_7 = __this->get_PivotAxis_4();
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		// directionToTarget.y = 0.0f;
		(&V_0)->set_y_3((0.0f));
	}

IL_0045:
	{
		// if (directionToTarget.sqrMagnitude < 0.001f)
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)(0.00100000005f)))))
		{
			goto IL_0054;
		}
	}
	{
		// return;
		return;
	}

IL_0054:
	{
		// transform.rotation = Quaternion.LookRotation(-directionToTarget);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Billboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billboard__ctor_mB94741F3C3E18B5C4A70CA1087374C00C882D2B8 (Billboard_tBF7123B0F815E7B9BAF817A1D20781DB77AAA4EB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Start_m667412D1B935EA027E49D2C8A4E3EA28C236D54C (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		// BookInf.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_BookInf_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// BookRev.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_BookRev_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Update_m97527E784DB58C2B6A49C08FFE8F8E728643417B (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonScript::pressedbutton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_pressedbutton_mB7A1C9EF867D9FCB27A8639E52965F8D8653EB8C (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		// if (BookInf.activeSelf == true && BookRev.activeSelf == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_BookInf_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_BookRev_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// BookInf.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_BookInf_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// BookRev.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_BookRev_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0033:
	{
		// else if (BookInf.activeSelf == false && BookRev.activeSelf == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_BookInf_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0065;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_BookRev_5();
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// BookInf.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_BookInf_4();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// BookRev.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_BookRev_5();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void ButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript__ctor_mF4A9BCC4E47661F057F9B2A7770B635E63C8EC6B (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera HoloToolkit.Unity.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cachedCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ((CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_StaticFields*)il2cpp_codegen_static_fields_for(CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_il2cpp_TypeInfo_var))->get_cachedCamera_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return Refresh(Camera.main);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = CameraCache_Refresh_m48F440049E292F53B87295A7B7C6D804B23B1ADC(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		// return cachedCamera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = ((CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_StaticFields*)il2cpp_codegen_static_fields_for(CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_il2cpp_TypeInfo_var))->get_cachedCamera_0();
		return L_4;
	}
}
// UnityEngine.Camera HoloToolkit.Unity.CameraCache::Refresh(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_Refresh_m48F440049E292F53B87295A7B7C6D804B23B1ADC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___newMain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cachedCamera = newMain;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___newMain0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0;
		((CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_StaticFields*)il2cpp_codegen_static_fields_for(CameraCache_t8FE25B8A2D81F52E694B70EF48DE821618DFC033_il2cpp_TypeInfo_var))->set_cachedCamera_0(L_1);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HoloToolkit.Unity.FixedAngularSize::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedAngularSize_Start_mE293E8B99411BCD16091F1809D38EA0C8BA49309 (FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * __this, const RuntimeMethod* method)
{
	{
		// startingDistance = Vector3.Distance(CameraCache.Main.transform.position, transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_4, /*hidden argument*/NULL);
		__this->set_startingDistance_5(L_5);
		// startingScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		__this->set_startingScale_6(L_7);
		// SetSizeRatio(SizeRatio);
		float L_8 = __this->get_SizeRatio_4();
		FixedAngularSize_SetSizeRatio_m2F18BEBAB64630AED4291EC1A65BB74AFD4DE590(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.FixedAngularSize::SetSizeRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedAngularSize_SetSizeRatio_m2F18BEBAB64630AED4291EC1A65BB74AFD4DE590 (FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * __this, float ___ratio0, const RuntimeMethod* method)
{
	{
		// if (ratio == 0)
		float L_0 = ___ratio0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (startingDistance > 0.0f)
		float L_1 = __this->get_startingDistance_5();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// SizeRatio = 1 / startingDistance;
		float L_2 = __this->get_startingDistance_5();
		__this->set_SizeRatio_4(((float)((float)(1.0f)/(float)L_2)));
		// }
		return;
	}

IL_0028:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// SizeRatio = ratio;
		float L_3 = ___ratio0;
		__this->set_SizeRatio_4(L_3);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.FixedAngularSize::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedAngularSize_Update_mEF299CCF4E1D7C27971217CE409CBBF3E6EEB9E3 (FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float distanceToHologram = Vector3.Distance(CameraCache.Main.transform.position, transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// float curvedRatio = 1 - startingDistance * SizeRatio;
		float L_6 = __this->get_startingDistance_5();
		float L_7 = __this->get_SizeRatio_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		// transform.localScale = startingScale * (distanceToHologram * SizeRatio + curvedRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_startingScale_6();
		float L_10 = V_0;
		float L_11 = __this->get_SizeRatio_4();
		float L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.FixedAngularSize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedAngularSize__ctor_m5DEDCBF834FEB6660D06B733384F23C030698E3D (FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingPosition { get; private set; }
		bool L_0 = __this->get_U3CAnimatingPositionU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingPosition { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingPositionU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingRotation_m7201936CBDD7BD6ACB01678115235B193C28BF92 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingRotation { get; private set; }
		bool L_0 = __this->get_U3CAnimatingRotationU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingRotation { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingRotationU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingLocalRotation_m339D88A11EF303C2FEF3FC7D57392C2247CF5C70 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalRotation { get; private set; }
		bool L_0 = __this->get_U3CAnimatingLocalRotationU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingLocalRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalRotation { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingLocalRotationU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Boolean HoloToolkit.Unity.Interpolator::get_AnimatingLocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingLocalScale_mCC228EEE443EA8A49FD326CF166BA62466824690 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalScale { get; private set; }
		bool L_0 = __this->get_U3CAnimatingLocalScaleU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::set_AnimatingLocalScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalScale { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingLocalScaleU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::add_InterpolationStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_add_InterpolationStarted_mBC37270CD5F2FB61B6999A46B012939BA64703C6 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_InterpolationStarted_22();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_InterpolationStarted_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::remove_InterpolationStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_remove_InterpolationStarted_m6DF682B30A92A129162A3E32EF3F27C9F78F6035 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_InterpolationStarted_22();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_InterpolationStarted_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::add_InterpolationDone(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_add_InterpolationDone_m62475E1E1DD151BEFA8C3E8C57099E3E15DDAB3B (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_InterpolationDone_23();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_InterpolationDone_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::remove_InterpolationDone(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_remove_InterpolationDone_m0FE2F49EFACC7657BF14D8A74E724E648BB8E547 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_InterpolationDone_23();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_InterpolationDone_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::get_PositionVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_get_PositionVelocity_mCAE50CC2B5436F38EF71239C56F7BD75E29F7BEA (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionVelocity { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPositionVelocityU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::set_PositionVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_set_PositionVelocity_m64822951DFFC2200006FF5B33F051EDE4B593B04 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionVelocity { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPositionVelocityU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean HoloToolkit.Unity.Interpolator::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// return (AnimatingPosition || AnimatingRotation || AnimatingLocalRotation || AnimatingLocalScale);
		bool L_0;
		L_0 = Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1;
		L_1 = Interpolator_get_AnimatingRotation_m7201936CBDD7BD6ACB01678115235B193C28BF92_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		bool L_2;
		L_2 = Interpolator_get_AnimatingLocalRotation_m339D88A11EF303C2FEF3FC7D57392C2247CF5C70_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		bool L_3;
		L_3 = Interpolator_get_AnimatingLocalScale_mCC228EEE443EA8A49FD326CF166BA62466824690_inline(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_Awake_mB2FDB7B4E28B653C1541356A7675E9D2B1416E6E (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// targetPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_targetPosition_14(L_1);
		// targetRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		__this->set_targetRotation_16(L_3);
		// targetLocalRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_4, /*hidden argument*/NULL);
		__this->set_targetLocalRotation_18(L_5);
		// targetLocalScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		__this->set_targetLocalScale_20(L_7);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::SetTargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_SetTargetPosition_m0B337E11828E5772B1F94C4B95E4A51840A67EA6 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// bool wasRunning = Running;
		bool L_0;
		L_0 = Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// targetPosition = target;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___target0;
		__this->set_targetPosition_14(L_1);
		// float magsq = (targetPosition - transform.position).sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_targetPosition_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// if (magsq > smallNumber)
		if ((!(((float)L_6) > ((float)(1.00000001E-07f)))))
		{
			goto IL_0058;
		}
	}
	{
		// AnimatingPosition = true;
		Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline(__this, (bool)1, /*hidden argument*/NULL);
		// enabled = true;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)1, /*hidden argument*/NULL);
		// if (InterpolationStarted != null && !wasRunning)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = __this->get_InterpolationStarted_22();
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_006b;
		}
	}
	{
		// InterpolationStarted();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_InterpolationStarted_22();
		NullCheck(L_9);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// transform.position = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___target0;
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_11, /*hidden argument*/NULL);
		// AnimatingPosition = false;
		Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::SetTargetRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_SetTargetRotation_m2FBE94B30CC463C2405E9A04EADA2A2C16C10FE4 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___target0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool wasRunning = Running;
		bool L_0;
		L_0 = Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// targetRotation = target;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___target0;
		__this->set_targetRotation_16(L_1);
		// if (Quaternion.Dot(transform.rotation, target) < 1.0f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___target0;
		float L_5;
		L_5 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_3, L_4, /*hidden argument*/NULL);
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// AnimatingRotation = true;
		Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline(__this, (bool)1, /*hidden argument*/NULL);
		// enabled = true;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)1, /*hidden argument*/NULL);
		// if (InterpolationStarted != null && !wasRunning)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_InterpolationStarted_22();
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		// InterpolationStarted();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = __this->get_InterpolationStarted_22();
		NullCheck(L_8);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// transform.rotation = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = ___target0;
		NullCheck(L_9);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_9, L_10, /*hidden argument*/NULL);
		// AnimatingRotation = false;
		Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::SetTargetLocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_SetTargetLocalRotation_m4A1B55D72DE21716F52E939358909F4FA431BA36 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___target0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool wasRunning = Running;
		bool L_0;
		L_0 = Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// targetLocalRotation = target;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___target0;
		__this->set_targetLocalRotation_18(L_1);
		// if (Quaternion.Dot(transform.localRotation, target) < 1.0f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___target0;
		float L_5;
		L_5 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_3, L_4, /*hidden argument*/NULL);
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// AnimatingLocalRotation = true;
		Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline(__this, (bool)1, /*hidden argument*/NULL);
		// enabled = true;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)1, /*hidden argument*/NULL);
		// if (InterpolationStarted != null && !wasRunning)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_InterpolationStarted_22();
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		// InterpolationStarted();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = __this->get_InterpolationStarted_22();
		NullCheck(L_8);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// transform.localRotation = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = ___target0;
		NullCheck(L_9);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_10, /*hidden argument*/NULL);
		// AnimatingLocalRotation = false;
		Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::SetTargetLocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_SetTargetLocalScale_m7033FDE05BD75726A7CB4510D288E26680DA4BFB (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// bool wasRunning = Running;
		bool L_0;
		L_0 = Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// targetLocalScale = target;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___target0;
		__this->set_targetLocalScale_20(L_1);
		// float magsq = (targetLocalScale - transform.localScale).sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_targetLocalScale_20();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// if (magsq > Mathf.Epsilon)
		float L_7 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0058;
		}
	}
	{
		// AnimatingLocalScale = true;
		Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline(__this, (bool)1, /*hidden argument*/NULL);
		// enabled = true;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)1, /*hidden argument*/NULL);
		// if (InterpolationStarted != null && !wasRunning)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = __this->get_InterpolationStarted_22();
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		// InterpolationStarted();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = __this->get_InterpolationStarted_22();
		NullCheck(L_10);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// transform.localScale = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___target0;
		NullCheck(L_11);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_12, /*hidden argument*/NULL);
		// AnimatingLocalScale = false;
		Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::NonLinearInterpolateTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_NonLinearInterpolateTo_mEE47DD2EF658372780E851A7BFF1118D1F030F13 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___deltaTime2, float ___speed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (speed <= 0.0f)
		float L_0 = ___speed3;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return target;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___target1;
		return L_1;
	}

IL_000a:
	{
		// Vector3 distance = (target - start);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (distance.sqrMagnitude <= Mathf.Epsilon)
		float L_5;
		L_5 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_6 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_5) <= ((float)L_6))))
		{
			goto IL_0022;
		}
	}
	{
		// return target;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___target1;
		return L_7;
	}

IL_0022:
	{
		// Vector3 deltaMove = distance * Mathf.Clamp(deltaTime * speed, 0.0f, 1.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = ___deltaTime2;
		float L_10 = ___speed3;
		float L_11;
		L_11 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// return start + deltaMove;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___start0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_Update_m04C79AC166B3106802DF5B6A057D00DB9629B598 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float G_B3_0 = 0.0f;
	{
		// float deltaTime = UseUnscaledTime
		//     ? Time.unscaledDeltaTime
		//     : Time.deltaTime;
		bool L_0 = __this->get_UseUnscaledTime_4();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// bool interpOccuredThisFrame = false;
		V_1 = (bool)0;
		// if (AnimatingPosition)
		bool L_3;
		L_3 = Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b5;
		}
	}
	{
		// Vector3 lerpTargetPosition = targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_targetPosition_14();
		V_2 = L_4;
		// if (SmoothLerpToTarget)
		bool L_5 = __this->get_SmoothLerpToTarget_10();
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// lerpTargetPosition = Vector3.Lerp(transform.position, lerpTargetPosition, SmoothPositionLerpRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		float L_9 = __this->get_SmoothPositionLerpRatio_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
	}

IL_0049:
	{
		// Vector3 newPosition = NonLinearInterpolateTo(transform.position, lerpTargetPosition, deltaTime, PositionPerSecond);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		float L_14 = V_0;
		float L_15 = __this->get_PositionPerSecond_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Interpolator_NonLinearInterpolateTo_mEE47DD2EF658372780E851A7BFF1118D1F030F13(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// if ((targetPosition - newPosition).sqrMagnitude <= smallNumber)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_targetPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		float L_20;
		L_20 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_20) <= ((float)(1.00000001E-07f)))))
		{
			goto IL_008e;
		}
	}
	{
		// newPosition = targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_targetPosition_14();
		V_3 = L_21;
		// AnimatingPosition = false;
		Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0090;
	}

IL_008e:
	{
		// interpOccuredThisFrame = true;
		V_1 = (bool)1;
	}

IL_0090:
	{
		// transform.position = newPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_3;
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_23, /*hidden argument*/NULL);
		// PositionVelocity = oldPosition - newPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_oldPosition_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_25, /*hidden argument*/NULL);
		Interpolator_set_PositionVelocity_m64822951DFFC2200006FF5B33F051EDE4B593B04_inline(__this, L_26, /*hidden argument*/NULL);
		// oldPosition = newPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_3;
		__this->set_oldPosition_25(L_27);
	}

IL_00b5:
	{
		// if (AnimatingRotation)
		bool L_28;
		L_28 = Interpolator_get_AnimatingRotation_m7201936CBDD7BD6ACB01678115235B193C28BF92_inline(__this, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_016e;
		}
	}
	{
		// Quaternion lerpTargetRotation = targetRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29 = __this->get_targetRotation_16();
		V_5 = L_29;
		// if (SmoothLerpToTarget)
		bool L_30 = __this->get_SmoothLerpToTarget_10();
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		// lerpTargetRotation = Quaternion.Lerp(transform.rotation, lerpTargetRotation, SmoothRotationLerpRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_31, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = V_5;
		float L_34 = __this->get_SmoothRotationLerpRatio_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_32, L_33, L_34, /*hidden argument*/NULL);
		V_5 = L_35;
	}

IL_00ea:
	{
		// float angleDiff = Quaternion.Angle(transform.rotation, lerpTargetRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38 = V_5;
		float L_39;
		L_39 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_37, L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		// float speedScale = 1.0f + (Mathf.Pow(angleDiff, RotationSpeedScaler) / 180.0f);
		float L_40 = V_6;
		float L_41 = __this->get_RotationSpeedScaler_8();
		float L_42;
		L_42 = powf(L_40, L_41);
		// float ratio = Mathf.Clamp01((speedScale * RotationDegreesPerSecond * deltaTime) / angleDiff);
		float L_43 = __this->get_RotationDegreesPerSecond_7();
		float L_44 = V_0;
		float L_45 = V_6;
		float L_46;
		L_46 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)((float)L_42/(float)(180.0f))))), (float)L_43)), (float)L_44))/(float)L_45)), /*hidden argument*/NULL);
		V_7 = L_46;
		// if (angleDiff < Mathf.Epsilon)
		float L_47 = V_6;
		float L_48 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_47) < ((float)L_48))))
		{
			goto IL_014d;
		}
	}
	{
		// AnimatingRotation = false;
		Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline(__this, (bool)0, /*hidden argument*/NULL);
		// transform.rotation = targetRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_50 = __this->get_targetRotation_16();
		NullCheck(L_49);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_49, L_50, /*hidden argument*/NULL);
		// }
		goto IL_016e;
	}

IL_014d:
	{
		// transform.rotation = Quaternion.Slerp(transform.rotation, lerpTargetRotation, ratio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_52, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54 = V_5;
		float L_55 = V_7;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_53, L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_51, L_56, /*hidden argument*/NULL);
		// interpOccuredThisFrame = true;
		V_1 = (bool)1;
	}

IL_016e:
	{
		// if (AnimatingLocalRotation)
		bool L_57;
		L_57 = Interpolator_get_AnimatingLocalRotation_m339D88A11EF303C2FEF3FC7D57392C2247CF5C70_inline(__this, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_0227;
		}
	}
	{
		// Quaternion lerpTargetLocalRotation = targetLocalRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58 = __this->get_targetLocalRotation_18();
		V_8 = L_58;
		// if (SmoothLerpToTarget)
		bool L_59 = __this->get_SmoothLerpToTarget_10();
		if (!L_59)
		{
			goto IL_01a3;
		}
	}
	{
		// lerpTargetLocalRotation = Quaternion.Lerp(transform.localRotation, lerpTargetLocalRotation, SmoothRotationLerpRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61;
		L_61 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_60, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62 = V_8;
		float L_63 = __this->get_SmoothRotationLerpRatio_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_61, L_62, L_63, /*hidden argument*/NULL);
		V_8 = L_64;
	}

IL_01a3:
	{
		// float angleDiff = Quaternion.Angle(transform.localRotation, lerpTargetLocalRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_66;
		L_66 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_65, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_67 = V_8;
		float L_68;
		L_68 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_66, L_67, /*hidden argument*/NULL);
		V_9 = L_68;
		// float speedScale = 1.0f + (Mathf.Pow(angleDiff, RotationSpeedScaler) / 180.0f);
		float L_69 = V_9;
		float L_70 = __this->get_RotationSpeedScaler_8();
		float L_71;
		L_71 = powf(L_69, L_70);
		// float ratio = Mathf.Clamp01((speedScale * RotationDegreesPerSecond * deltaTime) / angleDiff);
		float L_72 = __this->get_RotationDegreesPerSecond_7();
		float L_73 = V_0;
		float L_74 = V_9;
		float L_75;
		L_75 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)((float)L_71/(float)(180.0f))))), (float)L_72)), (float)L_73))/(float)L_74)), /*hidden argument*/NULL);
		V_10 = L_75;
		// if (angleDiff < Mathf.Epsilon)
		float L_76 = V_9;
		float L_77 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_76) < ((float)L_77))))
		{
			goto IL_0206;
		}
	}
	{
		// AnimatingLocalRotation = false;
		Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline(__this, (bool)0, /*hidden argument*/NULL);
		// transform.localRotation = targetLocalRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_79 = __this->get_targetLocalRotation_18();
		NullCheck(L_78);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_78, L_79, /*hidden argument*/NULL);
		// }
		goto IL_0227;
	}

IL_0206:
	{
		// transform.localRotation = Quaternion.Slerp(transform.localRotation, lerpTargetLocalRotation, ratio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82;
		L_82 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_81, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_83 = V_8;
		float L_84 = V_10;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_85;
		L_85 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_82, L_83, L_84, /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_80, L_85, /*hidden argument*/NULL);
		// interpOccuredThisFrame = true;
		V_1 = (bool)1;
	}

IL_0227:
	{
		// if (AnimatingLocalScale)
		bool L_86;
		L_86 = Interpolator_get_AnimatingLocalScale_mCC228EEE443EA8A49FD326CF166BA62466824690_inline(__this, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_02b4;
		}
	}
	{
		// Vector3 lerpTargetLocalScale = targetLocalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = __this->get_targetLocalScale_20();
		V_11 = L_87;
		// if (SmoothLerpToTarget)
		bool L_88 = __this->get_SmoothLerpToTarget_10();
		if (!L_88)
		{
			goto IL_025c;
		}
	}
	{
		// lerpTargetLocalScale = Vector3.Lerp(transform.localScale, lerpTargetLocalScale, SmoothScaleLerpRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = V_11;
		float L_92 = __this->get_SmoothScaleLerpRatio_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_90, L_91, L_92, /*hidden argument*/NULL);
		V_11 = L_93;
	}

IL_025c:
	{
		// Vector3 newScale = NonLinearInterpolateTo(transform.localScale, lerpTargetLocalScale, deltaTime, ScalePerSecond);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_94);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = V_11;
		float L_97 = V_0;
		float L_98 = __this->get_ScalePerSecond_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Interpolator_NonLinearInterpolateTo_mEE47DD2EF658372780E851A7BFF1118D1F030F13(L_95, L_96, L_97, L_98, /*hidden argument*/NULL);
		V_12 = L_99;
		// if ((targetLocalScale - newScale).sqrMagnitude <= smallNumber)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = __this->get_targetLocalScale_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_100, L_101, /*hidden argument*/NULL);
		V_4 = L_102;
		float L_103;
		L_103 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_103) <= ((float)(1.00000001E-07f)))))
		{
			goto IL_02a5;
		}
	}
	{
		// newScale = targetLocalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = __this->get_targetLocalScale_20();
		V_12 = L_104;
		// AnimatingLocalScale = false;
		Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_02a7;
	}

IL_02a5:
	{
		// interpOccuredThisFrame = true;
		V_1 = (bool)1;
	}

IL_02a7:
	{
		// transform.localScale = newScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105;
		L_105 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106 = V_12;
		NullCheck(L_105);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_105, L_106, /*hidden argument*/NULL);
	}

IL_02b4:
	{
		// if (!interpOccuredThisFrame)
		bool L_107 = V_1;
		if (L_107)
		{
			goto IL_02d1;
		}
	}
	{
		// if (InterpolationDone != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_108 = __this->get_InterpolationDone_23();
		if (!L_108)
		{
			goto IL_02ca;
		}
	}
	{
		// InterpolationDone();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_109 = __this->get_InterpolationDone_23();
		NullCheck(L_109);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_109, /*hidden argument*/NULL);
	}

IL_02ca:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_02d1:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::SnapToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_SnapToTarget_m1ABC78F74B6C1D591BD7ADB4381C1EDD5AE7DDF3 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		// transform.position = TargetPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Interpolator_get_TargetPosition_mE639B9EFF6E0379A1E172EE48050A277C27490F4(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// transform.rotation = TargetRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Interpolator_get_TargetRotation_mF75D9EAE3BEEB6BDDD8085473B22C8A98F50FD68(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_4, /*hidden argument*/NULL);
		// transform.localRotation = TargetLocalRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Interpolator_get_TargetLocalRotation_m47E6C7D899FC52E30A5609551CC83BCF738E5EE3(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_5, L_6, /*hidden argument*/NULL);
		// transform.localScale = TargetLocalScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Interpolator_get_TargetLocalScale_mA435EAB66DA550E87BF7468383BF9451E58B05B7(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_7, L_8, /*hidden argument*/NULL);
		// AnimatingPosition = false;
		Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AnimatingLocalScale = false;
		Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AnimatingRotation = false;
		Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AnimatingLocalRotation = false;
		Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline(__this, (bool)0, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// if (InterpolationDone != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_InterpolationDone_23();
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		// InterpolationDone();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = __this->get_InterpolationDone_23();
		NullCheck(L_10);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_10, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::StopInterpolating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_StopInterpolating_m59FD1BC368CCFB6E6479B63471352D04B38D0642 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// Reset();
		Interpolator_Reset_m9D5B6BBEE328F507675D160D2CC65089CCF2D261(__this, /*hidden argument*/NULL);
		// if (InterpolationDone != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_InterpolationDone_23();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// InterpolationDone();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = __this->get_InterpolationDone_23();
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator_Reset_m9D5B6BBEE328F507675D160D2CC65089CCF2D261 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// targetPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_targetPosition_14(L_1);
		// targetRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		__this->set_targetRotation_16(L_3);
		// targetLocalRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_4, /*hidden argument*/NULL);
		__this->set_targetLocalRotation_18(L_5);
		// targetLocalScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		__this->set_targetLocalScale_20(L_7);
		// AnimatingPosition = false;
		Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AnimatingRotation = false;
		Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AnimatingLocalRotation = false;
		Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AnimatingLocalScale = false;
		Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline(__this, (bool)0, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::get_TargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_get_TargetPosition_mE639B9EFF6E0379A1E172EE48050A277C27490F4 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// if (AnimatingPosition)
		bool L_0;
		L_0 = Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_targetPosition_14();
		return L_1;
	}

IL_000f:
	{
		// return transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion HoloToolkit.Unity.Interpolator::get_TargetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Interpolator_get_TargetRotation_mF75D9EAE3BEEB6BDDD8085473B22C8A98F50FD68 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// if (AnimatingRotation)
		bool L_0;
		L_0 = Interpolator_get_AnimatingRotation_m7201936CBDD7BD6ACB01678115235B193C28BF92_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return targetRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_targetRotation_16();
		return L_1;
	}

IL_000f:
	{
		// return transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion HoloToolkit.Unity.Interpolator::get_TargetLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Interpolator_get_TargetLocalRotation_m47E6C7D899FC52E30A5609551CC83BCF738E5EE3 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// if (AnimatingLocalRotation)
		bool L_0;
		L_0 = Interpolator_get_AnimatingLocalRotation_m339D88A11EF303C2FEF3FC7D57392C2247CF5C70_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return targetLocalRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_targetLocalRotation_18();
		return L_1;
	}

IL_000f:
	{
		// return transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 HoloToolkit.Unity.Interpolator::get_TargetLocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Interpolator_get_TargetLocalScale_mA435EAB66DA550E87BF7468383BF9451E58B05B7 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// if (AnimatingLocalScale)
		bool L_0;
		L_0 = Interpolator_get_AnimatingLocalScale_mCC228EEE443EA8A49FD326CF166BA62466824690_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return targetLocalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_targetLocalScale_20();
		return L_1;
	}

IL_000f:
	{
		// return transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void HoloToolkit.Unity.Interpolator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpolator__ctor_m388BF47AF9F4C0A42978B483F58E4EF8F81662B1 (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseUnscaledTime = true;
		__this->set_UseUnscaledTime_4((bool)1);
		// public float PositionPerSecond = 30.0f;
		__this->set_PositionPerSecond_6((30.0f));
		// public float RotationDegreesPerSecond = 720.0f;
		__this->set_RotationDegreesPerSecond_7((720.0f));
		// public float ScalePerSecond = 5.0f;
		__this->set_ScalePerSecond_9((5.0f));
		// public float SmoothPositionLerpRatio = 0.5f;
		__this->set_SmoothPositionLerpRatio_11((0.5f));
		// public float SmoothRotationLerpRatio = 0.5f;
		__this->set_SmoothRotationLerpRatio_12((0.5f));
		// public float SmoothScaleLerpRatio = 0.5f;
		__this->set_SmoothScaleLerpRatio_13((0.5f));
		// private Vector3 oldPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_oldPosition_25(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HoloToolkit.Unity.SimpleTagalong::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTagalong_Start_mD110391CF168157D7B9A596E6662C0A9692DA069 (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInterpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9_mC1841B5FA1FDD34451676C86E14A3DB014E78DFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tagalongCollider = GetComponent<BoxCollider>();
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_0;
		L_0 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		__this->set_tagalongCollider_9(L_0);
		// interpolator = gameObject.GetComponent<Interpolator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_2;
		L_2 = GameObject_GetComponent_TisInterpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9_mC1841B5FA1FDD34451676C86E14A3DB014E78DFC(L_1, /*hidden argument*/GameObject_GetComponent_TisInterpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9_mC1841B5FA1FDD34451676C86E14A3DB014E78DFC_RuntimeMethod_var);
		__this->set_interpolator_10(L_2);
		// interpolator.SmoothLerpToTarget = SmoothMotion;
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_3 = __this->get_interpolator_10();
		bool L_4 = __this->get_SmoothMotion_7();
		NullCheck(L_3);
		L_3->set_SmoothLerpToTarget_10(L_4);
		// interpolator.SmoothPositionLerpRatio = SmoothingFactor;
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_5 = __this->get_interpolator_10();
		float L_6 = __this->get_SmoothingFactor_8();
		NullCheck(L_5);
		L_5->set_SmoothPositionLerpRatio_11(L_6);
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.SimpleTagalong::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTagalong_Update_m1AFEE64B5F908011173AF460E466AD9F278869F9 (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, const RuntimeMethod* method)
{
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Camera mainCamera = CameraCache.Main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		V_0 = L_0;
		// frustumPlanes = GeometryUtility.CalculateFrustumPlanes(mainCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = V_0;
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_2;
		L_2 = GeometryUtility_CalculateFrustumPlanes_mB4DD05307602B87B5279CD3D9B4EED69D4429663(L_1, /*hidden argument*/NULL);
		__this->set_frustumPlanes_11(L_2);
		// if (CalculateTagalongTargetPosition(transform.position, out tagalongTargetPosition))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * >::Invoke(6 /* System.Boolean HoloToolkit.Unity.SimpleTagalong::CalculateTagalongTargetPosition(UnityEngine.Vector3,UnityEngine.Vector3&) */, __this, L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1));
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// interpolator.PositionPerSecond = PositionUpdateSpeed;
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_6 = __this->get_interpolator_10();
		float L_7 = __this->get_PositionUpdateSpeed_6();
		NullCheck(L_6);
		L_6->set_PositionPerSecond_6(L_7);
		// interpolator.SetTargetPosition(tagalongTargetPosition);
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_8 = __this->get_interpolator_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		NullCheck(L_8);
		Interpolator_SetTargetPosition_m0B337E11828E5772B1F94C4B95E4A51840A67EA6(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// else if (!interpolator.Running && EnforceDistance)
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_10 = __this->get_interpolator_10();
		NullCheck(L_10);
		bool L_11;
		L_11 = Interpolator_get_Running_m66F6F94D33D4BBA1AA6D19CA2BC784732A72CC61(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_009f;
		}
	}
	{
		bool L_12 = __this->get_EnforceDistance_5();
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// Ray ray = new Ray(mainCamera.transform.position, transform.position - mainCamera.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = V_0;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = V_0;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_20, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_15, L_21, /*hidden argument*/NULL);
		// transform.position = ray.GetPoint(TagalongDistance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_23 = __this->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_24, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Boolean HoloToolkit.Unity.SimpleTagalong::CalculateTagalongTargetPosition(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleTagalong_CalculateTagalongTargetPosition_m221BE5079FC9D662126479D5CB2E5B44A81F77EE (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___toPosition1, const RuntimeMethod* method)
{
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// bool needsToMove = !GeometryUtility.TestPlanesAABB(frustumPlanes, tagalongCollider.bounds);
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_0 = __this->get_frustumPlanes_11();
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_1 = __this->get_tagalongCollider_9();
		NullCheck(L_1);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2;
		L_2 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = GeometryUtility_TestPlanesAABB_mC37D104FA9ACBC6A959A7CCD6C1EAD3A7A450491(L_0, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// Transform cameraTransform = CameraCache.Main.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (!needsToMove)
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// toPosition = fromPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = ___toPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___fromPosition0;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7 = L_8;
		// return false;
		return (bool)0;
	}

IL_0031:
	{
		// toPosition = cameraTransform.position + cameraTransform.forward * TagalongDistance;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = ___toPosition1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_1;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_1;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_15, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9 = L_16;
		// Ray ray = new Ray(toPosition, Vector3.zero);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = ___toPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_18, L_19, /*hidden argument*/NULL);
		// Plane plane = new Plane();
		il2cpp_codegen_initobj((&V_3), sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 ));
		// float distanceOffset = 0f;
		V_4 = (0.0f);
		// bool moveRight = frustumPlanes[frustumLeft].GetDistanceToPoint(fromPosition) < 0;
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_20 = __this->get_frustumPlanes_11();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___fromPosition0;
		float L_22;
		L_22 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_21, /*hidden argument*/NULL);
		// bool moveLeft = frustumPlanes[frustumRight].GetDistanceToPoint(fromPosition) < 0;
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_23 = __this->get_frustumPlanes_11();
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___fromPosition0;
		float L_25;
		L_25 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), L_24, /*hidden argument*/NULL);
		V_5 = (bool)((((float)L_25) < ((float)(0.0f)))? 1 : 0);
		// if (moveRight)
		int32_t L_26 = ((((float)L_22) < ((float)(0.0f)))? 1 : 0);
		G_B3_0 = L_26;
		if (!L_26)
		{
			G_B4_0 = L_26;
			goto IL_00cc;
		}
	}
	{
		// plane = frustumPlanes[frustumLeft];
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_27 = __this->get_frustumPlanes_11();
		NullCheck(L_27);
		int32_t L_28 = 0;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_3 = L_29;
		// ray.direction = -cameraTransform.right;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = V_1;
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_31, /*hidden argument*/NULL);
		Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_32, /*hidden argument*/NULL);
		// }
		G_B6_0 = G_B3_0;
		goto IL_00ea;
	}

IL_00cc:
	{
		// else if (moveLeft)
		bool L_33 = V_5;
		G_B5_0 = G_B4_0;
		if (!L_33)
		{
			G_B6_0 = G_B4_0;
			goto IL_00ea;
		}
	}
	{
		// plane = frustumPlanes[frustumRight];
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_34 = __this->get_frustumPlanes_11();
		NullCheck(L_34);
		int32_t L_35 = 1;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_3 = L_36;
		// ray.direction = cameraTransform.right;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = V_1;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_37, /*hidden argument*/NULL);
		Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_38, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_00ea:
	{
		// if (moveRight || moveLeft)
		bool L_39 = V_5;
		if (!((int32_t)((int32_t)G_B6_0|(int32_t)L_39)))
		{
			goto IL_010e;
		}
	}
	{
		// plane.Raycast(ray, out distanceOffset);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_40 = V_2;
		bool L_41;
		L_41 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_3), L_40, (float*)(&V_4), /*hidden argument*/NULL);
		// toPosition.x = ray.GetPoint(distanceOffset).x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = ___toPosition1;
		float L_43 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_x_2();
		L_42->set_x_2(L_45);
	}

IL_010e:
	{
		// bool moveDown = frustumPlanes[frustumTop].GetDistanceToPoint(fromPosition) < 0;
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_46 = __this->get_frustumPlanes_11();
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = ___fromPosition0;
		float L_48;
		L_48 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), L_47, /*hidden argument*/NULL);
		V_6 = (bool)((((float)L_48) < ((float)(0.0f)))? 1 : 0);
		// bool moveUp = frustumPlanes[frustumBottom].GetDistanceToPoint(fromPosition) < 0;
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_49 = __this->get_frustumPlanes_11();
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = ___fromPosition0;
		float L_51;
		L_51 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), L_50, /*hidden argument*/NULL);
		V_7 = (bool)((((float)L_51) < ((float)(0.0f)))? 1 : 0);
		// if (moveDown)
		bool L_52 = V_6;
		if (!L_52)
		{
			goto IL_0164;
		}
	}
	{
		// plane = frustumPlanes[frustumTop];
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_53 = __this->get_frustumPlanes_11();
		NullCheck(L_53);
		int32_t L_54 = 3;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_3 = L_55;
		// ray.direction = cameraTransform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = V_1;
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_56, /*hidden argument*/NULL);
		Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_57, /*hidden argument*/NULL);
		// }
		goto IL_0187;
	}

IL_0164:
	{
		// else if (moveUp)
		bool L_58 = V_7;
		if (!L_58)
		{
			goto IL_0187;
		}
	}
	{
		// plane = frustumPlanes[frustumBottom];
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_59 = __this->get_frustumPlanes_11();
		NullCheck(L_59);
		int32_t L_60 = 2;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_3 = L_61;
		// ray.direction = -cameraTransform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62 = V_1;
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_63, /*hidden argument*/NULL);
		Ray_set_direction_mDA9E058A81EA8D21BCD222A4729F66071FDDAFE3((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_64, /*hidden argument*/NULL);
	}

IL_0187:
	{
		// if (moveUp || moveDown)
		bool L_65 = V_7;
		bool L_66 = V_6;
		if (!((int32_t)((int32_t)L_65|(int32_t)L_66)))
		{
			goto IL_01ad;
		}
	}
	{
		// plane.Raycast(ray, out distanceOffset);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_67 = V_2;
		bool L_68;
		L_68 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_3), L_67, (float*)(&V_4), /*hidden argument*/NULL);
		// toPosition.y = ray.GetPoint(distanceOffset).y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_69 = ___toPosition1;
		float L_70 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_y_3();
		L_69->set_y_3(L_72);
	}

IL_01ad:
	{
		// ray = new Ray(cameraTransform.position, toPosition - cameraTransform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = V_1;
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_75 = ___toPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77 = V_1;
		NullCheck(L_77);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_77, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_76, L_78, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_74, L_79, /*hidden argument*/NULL);
		// toPosition = ray.GetPoint(TagalongDistance);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_80 = ___toPosition1;
		float L_81 = __this->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_2), L_81, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_80 = L_82;
		// return needsToMove;
		bool L_83 = V_0;
		return L_83;
	}
}
// System.Void HoloToolkit.Unity.SimpleTagalong::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTagalong__ctor_mC344395CA376A23C69E2548A0AD5EBC1C34AD421 (SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C * __this, const RuntimeMethod* method)
{
	{
		// public float TagalongDistance = 2.0f;
		__this->set_TagalongDistance_4((2.0f));
		// public bool EnforceDistance = true;
		__this->set_EnforceDistance_5((bool)1);
		// public float PositionUpdateSpeed = 9.8f;
		__this->set_PositionUpdateSpeed_6((9.80000019f));
		// public bool SmoothMotion = true;
		__this->set_SmoothMotion_7((bool)1);
		// public float SmoothingFactor = 0.75f;
		__this->set_SmoothingFactor_8((0.75f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spin_Start_m77BA65EAB8866686BAAE0580B4847A4AABEA44E2 (Spin_tFE879423FB67400CA1124220E3FFAF49D3D1FF7D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Spin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spin_Update_m1AF863B89596B4D1B577F75A146B53F93F21CF33 (Spin_tFE879423FB67400CA1124220E3FFAF49D3D1FF7D * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0f, 30f * Time.deltaTime, 0f, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_0, (0.0f), ((float)il2cpp_codegen_multiply((float)(30.0f), (float)L_1)), (0.0f), 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spin__ctor_m667803D9577B4DEB57559AFC0F6F0F38D55D4D21 (Spin_tFE879423FB67400CA1124220E3FFAF49D3D1FF7D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HoloToolkit.Unity.Tagalong::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tagalong_Start_mBEC0FC64FAC9C26FC13977A38D4F0F0732F7C1DF (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4_mC34892FDEDE54E6E3165591FC014BB41234A254A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		SimpleTagalong_Start_mD110391CF168157D7B9A596E6662C0A9692DA069(__this, /*hidden argument*/NULL);
		// defaultTagalongDistance = TagalongDistance;
		float L_0 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_TagalongDistance_4();
		__this->set_defaultTagalongDistance_25(L_0);
		// if (CameraCache.Main.nearClipPlane > MinimumTagalongDistance)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_MinimumTagalongDistance_22();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_003a;
		}
	}
	{
		// MinimumTagalongDistance = CameraCache.Main.nearClipPlane * 1.1f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_4, /*hidden argument*/NULL);
		__this->set_MinimumTagalongDistance_22(((float)il2cpp_codegen_multiply((float)L_5, (float)(1.10000002f))));
	}

IL_003a:
	{
		// EnforceDistance = false;
		((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->set_EnforceDistance_5((bool)0);
		// if (MaintainFixedSize)
		bool L_6 = __this->get_MaintainFixedSize_23();
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// gameObject.AddComponent<FixedAngularSize>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		FixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4 * L_8;
		L_8 = GameObject_AddComponent_TisFixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4_mC34892FDEDE54E6E3165591FC014BB41234A254A(L_7, /*hidden argument*/GameObject_AddComponent_TisFixedAngularSize_t3EA4E587FE61929441884B17C204B311A670EAB4_mC34892FDEDE54E6E3165591FC014BB41234A254A_RuntimeMethod_var);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void HoloToolkit.Unity.Tagalong::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tagalong_Update_m883BB1DFDB965A7D5833F332AFB5DD8524C10D1B (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.Update();
		SimpleTagalong_Update_m1AFEE64B5F908011173AF460E466AD9F278869F9(__this, /*hidden argument*/NULL);
		// if (!interpolator.AnimatingPosition)
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_0 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_interpolator_10();
		NullCheck(L_0);
		bool L_1;
		L_1 = Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_006f;
		}
	}
	{
		// if (AdjustTagalongDistance(CameraCache.Main.transform.position, out newPosition))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Tagalong_AdjustTagalongDistance_m25DE534C629FC6DA5B4DB483551F2BB77E6F70C3(__this, L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		// interpolator.PositionPerSecond = DepthUpdateSpeed;
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_6 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_interpolator_10();
		float L_7 = __this->get_DepthUpdateSpeed_24();
		NullCheck(L_6);
		L_6->set_PositionPerSecond_6(L_7);
		// interpolator.SetTargetPosition(newPosition);
		Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * L_8 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_interpolator_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		NullCheck(L_8);
		Interpolator_SetTargetPosition_m0B337E11828E5772B1F94C4B95E4A51840A67EA6(L_8, L_9, /*hidden argument*/NULL);
		// TagalongDistance = Mathf.Min(defaultTagalongDistance, Vector3.Distance(CameraCache.Main.transform.position, newPosition));
		float L_10 = __this->get_defaultTagalongDistance_25();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11;
		L_11 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15;
		L_15 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_13, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_10, L_15, /*hidden argument*/NULL);
		((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->set_TagalongDistance_4(L_16);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Boolean HoloToolkit.Unity.Tagalong::CalculateTagalongTargetPosition(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tagalong_CalculateTagalongTargetPosition_mD9A2A6F6221EAF8134BF083A64812B103A06F489 (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___toPosition1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_19;
	memset((&V_19), 0, sizeof(V_19));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_23;
	memset((&V_23), 0, sizeof(V_23));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		// bool needsToMoveX = false;
		V_0 = (bool)0;
		// bool needsToMoveY = false;
		V_1 = (bool)0;
		// toPosition = fromPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___toPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___fromPosition0;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0 = L_1;
		// Transform cameraTransform = CameraCache.Main.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// Vector3 cameraPosition = cameraTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_2;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// Bounds colliderBounds = tagalongCollider.bounds;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_6 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_6);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_7;
		L_7 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// Vector3 newToPosition = tagalongCollider.bounds.center;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_8 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_8);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_9;
		L_9 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_8, /*hidden argument*/NULL);
		V_20 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_20), /*hidden argument*/NULL);
		V_5 = L_10;
		// Ray rayTemp = new Ray(cameraPosition, colliderBounds.center - cameraPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), L_11, L_14, /*hidden argument*/NULL);
		// colliderBounds.center = rayTemp.GetPoint(TagalongDistance);
		float L_15 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), L_15, /*hidden argument*/NULL);
		Bounds_set_center_mAC54A53224BBEFE37A4387DCBD0EF3774751221E((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), L_16, /*hidden argument*/NULL);
		// float width = tagalongCollider.size.x * transform.lossyScale.x;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_17 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		V_7 = ((float)il2cpp_codegen_multiply((float)L_19, (float)L_22));
		// float height = tagalongCollider.size.y * transform.lossyScale.y;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_23 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		V_8 = ((float)il2cpp_codegen_multiply((float)L_25, (float)L_28));
		// Plane verticalCenterPlane = new Plane(cameraTransform.right, cameraPosition + cameraTransform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_2;
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = V_2;
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_33, /*hidden argument*/NULL);
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_9), L_30, L_34, /*hidden argument*/NULL);
		// bool tagalongIsRightOfCenter = verticalCenterPlane.GetDistanceToPoint(colliderBounds.center) > 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		float L_36;
		L_36 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_9), L_35, /*hidden argument*/NULL);
		V_10 = (bool)((((float)L_36) > ((float)(0.0f)))? 1 : 0);
		// Vector3 horizontalTowardCenter = tagalongIsRightOfCenter ? -transform.right : transform.right;
		bool L_37 = V_10;
		if (L_37)
		{
			goto IL_00f0;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_38, /*hidden argument*/NULL);
		G_B3_0 = L_39;
		goto IL_0100;
	}

IL_00f0:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_41, /*hidden argument*/NULL);
		G_B3_0 = L_42;
	}

IL_0100:
	{
		V_11 = G_B3_0;
		// Plane verticalFrustumPlane = tagalongIsRightOfCenter ? frustumPlanes[frustumRight] : frustumPlanes[frustumLeft];
		bool L_43 = V_10;
		if (L_43)
		{
			goto IL_0114;
		}
	}
	{
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_44 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_frustumPlanes_11();
		NullCheck(L_44);
		int32_t L_45 = 0;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		G_B6_0 = L_46;
		goto IL_0120;
	}

IL_0114:
	{
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_47 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_frustumPlanes_11();
		NullCheck(L_47);
		int32_t L_48 = 1;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		G_B6_0 = L_49;
	}

IL_0120:
	{
		V_12 = G_B6_0;
		// Vector3 centermostHorizontalEdge = colliderBounds.center + (horizontalTowardCenter * (width / 2f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_11;
		float L_52 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_51, ((float)((float)L_52/(float)(2.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_53, /*hidden argument*/NULL);
		V_13 = L_54;
		// Vector3 targetPoint = centermostHorizontalEdge + (-horizontalTowardCenter * (width * MinimumHorizontalOverlap));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_56, /*hidden argument*/NULL);
		float L_58 = V_7;
		float L_59 = __this->get_MinimumHorizontalOverlap_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_57, ((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_55, L_60, /*hidden argument*/NULL);
		V_14 = L_61;
		// needsToMoveX = verticalFrustumPlane.GetDistanceToPoint(targetPoint) < 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = V_14;
		float L_63;
		L_63 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_12), L_62, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_63) < ((float)(0.0f)))? 1 : 0);
		// if (needsToMoveX || DebugDrawLines)
		bool L_64 = V_0;
		if (L_64)
		{
			goto IL_0179;
		}
	}
	{
		bool L_65 = __this->get_DebugDrawLines_26();
		if (!L_65)
		{
			goto IL_01b2;
		}
	}

IL_0179:
	{
		// Vector3 newCalculatedTargetPosition =
		//     CalculateTargetPosition(true, centermostHorizontalEdge, horizontalTowardCenter, width,
		//     colliderBounds.center, verticalFrustumPlane, tagalongIsRightOfCenter);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_11;
		float L_68 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_70 = V_12;
		bool L_71 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Tagalong_CalculateTargetPosition_mCBC20CD385370474672B54CED9FE60ABBF70485C(__this, (bool)1, L_66, L_67, L_68, L_69, L_70, L_71, /*hidden argument*/NULL);
		V_21 = L_72;
		// if (needsToMoveX)
		bool L_73 = V_0;
		if (!L_73)
		{
			goto IL_01b2;
		}
	}
	{
		// newToPosition.x = newCalculatedTargetPosition.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_21;
		float L_75 = L_74.get_x_2();
		(&V_5)->set_x_2(L_75);
		// newToPosition.z = newCalculatedTargetPosition.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_21;
		float L_77 = L_76.get_z_4();
		(&V_5)->set_z_4(L_77);
	}

IL_01b2:
	{
		// colliderBounds = tagalongCollider.bounds;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_78 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_78);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_79;
		L_79 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		// rayTemp = new Ray(cameraPosition, colliderBounds.center - cameraPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_81, L_82, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), L_80, L_83, /*hidden argument*/NULL);
		// colliderBounds.center = rayTemp.GetPoint(TagalongDistance);
		float L_84 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), L_84, /*hidden argument*/NULL);
		Bounds_set_center_mAC54A53224BBEFE37A4387DCBD0EF3774751221E((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), L_85, /*hidden argument*/NULL);
		// Plane horizontalCenterPlane = new Plane(cameraTransform.up, cameraPosition + cameraTransform.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86 = V_2;
		NullCheck(L_86);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_86, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89 = V_2;
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_88, L_90, /*hidden argument*/NULL);
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_15), L_87, L_91, /*hidden argument*/NULL);
		// bool tagalongIsAboveCenter = horizontalCenterPlane.GetDistanceToPoint(colliderBounds.center) > 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		float L_93;
		L_93 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_15), L_92, /*hidden argument*/NULL);
		V_16 = (bool)((((float)L_93) > ((float)(0.0f)))? 1 : 0);
		// Vector3 verticalTowardCenter = tagalongIsAboveCenter ? -transform.up : transform.up;
		bool L_94 = V_16;
		if (L_94)
		{
			goto IL_0229;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_95, /*hidden argument*/NULL);
		G_B13_0 = L_96;
		goto IL_0239;
	}

IL_0229:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_97, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_98, /*hidden argument*/NULL);
		G_B13_0 = L_99;
	}

IL_0239:
	{
		V_17 = G_B13_0;
		// Plane horizontalFrustumPlane = tagalongIsAboveCenter ? frustumPlanes[frustumTop] : frustumPlanes[frustumBottom];
		bool L_100 = V_16;
		if (L_100)
		{
			goto IL_024d;
		}
	}
	{
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_101 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_frustumPlanes_11();
		NullCheck(L_101);
		int32_t L_102 = 2;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		G_B16_0 = L_103;
		goto IL_0259;
	}

IL_024d:
	{
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_104 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_frustumPlanes_11();
		NullCheck(L_104);
		int32_t L_105 = 3;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		G_B16_0 = L_106;
	}

IL_0259:
	{
		V_18 = G_B16_0;
		// Vector3 centermostVerticalEdge = colliderBounds.center + (verticalTowardCenter * (height / 2f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = V_17;
		float L_109 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_108, ((float)((float)L_109/(float)(2.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		L_111 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_107, L_110, /*hidden argument*/NULL);
		V_19 = L_111;
		// targetPoint = centermostVerticalEdge + (-verticalTowardCenter * (height * MinimumVerticalOverlap));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112 = V_19;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		L_114 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_113, /*hidden argument*/NULL);
		float L_115 = V_8;
		float L_116 = __this->get_MinimumVerticalOverlap_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_114, ((float)il2cpp_codegen_multiply((float)L_115, (float)L_116)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_112, L_117, /*hidden argument*/NULL);
		V_14 = L_118;
		// needsToMoveY = horizontalFrustumPlane.GetDistanceToPoint(targetPoint) < 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119 = V_14;
		float L_120;
		L_120 = Plane_GetDistanceToPoint_m62658D4C42857EE815BFA05CE232A8B034442DC8((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_18), L_119, /*hidden argument*/NULL);
		V_1 = (bool)((((float)L_120) < ((float)(0.0f)))? 1 : 0);
		// if (needsToMoveY || DebugDrawLines)
		bool L_121 = V_1;
		if (L_121)
		{
			goto IL_02b2;
		}
	}
	{
		bool L_122 = __this->get_DebugDrawLines_26();
		if (!L_122)
		{
			goto IL_02ee;
		}
	}

IL_02b2:
	{
		// Vector3 newCalculatedTargetPosition =
		//     CalculateTargetPosition(false, centermostVerticalEdge, verticalTowardCenter, height,
		//     colliderBounds.center, horizontalFrustumPlane, !tagalongIsAboveCenter);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = V_19;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = V_17;
		float L_125 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126;
		L_126 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_127 = V_18;
		bool L_128 = V_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		L_129 = Tagalong_CalculateTargetPosition_mCBC20CD385370474672B54CED9FE60ABBF70485C(__this, (bool)0, L_123, L_124, L_125, L_126, L_127, (bool)((((int32_t)L_128) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_22 = L_129;
		// if (needsToMoveY)
		bool L_130 = V_1;
		if (!L_130)
		{
			goto IL_02ee;
		}
	}
	{
		// newToPosition.y = newCalculatedTargetPosition.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131 = V_22;
		float L_132 = L_131.get_y_3();
		(&V_5)->set_y_3(L_132);
		// newToPosition.z = newCalculatedTargetPosition.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = V_22;
		float L_134 = L_133.get_z_4();
		(&V_5)->set_z_4(L_134);
	}

IL_02ee:
	{
		// if (needsToMoveX || needsToMoveY)
		bool L_135 = V_0;
		bool L_136 = V_1;
		if (!((int32_t)((int32_t)L_135|(int32_t)L_136)))
		{
			goto IL_0316;
		}
	}
	{
		// Ray ray = new Ray(cameraPosition, newToPosition - cameraPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_138, L_139, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_23), L_137, L_140, /*hidden argument*/NULL);
		// toPosition = ray.GetPoint(TagalongDistance);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_141 = ___toPosition1;
		float L_142 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143;
		L_143 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_23), L_142, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_141 = L_143;
	}

IL_0316:
	{
		// return needsToMoveX || needsToMoveY;
		bool L_144 = V_0;
		bool L_145 = V_1;
		return (bool)((int32_t)((int32_t)L_144|(int32_t)L_145));
	}
}
// UnityEngine.Vector3 HoloToolkit.Unity.Tagalong::CalculateTargetPosition(System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.Plane,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Tagalong_CalculateTargetPosition_mCBC20CD385370474672B54CED9FE60ABBF70485C (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, bool ___isHorizontal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centermostEdge1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vectorTowardCenter2, float ___width3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center4, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___frustumPlane5, bool ___invertAngle6, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	float G_B3_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * G_B5_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * G_B8_2 = NULL;
	float G_B7_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * G_B7_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	float G_B9_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * G_B9_3 = NULL;
	{
		// Transform cameraTransform = CameraCache.Main.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = CameraCache_get_Main_m620E8E7552448CD482C4ED03B0F6AC6B154FD9B4(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 cameraPosition = cameraTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = V_0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// float desiredOverlap = isHorizontal
		//     ? Mathf.Max(MinimumHorizontalOverlap, TargetHorizontalOverlap)
		//     : Mathf.Max(MinimumVerticalOverlap, TargetVerticalOverlap);
		bool L_4 = ___isHorizontal0;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		float L_5 = __this->get_MinimumVerticalOverlap_18();
		float L_6 = __this->get_TargetVerticalOverlap_19();
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0039;
	}

IL_0028:
	{
		float L_8 = __this->get_MinimumHorizontalOverlap_16();
		float L_9 = __this->get_TargetHorizontalOverlap_17();
		float L_10;
		L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_8, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0039:
	{
		V_2 = G_B3_0;
		// Vector3 targetPoint = centermostEdge + (-vectorTowardCenter * (width * desiredOverlap));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___centermostEdge1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___vectorTowardCenter2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_12, /*hidden argument*/NULL);
		float L_14 = ___width3;
		float L_15 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// Vector3 centeredPoint = cameraPosition + cameraTransform.forward * TagalongDistance;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_0;
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_19, /*hidden argument*/NULL);
		float L_21 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_TagalongDistance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		// Ray rayTemp = new Ray(centeredPoint, (invertAngle ? 1 : -1) * (isHorizontal ? cameraTransform.right : cameraTransform.up));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_4;
		bool L_25 = ___invertAngle6;
		G_B4_0 = L_24;
		G_B4_1 = (&V_5);
		if (L_25)
		{
			G_B5_0 = L_24;
			G_B5_1 = (&V_5);
			goto IL_0074;
		}
	}
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0075;
	}

IL_0074:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0075:
	{
		bool L_26 = ___isHorizontal0;
		G_B7_0 = ((float)((float)G_B6_0));
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		if (L_26)
		{
			G_B8_0 = ((float)((float)G_B6_0));
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			goto IL_0081;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_0;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_27, /*hidden argument*/NULL);
		G_B9_0 = L_28;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0087;
	}

IL_0081:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_0;
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_29, /*hidden argument*/NULL);
		G_B9_0 = L_30;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0087:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)G_B9_3, G_B9_2, L_31, /*hidden argument*/NULL);
		// float distToFrustum = 0.0f;
		V_6 = (0.0f);
		// frustumPlane.Raycast(rayTemp, out distToFrustum);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_32 = V_5;
		bool L_33;
		L_33 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&___frustumPlane5), L_32, (float*)(&V_6), /*hidden argument*/NULL);
		// Vector3 pointOnFrustum = rayTemp.GetPoint(distToFrustum);
		float L_34 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), L_34, /*hidden argument*/NULL);
		V_7 = L_35;
		// rayTemp = new Ray(cameraPosition, pointOnFrustum - cameraPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_37, L_38, /*hidden argument*/NULL);
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), L_36, L_39, /*hidden argument*/NULL);
		// float distanceToTarget = Vector3.Distance(cameraPosition, targetPoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_3;
		float L_42;
		L_42 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_40, L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		// Vector3 recalculatedPointOnFrustum = rayTemp.GetPoint(distanceToTarget);
		float L_43 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), L_43, /*hidden argument*/NULL);
		// Quaternion rotQuat = Quaternion.FromToRotation(targetPoint - cameraPosition, center - cameraPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_45, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = ___center4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_48, L_49, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_47, L_50, /*hidden argument*/NULL);
		V_9 = L_51;
		// Vector3 vectorToRotate = recalculatedPointOnFrustum - cameraPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_44, L_52, /*hidden argument*/NULL);
		V_10 = L_53;
		// Vector3 newCalculatedTargetPosition = cameraPosition + rotQuat * vectorToRotate;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_55, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_54, L_57, /*hidden argument*/NULL);
		// return newCalculatedTargetPosition;
		return L_58;
	}
}
// System.Boolean HoloToolkit.Unity.Tagalong::AdjustTagalongDistance(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tagalong_AdjustTagalongDistance_m25DE534C629FC6DA5B4DB483551F2BB77E6F70C3 (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___newPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mCA9C318B1CE1645D00B57BE962799944A01603B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* V_6 = NULL;
	int32_t V_7 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		// bool needsUpdating = false;
		V_0 = (bool)0;
		// float width = tagalongCollider.size.x * transform.lossyScale.x;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_0 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_5));
		// float height = tagalongCollider.size.y * transform.lossyScale.y;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_6 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_tagalongCollider_9();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_11));
		// Vector3 lowerLeftCorner = transform.position - (transform.right * (width / 2)) - (transform.up * (height / 2));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_14, /*hidden argument*/NULL);
		float L_16 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, ((float)((float)L_16/(float)(2.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_19, /*hidden argument*/NULL);
		float L_21 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, ((float)((float)L_21/(float)(2.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_18, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		// RaycastHit closestHit = new RaycastHit();
		il2cpp_codegen_initobj((&V_4), sizeof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 ));
		// float closestHitDistance = float.PositiveInfinity;
		V_5 = (std::numeric_limits<float>::infinity());
		// for (int x = 0; x < HorizontalRayCount; x++)
		V_7 = 0;
		goto IL_01d7;
	}

IL_00a1:
	{
		// Vector3 xCoord = lowerLeftCorner + transform.right * (x * width / (HorizontalRayCount - 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_7;
		float L_28 = V_1;
		int32_t L_29 = __this->get_HorizontalRayCount_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_27)), (float)L_28))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)))))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_30, /*hidden argument*/NULL);
		V_8 = L_31;
		// for (int y = 0; y < VerticalRayCount; y++)
		V_9 = 0;
		goto IL_01c4;
	}

IL_00d0:
	{
		// Vector3 targetCoord = xCoord + transform.up * (y * height / (VerticalRayCount - 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_33, /*hidden argument*/NULL);
		int32_t L_35 = V_9;
		float L_36 = V_2;
		int32_t L_37 = __this->get_VerticalRayCount_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_35)), (float)L_36))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)))))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_38, /*hidden argument*/NULL);
		V_10 = L_39;
		// allHits = Physics.RaycastAll(cameraPosition, targetCoord - cameraPosition, defaultTagalongDistance * 1.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = ___cameraPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = ___cameraPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_41, L_42, /*hidden argument*/NULL);
		float L_44 = __this->get_defaultTagalongDistance_25();
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_45;
		L_45 = Physics_RaycastAll_m2BBC8D2731B38EE0B704A5C6A09D0F8BBA074A4D(L_40, L_43, ((float)il2cpp_codegen_multiply((float)L_44, (float)(1.5f))), /*hidden argument*/NULL);
		V_6 = L_45;
		// for (int h = 0; h < allHits.Length; h++)
		V_11 = 0;
		goto IL_01b3;
	}

IL_011c:
	{
		// if (allHits[h].distance >= MinimumTagalongDistance &&
		//     allHits[h].distance < closestHitDistance &&
		//     !allHits[h].transform.IsChildOf(transform))
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_46 = V_6;
		int32_t L_47 = V_11;
		NullCheck(L_46);
		float L_48;
		L_48 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), /*hidden argument*/NULL);
		float L_49 = __this->get_MinimumTagalongDistance_22();
		if ((!(((float)L_48) >= ((float)L_49))))
		{
			goto IL_01ad;
		}
	}
	{
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_50 = V_6;
		int32_t L_51 = V_11;
		NullCheck(L_50);
		float L_52;
		L_52 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), /*hidden argument*/NULL);
		float L_53 = V_5;
		if ((!(((float)L_52) < ((float)L_53))))
		{
			goto IL_01ad;
		}
	}
	{
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_54 = V_6;
		int32_t L_55 = V_11;
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		bool L_58;
		L_58 = Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC(L_56, L_57, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_01ad;
		}
	}
	{
		// closestHit = allHits[h];
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_59 = V_6;
		int32_t L_60 = V_11;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = L_62;
		// closestHitDistance = closestHit.distance;
		float L_63;
		L_63 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_63;
		// if (DebugPointLight != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_64 = __this->get_DebugPointLight_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_64, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_01ad;
		}
	}
	{
		// Light clonedLight = Instantiate(DebugPointLight, closestHit.point, Quaternion.identity) as Light;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_66 = __this->get_DebugPointLight_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_68;
		L_68 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_69;
		L_69 = Object_Instantiate_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mCA9C318B1CE1645D00B57BE962799944A01603B1(L_66, L_67, L_68, /*hidden argument*/Object_Instantiate_TisLight_tA2F349FE839781469A0344CF6039B51512394275_mCA9C318B1CE1645D00B57BE962799944A01603B1_RuntimeMethod_var);
		// clonedLight.color = Color.red;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_70 = L_69;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71;
		L_71 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_70);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_70, L_71, /*hidden argument*/NULL);
		// Destroy(clonedLight, 1.0f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_70, (1.0f), /*hidden argument*/NULL);
	}

IL_01ad:
	{
		// for (int h = 0; h < allHits.Length; h++)
		int32_t L_72 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_01b3:
	{
		// for (int h = 0; h < allHits.Length; h++)
		int32_t L_73 = V_11;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_74 = V_6;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))))))
		{
			goto IL_011c;
		}
	}
	{
		// for (int y = 0; y < VerticalRayCount; y++)
		int32_t L_75 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01c4:
	{
		// for (int y = 0; y < VerticalRayCount; y++)
		int32_t L_76 = V_9;
		int32_t L_77 = __this->get_VerticalRayCount_21();
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00d0;
		}
	}
	{
		// for (int x = 0; x < HorizontalRayCount; x++)
		int32_t L_78 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_01d7:
	{
		// for (int x = 0; x < HorizontalRayCount; x++)
		int32_t L_79 = V_7;
		int32_t L_80 = __this->get_HorizontalRayCount_20();
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_00a1;
		}
	}
	{
		// needsUpdating = closestHitDistance < float.PositiveInfinity;
		float L_81 = V_5;
		V_0 = (bool)((((float)L_81) < ((float)(std::numeric_limits<float>::infinity())))? 1 : 0);
		// if (needsUpdating)
		bool L_82 = V_0;
		if (!L_82)
		{
			goto IL_023d;
		}
	}
	{
		// Vector3 cameraToTransformPosition = transform.position - cameraPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_83);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_83, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = ___cameraPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_84, L_85, /*hidden argument*/NULL);
		// Vector3 cameraToClosestHitPoint = closestHit.point - cameraPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = ___cameraPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_87, L_88, /*hidden argument*/NULL);
		V_12 = L_89;
		// float angleBetween = Vector3.Angle(cameraToTransformPosition, cameraToClosestHitPoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = V_12;
		float L_91;
		L_91 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_86, L_90, /*hidden argument*/NULL);
		V_13 = L_91;
		// closestHitDistance = closestHitDistance * Mathf.Cos(angleBetween * Mathf.Deg2Rad);
		float L_92 = V_5;
		float L_93 = V_13;
		float L_94;
		L_94 = cosf(((float)il2cpp_codegen_multiply((float)L_93, (float)(0.0174532924f))));
		V_5 = ((float)il2cpp_codegen_multiply((float)L_92, (float)L_94));
		// closestHitDistance = Mathf.Max(closestHitDistance, MinimumTagalongDistance);
		float L_95 = V_5;
		float L_96 = __this->get_MinimumTagalongDistance_22();
		float L_97;
		L_97 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_95, L_96, /*hidden argument*/NULL);
		V_5 = L_97;
		// }
		goto IL_0255;
	}

IL_023d:
	{
		// else if (TagalongDistance != defaultTagalongDistance)
		float L_98 = ((SimpleTagalong_tFBBA74D08A5664F3B5F3173D2E2C71CEF5508F9C *)__this)->get_TagalongDistance_4();
		float L_99 = __this->get_defaultTagalongDistance_25();
		if ((((float)L_98) == ((float)L_99)))
		{
			goto IL_0255;
		}
	}
	{
		// needsUpdating = true;
		V_0 = (bool)1;
		// closestHitDistance = defaultTagalongDistance;
		float L_100 = __this->get_defaultTagalongDistance_25();
		V_5 = L_100;
	}

IL_0255:
	{
		// newPosition = cameraPosition + (transform.position - cameraPosition).normalized * closestHitDistance;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_101 = ___newPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = ___cameraPosition0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103;
		L_103 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_103);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_103, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = ___cameraPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		L_106 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_104, L_105, /*hidden argument*/NULL);
		V_14 = L_106;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_14), /*hidden argument*/NULL);
		float L_108 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_107, L_108, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_102, L_109, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_101 = L_110;
		// return needsUpdating;
		bool L_111 = V_0;
		return L_111;
	}
}
// System.Void HoloToolkit.Unity.Tagalong::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tagalong__ctor_m245759F2DFDA3AA84EE9610AF4166E534F7288A7 (Tagalong_t2049C203BED1E44116ED2BD6C6C714AD20267EF9 * __this, const RuntimeMethod* method)
{
	{
		// public float MinimumHorizontalOverlap = 0.1f;
		__this->set_MinimumHorizontalOverlap_16((0.100000001f));
		// public float TargetHorizontalOverlap = 1.0f;
		__this->set_TargetHorizontalOverlap_17((1.0f));
		// public float MinimumVerticalOverlap = 0.1f;
		__this->set_MinimumVerticalOverlap_18((0.100000001f));
		// public float TargetVerticalOverlap = 1.0f;
		__this->set_TargetVerticalOverlap_19((1.0f));
		// public int HorizontalRayCount = 3;
		__this->set_HorizontalRayCount_20(3);
		// public int VerticalRayCount = 3;
		__this->set_VerticalRayCount_21(3);
		// public float MinimumTagalongDistance = 1.0f;
		__this->set_MinimumTagalongDistance_22((1.0f));
		// public bool MaintainFixedSize = true;
		__this->set_MaintainFixedSize_23((bool)1);
		// public float DepthUpdateSpeed = 4.0f;
		__this->set_DepthUpdateSpeed_24((4.0f));
		SimpleTagalong__ctor_mC344395CA376A23C69E2548A0AD5EBC1C34AD421(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Toggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Start_m1500C3FDEF38FE253DBD2121D8F7B25AF64B3ED9 (Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B * __this, const RuntimeMethod* method)
{
	{
		// BookInf.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_BookInf_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// BookRev.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_BookRev_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Toggle::Clicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Clicked_mF90C1C9E77FE4ED8CF7DEB74EEF37D25CAC815F5 (Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BA396E8C654CF606C76D7829FC69A8BC02CAA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0EC08DBB3113E5727BF13850E83DA70E203441B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BookInf.active == true && BookRev.active == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_BookInf_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_BookRev_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		// BookInf.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_BookInf_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// BookRev.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_BookRev_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("Toggled");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral56BA396E8C654CF606C76D7829FC69A8BC02CAA7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003d:
	{
		// else if(BookRev.active == true && BookInf.active== false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_BookRev_5();
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_BookInf_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0079;
		}
	}
	{
		// BookInf.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_BookInf_4();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// BookRev.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_BookRev_5();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("Toggled Back");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC0EC08DBB3113E5727BF13850E83DA70E203441B, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Toggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle__ctor_mED95E7DF8013AFA7FF08C12A438DACE227BB5F67 (Toggle_t597D3915B6B7F9F6265FFAC9C4041B149E85086B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingPosition_m57E7ABC9036E6EDCB9F762CFE1E3EF617A1A793B_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingPosition { get; private set; }
		bool L_0 = __this->get_U3CAnimatingPositionU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingRotation_m7201936CBDD7BD6ACB01678115235B193C28BF92_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingRotation { get; private set; }
		bool L_0 = __this->get_U3CAnimatingRotationU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingLocalRotation_m339D88A11EF303C2FEF3FC7D57392C2247CF5C70_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalRotation { get; private set; }
		bool L_0 = __this->get_U3CAnimatingLocalRotationU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interpolator_get_AnimatingLocalScale_mCC228EEE443EA8A49FD326CF166BA62466824690_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalScale { get; private set; }
		bool L_0 = __this->get_U3CAnimatingLocalScaleU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingPosition_m4A723496EB756442FD5E6E410BC2B5AD0FA36DFB_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingPosition { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingPositionU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingRotation_m6EDE5A4B35E1C3551D12F39B5857FFAEB5521687_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingRotation { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingRotationU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingLocalRotation_m6DC1C0CF5B9CC197CC1D0823EC9590C1A70B155C_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalRotation { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingLocalRotationU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_AnimatingLocalScale_m70BF55824BE1B623A46989FB792786B9A09AA9C4_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AnimatingLocalScale { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAnimatingLocalScaleU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interpolator_set_PositionVelocity_m64822951DFFC2200006FF5B33F051EDE4B593B04_inline (Interpolator_tE40D73AA1A84B003812A8165959456CACA1CC9E9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionVelocity { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPositionVelocityU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
