﻿#include "il2cpp-config.h"

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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D;
// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_tF581E1AF38FD2BC33FF9DECC71D08B6F45B320B0;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_t207BEEF0281AF5B99F9850E7EDB304064147733D;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_t0B547BD8087D86740ADECDB4F97E6257F256E507;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tD3073D7E7C2E845330176703A98D578DB549418B;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCFBF28688CCD3ADC2D0EE8F88464DF1EA65FE30F;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA8F67CB2C442808E11CAA63ABD09B8423BEE3920;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IMixedRealitySpatialAwarenessObservationHandler_1_tE62F1A8F944467A9BAC5FC2B86B1937CE282C276;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t8C2A5DB695A1339779E8025F8C5F7F322F9F2743;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t913CA62791C677E680A9933DDE114D6753A14C60;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter
struct PlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E;
// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>[]
struct EntryU5BU5D_t2AD452958E8A29E9859E3DE489E889BEE1780AF8;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct EntryU5BU5D_t4CA1634889EA0E085E3BD536AA9DA3DADE4EB1B5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct KeyCollection_t24B92B33B75679E722FB09CD0A56AF26459CEFF2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyCollection_t65FB16C4C4F8C97798308BBBC2A8145FE2510547;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct ValueCollection_tDEDE1A2B4747203E319F2684BD90B1EA31711012;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct ValueCollection_t2AAAF20D1A26458D70B9264BF7143C1D2E178118;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t31E85CDA2550B5F9A119FA262255E83265909C80;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_t2C16C07D6C575244CCEB3AAD06291E9AB98CE0D6;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct IReadOnlyDictionary_2_t93BEF8F9B904607E95A90A0EF45DDEAB639183D1;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_tC3D91654A35918130A615DBA399768C040F08109;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6;
// UnityEngine.XR.MeshId[]
struct MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t93BEF8F9B904607E95A90A0EF45DDEAB639183D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedControllerType_tE62C951555004930200D98F488E2C5615F23BF21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_tB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral18414638F2486DC587D4197BFFA93F7B78162975;
IL2CPP_EXTERN_C String_t* _stringLiteral25B27DC2BCC839C8D8BCE6F17F582B5C0F269F61;
IL2CPP_EXTERN_C String_t* _stringLiteral41DC700A22938E6F7AF528592CEA8E869DAC445E;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC6D5DE1EC5A7F2861EB2A043D91BCD0D44006B;
IL2CPP_EXTERN_C String_t* _stringLiteral74CA03DB3497544DC2BE05DE99A6DF69FA715DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral77361B86D8FA2FDF99E13C61E6868332120A7BE3;
IL2CPP_EXTERN_C String_t* _stringLiteral86835A3DB5A72D8ADC8C34240A36AC24FDF843EF;
IL2CPP_EXTERN_C String_t* _stringLiteralB245477D5A96A319ED32B95AF7B4A7C31F5D863C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC3A1EB621F66A9977AE9420F50B054C58D000C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC251F0EE7E738E9803C51B96A0610EF66A88F3;
IL2CPP_EXTERN_C String_t* _stringLiteralC577C6AB98A4D18F7740145FB4769D96C375A2B2;
IL2CPP_EXTERN_C String_t* _stringLiteralE03A434D5919B3E40AF5E05EDA1CA699757216A3;
IL2CPP_EXTERN_C String_t* _stringLiteralE6DF6A9402802F80FD6F2C704FB41798F67CF2E9;
IL2CPP_EXTERN_C String_t* _stringLiteralED4EE0E0F4814BF1D025F3E41C608E4288258FD9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD59EE74A1BD72C2A0FB6F83CA703C7D099CE606;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mDB73949F7D25A8FE0BEB7A77A320B3295C234C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m901CD9B3EA4AAABA8AA0C0975611C9F39B07AA76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9EB400448ACA6F1CF95D59D7724BC75DE763F798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5E00C8D5627E30F47C3639DDF31442EECE7D96ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6823A35864C9D6F82A9B044338BBF8DB7DF30C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m230DA28D3D94858B033A669473740775C42909FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8B8A4F5D229083B356E8BE33778C8479D70D5E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m535D27570B39228E35C81D2AD7E7E6FD503690AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m88EB6E769D9AE85E4AC5635966E9C25671877607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m64C4402999BB0496B505350C8C05EDBA622ADB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9363E9C5EC2538F64EF09D750C9255ECFA7AE820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630_m3C5D6A6E02BB7400EC7B3B025DD946F8AE22856A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__16_0_m7C1667B3C4DF3DDBD5A182A3CDA1EE391FBC1083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tE62F1A8F944467A9BAC5FC2B86B1937CE282C276_m6B1F9423866D3742B9985F5C6481EE48F0497780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1_Initialize_mC86BBDD88FD073636FEF70C79D3053AFC580E129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKCameraSettings_Disable_mFFC3950269F2CAA05C70561BA5D2156441314857_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKCameraSettings_Enable_m02038E0D5E537C9E3ED48AEF1240F2DEA3E04D53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKCameraSettings_get_IsOpaque_m19797AB37970174B90473AF7E92DBE102DF62542_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateButtonData_mA7E332C82474EE6484E571E8B4AD80021A677541_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateController_mB272A041BA289A65A61EAAEA5E3387DBD8E9A169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateDualAxisData_m1F3E75047CAFF011D399F9A5E98E948F9B2E45FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdatePoseData_mCA63D4BE6511D7C4130A601A4684888CA4A1F6D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController_UpdateSingleAxisData_mB7502F6974FCB7C018B819E4C3642948D0FC740E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKController__ctor_mE1E8C63B2BFC9F6A7B79C9B72D3B741C8A3EE46B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_CheckCapability_m817ECAB6108AE10EE397C80124CB7E9D8B3AF2FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_ClearObservations_m4E31645DEF36D92C592A128AB6A305DEFE4A0DA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m778766C437B1C6BA666403924A082F514657D65A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_CreateObserver_m9162D56C3EF892B509DC88FA7D3AA526471D9C1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_LookupTriangleDensity_m90EB18AD023DF589E57B2AE8D4055B734DCAAAFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m8F29FB995D8CDCBFCF93723412ABB0AD304D925A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m638AE6335937AD9138CDFA263907FB9FB91DCC41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m07CF42144AE43B1B9FD3F48187AA598DDCA2A30A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_RequestMesh_m545DE4717840BF1786A951C07BF74911201744A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Resume_mD41A34A163A02972539C54570866C9EEBBBF1061_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_Suspend_m89ECA6E9AC51AA2FF1B2968B774D30A3DACC369A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_UpdateMeshes_m015B39D2E2D747A81448DEE65969A3F03E331FF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver_UpdateObserver_m47A876405AFC549622D82665575A6F0ED3CE9B8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericXRSDKSpatialMeshObserver__ctor_m8B9974F8DF7555E0E28E4A5CE95F5ECCB8B5125B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603ADMicrosoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayspaceAdapter_Update_m6519C572B486C548958F6824479CB38A37862487_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem_GetBoundaryGeometry_mC1C06F6F0F781BF559E809DE756D03F4D35D3B93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem_SetTrackingSpace_m52DAB6D53F74CC815FF236A666051D4465497804_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKBoundarySystem__ctor_m24D820B177654F0A64DE190F80781B5C09F6CFD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_GetControllerType_m56F87E2B9EB2698D4E96D2CD062912D48F5303EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_GetCurrentControllerType_m6B451BFDCA3F014255AA752846D470739453900D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_GetOrAddController_m1E39340C0DCB23E89B78B3D2FD92C5A3ECBECFB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_RemoveController_m61222C5265BEC8EFF943D6581DFD3518C96BB985_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager_Update_m5E5DE38CADBB46005354001206F26B2CF2FC7540_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager__cctor_mDE3D8C6D2A35F2A1BB1E1981DBD37E2901BCD481_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKDeviceManager__ctor_m65DA4E734F55BCE2E9B4DDAE147D3C5819968596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DDMicrosoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98Microsoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6DMicrosoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D;
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7FED49B7F737E80BFC39B74E938B49F1F6CBCCC2 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct  BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers
struct  XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71  : public RuntimeObject
{
public:

public:
};

struct XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields
{
public:
	// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::inputSubsystem
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * ___inputSubsystem_0;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::meshSubsystem
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * ___meshSubsystem_1;
	// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::displaySubsystem
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * ___displaySubsystem_2;

public:
	inline static int32_t get_offset_of_inputSubsystem_0() { return static_cast<int32_t>(offsetof(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields, ___inputSubsystem_0)); }
	inline XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * get_inputSubsystem_0() const { return ___inputSubsystem_0; }
	inline XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 ** get_address_of_inputSubsystem_0() { return &___inputSubsystem_0; }
	inline void set_inputSubsystem_0(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * value)
	{
		___inputSubsystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSubsystem_0), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_1() { return static_cast<int32_t>(offsetof(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields, ___meshSubsystem_1)); }
	inline XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * get_meshSubsystem_1() const { return ___meshSubsystem_1; }
	inline XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 ** get_address_of_meshSubsystem_1() { return &___meshSubsystem_1; }
	inline void set_meshSubsystem_1(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * value)
	{
		___meshSubsystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_1), (void*)value);
	}

	inline static int32_t get_offset_of_displaySubsystem_2() { return static_cast<int32_t>(offsetof(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields, ___displaySubsystem_2)); }
	inline XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * get_displaySubsystem_2() const { return ___displaySubsystem_2; }
	inline XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 ** get_address_of_displaySubsystem_2() { return &___displaySubsystem_2; }
	inline void set_displaySubsystem_2(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * value)
	{
		___displaySubsystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displaySubsystem_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2AD452958E8A29E9859E3DE489E889BEE1780AF8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t24B92B33B75679E722FB09CD0A56AF26459CEFF2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDEDE1A2B4747203E319F2684BD90B1EA31711012 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___entries_1)); }
	inline EntryU5BU5D_t2AD452958E8A29E9859E3DE489E889BEE1780AF8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2AD452958E8A29E9859E3DE489E889BEE1780AF8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2AD452958E8A29E9859E3DE489E889BEE1780AF8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___keys_7)); }
	inline KeyCollection_t24B92B33B75679E722FB09CD0A56AF26459CEFF2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t24B92B33B75679E722FB09CD0A56AF26459CEFF2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t24B92B33B75679E722FB09CD0A56AF26459CEFF2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ___values_8)); }
	inline ValueCollection_tDEDE1A2B4747203E319F2684BD90B1EA31711012 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDEDE1A2B4747203E319F2684BD90B1EA31711012 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDEDE1A2B4747203E319F2684BD90B1EA31711012 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct  Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4CA1634889EA0E085E3BD536AA9DA3DADE4EB1B5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t65FB16C4C4F8C97798308BBBC2A8145FE2510547 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2AAAF20D1A26458D70B9264BF7143C1D2E178118 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___entries_1)); }
	inline EntryU5BU5D_t4CA1634889EA0E085E3BD536AA9DA3DADE4EB1B5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4CA1634889EA0E085E3BD536AA9DA3DADE4EB1B5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4CA1634889EA0E085E3BD536AA9DA3DADE4EB1B5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___keys_7)); }
	inline KeyCollection_t65FB16C4C4F8C97798308BBBC2A8145FE2510547 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t65FB16C4C4F8C97798308BBBC2A8145FE2510547 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t65FB16C4C4F8C97798308BBBC2A8145FE2510547 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ___values_8)); }
	inline ValueCollection_t2AAAF20D1A26458D70B9264BF7143C1D2E178118 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2AAAF20D1A26458D70B9264BF7143C1D2E178118 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2AAAF20D1A26458D70B9264BF7143C1D2E178118 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct  List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____items_1)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct  List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____items_1)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__items_1() const { return ____items_1; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields, ____emptyArray_5)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____items_1)); }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* get__items_1() const { return ____items_1; }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_StaticFields, ____emptyArray_5)); }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRMeshSubsystemDescriptorU5BU5D_tB072EA08AC5E954F17EBF3E1B725263FF6812016* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct  Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____array_0)); }
	inline MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908* get__array_0() const { return ____array_0; }
	inline MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MeshIdU5BU5D_t2BCF27B1CF77B9FC2E824A218FA5808184DFE908* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct  BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct  BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct  BaseDataProvider_1_tC2425AC9540D56CB4B53DC129AAAFCB91E277E11  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC2425AC9540D56CB4B53DC129AAAFCB91E277E11, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC2425AC9540D56CB4B53DC129AAAFCB91E277E11, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct  BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___postponedActions_8)); }
	inline List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___postponedObjectActions_9)); }
	inline List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct  SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0  : public BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_5), (void*)value);
	}
};

struct SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::requiredMeshComponents
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___requiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_requiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0_StaticFields, ___requiredMeshComponents_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_requiredMeshComponents_4() const { return ___requiredMeshComponents_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_requiredMeshComponents_4() { return &___requiredMeshComponents_4; }
	inline void set_requiredMeshComponents_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___requiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requiredMeshComponents_4), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.InputDevice
struct  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct  InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct  InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct  InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct  InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct  InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct  InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct  InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct  InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.MeshId
struct  MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___s_InvalidId_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC  : public BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct  BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520  : public BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct  InputSourceType_tDF5BA986FD7CF0838DEE9E807A1121178624EE48 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tDF5BA986FD7CF0838DEE9E807A1121178624EE48, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct  SupportedControllerType_tE62C951555004930200D98F488E2C5615F23BF21 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_tE62C951555004930200D98F488E2C5615F23BF21, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_t640F18A34CA2280C67DB228DF2EA211F52BE36F5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t640F18A34CA2280C67DB228DF2EA211F52BE36F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct  SpatialAwarenessMeshDisplayOptions_tB1BE51AB494E6C577A3513EA4A984616FA3FB9BD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tB1BE51AB494E6C577A3513EA4A984616FA3FB9BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct  SpatialAwarenessMeshLevelOfDetail_tE196768F52801362597D605A8932664AA560205E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_tE196768F52801362597D605A8932664AA560205E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t85B76025C4C4B2D8E9300642318F97EAC977CA6C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t85B76025C4C4B2D8E9300642318F97EAC977CA6C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct  ExperienceScale_tBFDB4EA8C13FA7CA24F0A1576B8ED013C38F28D8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_tBFDB4EA8C13FA7CA24F0A1576B8ED013C38F28D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_tB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_tB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.InputDevice>
struct  Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___list_0)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_list_0() const { return ___list_0; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209, ___current_3)); }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  get_current_3() const { return ___current_3; }
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		___current_3 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType
struct  DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose
struct  TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType
struct  TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType
struct  UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct  CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct  InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshChangeState
struct  MeshChangeState_t42D58EE953790EC6E1609C4BEB5FC75C680D84E0 
{
public:
	// System.Int32 UnityEngine.XR.MeshChangeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshChangeState_t42D58EE953790EC6E1609C4BEB5FC75C680D84E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshGenerationStatus
struct  MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73 
{
public:
	// System.Int32 UnityEngine.XR.MeshGenerationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshVertexAttributes
struct  MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58 
{
public:
	// System.Int32 UnityEngine.XR.MeshVertexAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct  TrackingOriginModeFlags_t99F07374B49B56D7A4AB1AB8EB456ACDD00B0A52 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t99F07374B49B56D7A4AB1AB8EB456ACDD00B0A52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem
struct  BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150  : public BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC
{
public:
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryEventData
	BoundaryEventData_tF581E1AF38FD2BC33FF9DECC71D08B6F45B320B0 * ___boundaryEventData_13;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_14;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_16;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boundaryVisualizationParent_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE * ___boundaryVisualizationProfile_22;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showFloor
	bool ___showFloor_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showPlayArea
	bool ___showPlayArea_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showTrackedArea
	bool ___showTrackedArea_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::showCeiling
	bool ___showCeiling_32;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_34;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_t207BEEF0281AF5B99F9850E7EDB304064147733D* ___U3CBoundsU3Ek__BackingField_35;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___U3CFloorHeightU3Ek__BackingField_36;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::RectangularBounds
	InscribedRectangle_t0B547BD8087D86740ADECDB4F97E6257F256E507 * ___RectangularBounds_37;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentFloorObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentFloorObject_38;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentPlayAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentPlayAreaObject_39;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentTrackedAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentTrackedAreaObject_40;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentBoundaryWallObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentBoundaryWallObject_41;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::currentCeilingObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentCeilingObject_42;

public:
	inline static int32_t get_offset_of_boundaryEventData_13() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___boundaryEventData_13)); }
	inline BoundaryEventData_tF581E1AF38FD2BC33FF9DECC71D08B6F45B320B0 * get_boundaryEventData_13() const { return ___boundaryEventData_13; }
	inline BoundaryEventData_tF581E1AF38FD2BC33FF9DECC71D08B6F45B320B0 ** get_address_of_boundaryEventData_13() { return &___boundaryEventData_13; }
	inline void set_boundaryEventData_13(BoundaryEventData_tF581E1AF38FD2BC33FF9DECC71D08B6F45B320B0 * value)
	{
		___boundaryEventData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CNameU3Ek__BackingField_14)); }
	inline String_t* get_U3CNameU3Ek__BackingField_14() const { return ___U3CNameU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_14() { return &___U3CNameU3Ek__BackingField_14; }
	inline void set_U3CNameU3Ek__BackingField_14(String_t* value)
	{
		___U3CNameU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CSourceIdU3Ek__BackingField_16)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_16() const { return ___U3CSourceIdU3Ek__BackingField_16; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_16() { return &___U3CSourceIdU3Ek__BackingField_16; }
	inline void set_U3CSourceIdU3Ek__BackingField_16(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CSourceNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_17() const { return ___U3CSourceNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_17() { return &___U3CSourceNameU3Ek__BackingField_17; }
	inline void set_U3CSourceNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_20() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___boundaryVisualizationParent_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boundaryVisualizationParent_20() const { return ___boundaryVisualizationParent_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boundaryVisualizationParent_20() { return &___boundaryVisualizationParent_20; }
	inline void set_boundaryVisualizationParent_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boundaryVisualizationParent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_21() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___ignoreRaycastLayerValue_21)); }
	inline int32_t get_ignoreRaycastLayerValue_21() const { return ___ignoreRaycastLayerValue_21; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_21() { return &___ignoreRaycastLayerValue_21; }
	inline void set_ignoreRaycastLayerValue_21(int32_t value)
	{
		___ignoreRaycastLayerValue_21 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_22() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___boundaryVisualizationProfile_22)); }
	inline MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE * get_boundaryVisualizationProfile_22() const { return ___boundaryVisualizationProfile_22; }
	inline MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE ** get_address_of_boundaryVisualizationProfile_22() { return &___boundaryVisualizationProfile_22; }
	inline void set_boundaryVisualizationProfile_22(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE * value)
	{
		___boundaryVisualizationProfile_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CScaleU3Ek__BackingField_23)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_23() const { return ___U3CScaleU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_23() { return &___U3CScaleU3Ek__BackingField_23; }
	inline void set_U3CScaleU3Ek__BackingField_23(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CBoundaryHeightU3Ek__BackingField_24)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_24() const { return ___U3CBoundaryHeightU3Ek__BackingField_24; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_24() { return &___U3CBoundaryHeightU3Ek__BackingField_24; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_24(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_showFloor_25() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___showFloor_25)); }
	inline bool get_showFloor_25() const { return ___showFloor_25; }
	inline bool* get_address_of_showFloor_25() { return &___showFloor_25; }
	inline void set_showFloor_25(bool value)
	{
		___showFloor_25 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_26() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___showPlayArea_26)); }
	inline bool get_showPlayArea_26() const { return ___showPlayArea_26; }
	inline bool* get_address_of_showPlayArea_26() { return &___showPlayArea_26; }
	inline void set_showPlayArea_26(bool value)
	{
		___showPlayArea_26 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_27() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___floorPhysicsLayer_27)); }
	inline int32_t get_floorPhysicsLayer_27() const { return ___floorPhysicsLayer_27; }
	inline int32_t* get_address_of_floorPhysicsLayer_27() { return &___floorPhysicsLayer_27; }
	inline void set_floorPhysicsLayer_27(int32_t value)
	{
		___floorPhysicsLayer_27 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_28() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___showTrackedArea_28)); }
	inline bool get_showTrackedArea_28() const { return ___showTrackedArea_28; }
	inline bool* get_address_of_showTrackedArea_28() { return &___showTrackedArea_28; }
	inline void set_showTrackedArea_28(bool value)
	{
		___showTrackedArea_28 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_29() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___playAreaPhysicsLayer_29)); }
	inline int32_t get_playAreaPhysicsLayer_29() const { return ___playAreaPhysicsLayer_29; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_29() { return &___playAreaPhysicsLayer_29; }
	inline void set_playAreaPhysicsLayer_29(int32_t value)
	{
		___playAreaPhysicsLayer_29 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_30() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___showBoundaryWalls_30)); }
	inline bool get_showBoundaryWalls_30() const { return ___showBoundaryWalls_30; }
	inline bool* get_address_of_showBoundaryWalls_30() { return &___showBoundaryWalls_30; }
	inline void set_showBoundaryWalls_30(bool value)
	{
		___showBoundaryWalls_30 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_31() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___trackedAreaPhysicsLayer_31)); }
	inline int32_t get_trackedAreaPhysicsLayer_31() const { return ___trackedAreaPhysicsLayer_31; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_31() { return &___trackedAreaPhysicsLayer_31; }
	inline void set_trackedAreaPhysicsLayer_31(int32_t value)
	{
		___trackedAreaPhysicsLayer_31 = value;
	}

	inline static int32_t get_offset_of_showCeiling_32() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___showCeiling_32)); }
	inline bool get_showCeiling_32() const { return ___showCeiling_32; }
	inline bool* get_address_of_showCeiling_32() { return &___showCeiling_32; }
	inline void set_showCeiling_32(bool value)
	{
		___showCeiling_32 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_33() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___boundaryWallsPhysicsLayer_33)); }
	inline int32_t get_boundaryWallsPhysicsLayer_33() const { return ___boundaryWallsPhysicsLayer_33; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_33() { return &___boundaryWallsPhysicsLayer_33; }
	inline void set_boundaryWallsPhysicsLayer_33(int32_t value)
	{
		___boundaryWallsPhysicsLayer_33 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_34() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___ceilingPhysicsLayer_34)); }
	inline int32_t get_ceilingPhysicsLayer_34() const { return ___ceilingPhysicsLayer_34; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_34() { return &___ceilingPhysicsLayer_34; }
	inline void set_ceilingPhysicsLayer_34(int32_t value)
	{
		___ceilingPhysicsLayer_34 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CBoundsU3Ek__BackingField_35)); }
	inline EdgeU5BU5D_t207BEEF0281AF5B99F9850E7EDB304064147733D* get_U3CBoundsU3Ek__BackingField_35() const { return ___U3CBoundsU3Ek__BackingField_35; }
	inline EdgeU5BU5D_t207BEEF0281AF5B99F9850E7EDB304064147733D** get_address_of_U3CBoundsU3Ek__BackingField_35() { return &___U3CBoundsU3Ek__BackingField_35; }
	inline void set_U3CBoundsU3Ek__BackingField_35(EdgeU5BU5D_t207BEEF0281AF5B99F9850E7EDB304064147733D* value)
	{
		___U3CBoundsU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___U3CFloorHeightU3Ek__BackingField_36)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_U3CFloorHeightU3Ek__BackingField_36() const { return ___U3CFloorHeightU3Ek__BackingField_36; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_U3CFloorHeightU3Ek__BackingField_36() { return &___U3CFloorHeightU3Ek__BackingField_36; }
	inline void set_U3CFloorHeightU3Ek__BackingField_36(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___U3CFloorHeightU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_RectangularBounds_37() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___RectangularBounds_37)); }
	inline InscribedRectangle_t0B547BD8087D86740ADECDB4F97E6257F256E507 * get_RectangularBounds_37() const { return ___RectangularBounds_37; }
	inline InscribedRectangle_t0B547BD8087D86740ADECDB4F97E6257F256E507 ** get_address_of_RectangularBounds_37() { return &___RectangularBounds_37; }
	inline void set_RectangularBounds_37(InscribedRectangle_t0B547BD8087D86740ADECDB4F97E6257F256E507 * value)
	{
		___RectangularBounds_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectangularBounds_37), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_38() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___currentFloorObject_38)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentFloorObject_38() const { return ___currentFloorObject_38; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentFloorObject_38() { return &___currentFloorObject_38; }
	inline void set_currentFloorObject_38(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentFloorObject_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_38), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_39() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___currentPlayAreaObject_39)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentPlayAreaObject_39() const { return ___currentPlayAreaObject_39; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentPlayAreaObject_39() { return &___currentPlayAreaObject_39; }
	inline void set_currentPlayAreaObject_39(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentPlayAreaObject_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_39), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_40() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___currentTrackedAreaObject_40)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentTrackedAreaObject_40() const { return ___currentTrackedAreaObject_40; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentTrackedAreaObject_40() { return &___currentTrackedAreaObject_40; }
	inline void set_currentTrackedAreaObject_40(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentTrackedAreaObject_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_40), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_41() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___currentBoundaryWallObject_41)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentBoundaryWallObject_41() const { return ___currentBoundaryWallObject_41; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentBoundaryWallObject_41() { return &___currentBoundaryWallObject_41; }
	inline void set_currentBoundaryWallObject_41(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentBoundaryWallObject_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_41), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_42() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150, ___currentCeilingObject_42)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentCeilingObject_42() const { return ___currentCeilingObject_42; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentCeilingObject_42() { return &___currentCeilingObject_42; }
	inline void set_currentCeilingObject_42(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentCeilingObject_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_42), (void*)value);
	}
};

struct BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::OnVisualizationChanged
	EventFunction_1_tC3D91654A35918130A615DBA399768C040F08109 * ___OnVisualizationChanged_15;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_15() { return static_cast<int32_t>(offsetof(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150_StaticFields, ___OnVisualizationChanged_15)); }
	inline EventFunction_1_tC3D91654A35918130A615DBA399768C040F08109 * get_OnVisualizationChanged_15() const { return ___OnVisualizationChanged_15; }
	inline EventFunction_1_tC3D91654A35918130A615DBA399768C040F08109 ** get_address_of_OnVisualizationChanged_15() { return &___OnVisualizationChanged_15; }
	inline void set_OnVisualizationChanged_15(EventFunction_1_tC3D91654A35918130A615DBA399768C040F08109 * value)
	{
		___OnVisualizationChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct  BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B  : public BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_7;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager_PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F* ___pointerConfigurations_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC * ___activePointersToConfig_10;

public:
	inline static int32_t get_offset_of_enablePointerCache_7() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B, ___enablePointerCache_7)); }
	inline bool get_enablePointerCache_7() const { return ___enablePointerCache_7; }
	inline bool* get_address_of_enablePointerCache_7() { return &___enablePointerCache_7; }
	inline void set_enablePointerCache_7(bool value)
	{
		___enablePointerCache_7 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_8() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B, ___pointerConfigurations_8)); }
	inline PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F* get_pointerConfigurations_8() const { return ___pointerConfigurations_8; }
	inline PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F** get_address_of_pointerConfigurations_8() { return &___pointerConfigurations_8; }
	inline void set_pointerConfigurations_8(PointerConfigU5BU5D_tEF8D01403D71D3E705766141604A6AFBE3DBFE3F* value)
	{
		___pointerConfigurations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_8), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B, ___activePointersToConfig_10)); }
	inline Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC * get_activePointersToConfig_10() const { return ___activePointersToConfig_10; }
	inline Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC ** get_address_of_activePointersToConfig_10() { return &___activePointersToConfig_10; }
	inline void set_activePointersToConfig_10(Dictionary_2_tF2E1873ACFEC47880263EA85F4BE17D1832A1BAC * value)
	{
		___activePointersToConfig_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_10), (void*)value);
	}
};

struct BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestPointersPerfMarker_9;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_9() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_StaticFields, ___RequestPointersPerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestPointersPerfMarker_9() const { return ___RequestPointersPerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestPointersPerfMarker_9() { return &___RequestPointersPerfMarker_9; }
	inline void set_RequestPointersPerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestPointersPerfMarker_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct  BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6  : public BaseDataProvider_1_tC2425AC9540D56CB4B53DC129AAAFCB91E277E11
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SpatialAwarenessSystem>k__BackingField
	RuntimeObject* ___U3CSpatialAwarenessSystemU3Ek__BackingField_7;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_8;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_9;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CObserverRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObserverOriginU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_16;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObservationExtentsU3Ek__BackingField_17;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CSpatialAwarenessSystemU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CSpatialAwarenessSystemU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CSpatialAwarenessSystemU3Ek__BackingField_7() const { return ___U3CSpatialAwarenessSystemU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CSpatialAwarenessSystemU3Ek__BackingField_7() { return &___U3CSpatialAwarenessSystemU3Ek__BackingField_7; }
	inline void set_U3CSpatialAwarenessSystemU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CSpatialAwarenessSystemU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialAwarenessSystemU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CSourceIdU3Ek__BackingField_8)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_8() const { return ___U3CSourceIdU3Ek__BackingField_8; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_8() { return &___U3CSourceIdU3Ek__BackingField_8; }
	inline void set_U3CSourceIdU3Ek__BackingField_8(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CSourceNameU3Ek__BackingField_9)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_9() const { return ___U3CSourceNameU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_9() { return &___U3CSourceNameU3Ek__BackingField_9; }
	inline void set_U3CSourceNameU3Ek__BackingField_9(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CStartupBehaviorU3Ek__BackingField_10)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_10() const { return ___U3CStartupBehaviorU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_10() { return &___U3CStartupBehaviorU3Ek__BackingField_10; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_10(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CDefaultPhysicsLayerU3Ek__BackingField_11)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_11() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_11() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_11; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_11(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CIsRunningU3Ek__BackingField_12)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_12() const { return ___U3CIsRunningU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_12() { return &___U3CIsRunningU3Ek__BackingField_12; }
	inline void set_U3CIsRunningU3Ek__BackingField_12(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CIsStationaryObserverU3Ek__BackingField_13)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_13() const { return ___U3CIsStationaryObserverU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_13() { return &___U3CIsStationaryObserverU3Ek__BackingField_13; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_13(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CObserverRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CObserverRotationU3Ek__BackingField_14() const { return ___U3CObserverRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CObserverRotationU3Ek__BackingField_14() { return &___U3CObserverRotationU3Ek__BackingField_14; }
	inline void set_U3CObserverRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CObserverRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CObserverOriginU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObserverOriginU3Ek__BackingField_15() const { return ___U3CObserverOriginU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObserverOriginU3Ek__BackingField_15() { return &___U3CObserverOriginU3Ek__BackingField_15; }
	inline void set_U3CObserverOriginU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObserverOriginU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CObserverVolumeTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_16() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_16() { return &___U3CObserverVolumeTypeU3Ek__BackingField_16; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CObservationExtentsU3Ek__BackingField_17)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObservationExtentsU3Ek__BackingField_17() const { return ___U3CObservationExtentsU3Ek__BackingField_17; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObservationExtentsU3Ek__BackingField_17() { return &___U3CObservationExtentsU3Ek__BackingField_17; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_17(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6, ___U3CUpdateIntervalU3Ek__BackingField_18)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_18() const { return ___U3CUpdateIntervalU3Ek__BackingField_18; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_18() { return &___U3CUpdateIntervalU3Ek__BackingField_18; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_18(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tCB0675DB9E82AC42353A04D7938B2912B719FF64  : public GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tCB0675DB9E82AC42353A04D7938B2912B719FF64, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct  GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8  : public BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::trackedPoseDriver
	TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * ___trackedPoseDriver_8;

public:
	inline static int32_t get_offset_of_trackedPoseDriver_8() { return static_cast<int32_t>(offsetof(GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8, ___trackedPoseDriver_8)); }
	inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * get_trackedPoseDriver_8() const { return ___trackedPoseDriver_8; }
	inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A ** get_address_of_trackedPoseDriver_8() { return &___trackedPoseDriver_8; }
	inline void set_trackedPoseDriver_8(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * value)
	{
		___trackedPoseDriver_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedPoseDriver_8), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct  IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.MeshGenerationResult
struct  MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshU3Ek__BackingField_1)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CMeshU3Ek__BackingField_1() const { return ___U3CMeshU3Ek__BackingField_1; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CMeshU3Ek__BackingField_1() { return &___U3CMeshU3Ek__BackingField_1; }
	inline void set_U3CMeshU3Ek__BackingField_1(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshColliderU3Ek__BackingField_2)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CMeshColliderU3Ek__BackingField_2() const { return ___U3CMeshColliderU3Ek__BackingField_2; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CMeshColliderU3Ek__BackingField_2() { return &___U3CMeshColliderU3Ek__BackingField_2; }
	inline void set_U3CMeshColliderU3Ek__BackingField_2(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CMeshColliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CStatusU3Ek__BackingField_3)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_3() const { return ___U3CStatusU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_3() { return &___U3CStatusU3Ek__BackingField_3; }
	inline void set_U3CStatusU3Ek__BackingField_3(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CAttributesU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_4() const { return ___U3CAttributesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_4() { return &___U3CAttributesU3Ek__BackingField_4; }
	inline void set_U3CAttributesU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_pinvoke
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_com
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};

// UnityEngine.XR.MeshInfo
struct  MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChangeStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CChangeStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CChangeStateU3Ek__BackingField_1() const { return ___U3CChangeStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChangeStateU3Ek__BackingField_1() { return &___U3CChangeStateU3Ek__BackingField_1; }
	inline void set_U3CChangeStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CChangeStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPriorityHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CPriorityHintU3Ek__BackingField_2)); }
	inline int32_t get_U3CPriorityHintU3Ek__BackingField_2() const { return ___U3CPriorityHintU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPriorityHintU3Ek__BackingField_2() { return &___U3CPriorityHintU3Ek__BackingField_2; }
	inline void set_U3CPriorityHintU3Ek__BackingField_2(int32_t value)
	{
		___U3CPriorityHintU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputAction_4)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___poseData_17)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct  BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2  : public BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * ___meshEventData_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___observedObjectParent_20;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_24;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_25;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * ___meshes_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_29;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___occlusionMaterial_30;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___visibleMaterial_31;

public:
	inline static int32_t get_offset_of_meshEventData_19() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___meshEventData_19)); }
	inline MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * get_meshEventData_19() const { return ___meshEventData_19; }
	inline MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C ** get_address_of_meshEventData_19() { return &___meshEventData_19; }
	inline void set_meshEventData_19(MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * value)
	{
		___meshEventData_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_19), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_20() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___observedObjectParent_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_observedObjectParent_20() const { return ___observedObjectParent_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_observedObjectParent_20() { return &___observedObjectParent_20; }
	inline void set_observedObjectParent_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___observedObjectParent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_20), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___displayOption_24)); }
	inline int32_t get_displayOption_24() const { return ___displayOption_24; }
	inline int32_t* get_address_of_displayOption_24() { return &___displayOption_24; }
	inline void set_displayOption_24(int32_t value)
	{
		___displayOption_24 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___levelOfDetail_25)); }
	inline int32_t get_levelOfDetail_25() const { return ___levelOfDetail_25; }
	inline int32_t* get_address_of_levelOfDetail_25() { return &___levelOfDetail_25; }
	inline void set_levelOfDetail_25(int32_t value)
	{
		___levelOfDetail_25 = value;
	}

	inline static int32_t get_offset_of_meshes_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___meshes_26)); }
	inline Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * get_meshes_26() const { return ___meshes_26; }
	inline Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB ** get_address_of_meshes_26() { return &___meshes_26; }
	inline void set_meshes_26(Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * value)
	{
		___meshes_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_26), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___meshPhysicsLayer_27)); }
	inline int32_t get_meshPhysicsLayer_27() const { return ___meshPhysicsLayer_27; }
	inline int32_t* get_address_of_meshPhysicsLayer_27() { return &___meshPhysicsLayer_27; }
	inline void set_meshPhysicsLayer_27(int32_t value)
	{
		___meshPhysicsLayer_27 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___U3CRecalculateNormalsU3Ek__BackingField_28)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_28() const { return ___U3CRecalculateNormalsU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_28() { return &___U3CRecalculateNormalsU3Ek__BackingField_28; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_28(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_29)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_29() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_29() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_29; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_29(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___occlusionMaterial_30)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_occlusionMaterial_30() const { return ___occlusionMaterial_30; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_occlusionMaterial_30() { return &___occlusionMaterial_30; }
	inline void set_occlusionMaterial_30(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___occlusionMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_30), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2, ___visibleMaterial_31)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_visibleMaterial_31() const { return ___visibleMaterial_31; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_visibleMaterial_31() { return &___visibleMaterial_31; }
	inline void set_visibleMaterial_31(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___visibleMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_31), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * ___OnMeshAdded_21;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * ___OnMeshUpdated_22;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * ___OnMeshRemoved_23;

public:
	inline static int32_t get_offset_of_OnMeshAdded_21() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields, ___OnMeshAdded_21)); }
	inline EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * get_OnMeshAdded_21() const { return ___OnMeshAdded_21; }
	inline EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E ** get_address_of_OnMeshAdded_21() { return &___OnMeshAdded_21; }
	inline void set_OnMeshAdded_21(EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * value)
	{
		___OnMeshAdded_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdated_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields, ___OnMeshUpdated_22)); }
	inline EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * get_OnMeshUpdated_22() const { return ___OnMeshUpdated_22; }
	inline EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E ** get_address_of_OnMeshUpdated_22() { return &___OnMeshUpdated_22; }
	inline void set_OnMeshUpdated_22(EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * value)
	{
		___OnMeshUpdated_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemoved_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields, ___OnMeshRemoved_23)); }
	inline EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * get_OnMeshRemoved_23() const { return ___OnMeshRemoved_23; }
	inline EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E ** get_address_of_OnMeshRemoved_23() { return &___OnMeshRemoved_23; }
	inline void set_OnMeshRemoved_23(EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * value)
	{
		___OnMeshRemoved_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C  : public MixedRealitySpatialAwarenessEventData_tCB0675DB9E82AC42353A04D7938B2912B719FF64
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___U3CSpatialObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C, ___U3CSpatialObjectU3Ek__BackingField_5)); }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * get_U3CSpatialObjectU3Ek__BackingField_5() const { return ___U3CSpatialObjectU3Ek__BackingField_5; }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 ** get_address_of_U3CSpatialObjectU3Ek__BackingField_5() { return &___U3CSpatialObjectU3Ek__BackingField_5; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_5(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct  GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0  : public BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___CurrentControllerPose_14;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___LastControllerPose_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CurrentControllerPosition_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___CurrentControllerRotation_17;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0, ___CurrentControllerPose_14)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_CurrentControllerPose_14() const { return ___CurrentControllerPose_14; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_CurrentControllerPose_14() { return &___CurrentControllerPose_14; }
	inline void set_CurrentControllerPose_14(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___CurrentControllerPose_14 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0, ___LastControllerPose_15)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_LastControllerPose_15() const { return ___LastControllerPose_15; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_LastControllerPose_15() { return &___LastControllerPose_15; }
	inline void set_LastControllerPose_15(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___LastControllerPose_15 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0, ___CurrentControllerPosition_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CurrentControllerPosition_16() const { return ___CurrentControllerPosition_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CurrentControllerPosition_16() { return &___CurrentControllerPosition_16; }
	inline void set_CurrentControllerPosition_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CurrentControllerPosition_16 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0, ___CurrentControllerRotation_17)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_CurrentControllerRotation_17() const { return ___CurrentControllerRotation_17; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_CurrentControllerRotation_17() { return &___CurrentControllerRotation_17; }
	inline void set_CurrentControllerRotation_17(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___CurrentControllerRotation_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct  XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E  : public BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___lastInputDevices_13;

public:
	inline static int32_t get_offset_of_inputDevices_12() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E, ___inputDevices_12)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevices_12() const { return ___inputDevices_12; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevices_12() { return &___inputDevices_12; }
	inline void set_inputDevices_12(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_13() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E, ___lastInputDevices_13)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_lastInputDevices_13() const { return ___lastInputDevices_13; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_lastInputDevices_13() { return &___lastInputDevices_13; }
	inline void set_lastInputDevices_13(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___lastInputDevices_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_13), (void*)value);
	}
};

struct XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * ___ActiveControllers_11;

public:
	inline static int32_t get_offset_of_ActiveControllers_11() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields, ___ActiveControllers_11)); }
	inline Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * get_ActiveControllers_11() const { return ___ActiveControllers_11; }
	inline Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 ** get_address_of_ActiveControllers_11() { return &___ActiveControllers_11; }
	inline void set_ActiveControllers_11(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * value)
	{
		___ActiveControllers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_11), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem
struct  XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1  : public BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150
{
public:
	// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1, ___U3CNameU3Ek__BackingField_43)); }
	inline String_t* get_U3CNameU3Ek__BackingField_43() const { return ___U3CNameU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_43() { return &___U3CNameU3Ek__BackingField_43; }
	inline void set_U3CNameU3Ek__BackingField_43(String_t* value)
	{
		___U3CNameU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_43), (void*)value);
	}
};


// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct  Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.MeshInfo>
struct  Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___list_0)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_list_0() const { return ___list_0; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D, ___current_3)); }
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  get_current_3() const { return ___current_3; }
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct  EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct  XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0  : public IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1
{
public:

public:
};

struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields, ___displayFocusChanged_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystem
struct  XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7  : public IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___trackingOriginUpdated_2)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___boundaryChanged_3)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___m_DeviceIdsCache_4)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct  XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___floorMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___floorPhysicsLayer_8)); }
	inline int32_t get_floorPhysicsLayer_8() const { return ___floorPhysicsLayer_8; }
	inline int32_t* get_address_of_floorPhysicsLayer_8() { return &___floorPhysicsLayer_8; }
	inline void set_floorPhysicsLayer_8(int32_t value)
	{
		___floorPhysicsLayer_8 = value;
	}

	inline static int32_t get_offset_of_floorScale_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___floorScale_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_floorScale_9() const { return ___floorScale_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_floorScale_9() { return &___floorScale_9; }
	inline void set_floorScale_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___floorScale_9 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___showPlayArea_10)); }
	inline bool get_showPlayArea_10() const { return ___showPlayArea_10; }
	inline bool* get_address_of_showPlayArea_10() { return &___showPlayArea_10; }
	inline void set_showPlayArea_10(bool value)
	{
		___showPlayArea_10 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___playAreaMaterial_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_playAreaMaterial_11() const { return ___playAreaMaterial_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_playAreaMaterial_11() { return &___playAreaMaterial_11; }
	inline void set_playAreaMaterial_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___playAreaMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___playAreaPhysicsLayer_12)); }
	inline int32_t get_playAreaPhysicsLayer_12() const { return ___playAreaPhysicsLayer_12; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_12() { return &___playAreaPhysicsLayer_12; }
	inline void set_playAreaPhysicsLayer_12(int32_t value)
	{
		___playAreaPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___showTrackedArea_13)); }
	inline bool get_showTrackedArea_13() const { return ___showTrackedArea_13; }
	inline bool* get_address_of_showTrackedArea_13() { return &___showTrackedArea_13; }
	inline void set_showTrackedArea_13(bool value)
	{
		___showTrackedArea_13 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___trackedAreaMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_trackedAreaMaterial_14() const { return ___trackedAreaMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_trackedAreaMaterial_14() { return &___trackedAreaMaterial_14; }
	inline void set_trackedAreaMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___trackedAreaMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedAreaMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___trackedAreaPhysicsLayer_15)); }
	inline int32_t get_trackedAreaPhysicsLayer_15() const { return ___trackedAreaPhysicsLayer_15; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_15() { return &___trackedAreaPhysicsLayer_15; }
	inline void set_trackedAreaPhysicsLayer_15(int32_t value)
	{
		___trackedAreaPhysicsLayer_15 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___showBoundaryWalls_16)); }
	inline bool get_showBoundaryWalls_16() const { return ___showBoundaryWalls_16; }
	inline bool* get_address_of_showBoundaryWalls_16() { return &___showBoundaryWalls_16; }
	inline void set_showBoundaryWalls_16(bool value)
	{
		___showBoundaryWalls_16 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___boundaryWallMaterial_17)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryWallMaterial_17() const { return ___boundaryWallMaterial_17; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryWallMaterial_17() { return &___boundaryWallMaterial_17; }
	inline void set_boundaryWallMaterial_17(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryWallMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryWallMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___boundaryWallsPhysicsLayer_18)); }
	inline int32_t get_boundaryWallsPhysicsLayer_18() const { return ___boundaryWallsPhysicsLayer_18; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_18() { return &___boundaryWallsPhysicsLayer_18; }
	inline void set_boundaryWallsPhysicsLayer_18(int32_t value)
	{
		___boundaryWallsPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___showBoundaryCeiling_19)); }
	inline bool get_showBoundaryCeiling_19() const { return ___showBoundaryCeiling_19; }
	inline bool* get_address_of_showBoundaryCeiling_19() { return &___showBoundaryCeiling_19; }
	inline void set_showBoundaryCeiling_19(bool value)
	{
		___showBoundaryCeiling_19 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___boundaryCeilingMaterial_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryCeilingMaterial_20() const { return ___boundaryCeilingMaterial_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryCeilingMaterial_20() { return &___boundaryCeilingMaterial_20; }
	inline void set_boundaryCeilingMaterial_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryCeilingMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryCeilingMaterial_20), (void*)value);
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE, ___ceilingPhysicsLayer_21)); }
	inline int32_t get_ceilingPhysicsLayer_21() const { return ___ceilingPhysicsLayer_21; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_21() { return &___ceilingPhysicsLayer_21; }
	inline void set_ceilingPhysicsLayer_21(int32_t value)
	{
		___ceilingPhysicsLayer_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct  GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4  : public BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * ___meshWorkQueue_32;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos_33;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___outstandingMeshObject_34;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___spareMeshObject_35;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_36;

public:
	inline static int32_t get_offset_of_meshWorkQueue_32() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4, ___meshWorkQueue_32)); }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * get_meshWorkQueue_32() const { return ___meshWorkQueue_32; }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B ** get_address_of_meshWorkQueue_32() { return &___meshWorkQueue_32; }
	inline void set_meshWorkQueue_32(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * value)
	{
		___meshWorkQueue_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_32), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_33() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4, ___meshInfos_33)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_meshInfos_33() const { return ___meshInfos_33; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_meshInfos_33() { return &___meshInfos_33; }
	inline void set_meshInfos_33(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___meshInfos_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_33), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_34() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4, ___outstandingMeshObject_34)); }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * get_outstandingMeshObject_34() const { return ___outstandingMeshObject_34; }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 ** get_address_of_outstandingMeshObject_34() { return &___outstandingMeshObject_34; }
	inline void set_outstandingMeshObject_34(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * value)
	{
		___outstandingMeshObject_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_34), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_35() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4, ___spareMeshObject_35)); }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * get_spareMeshObject_35() const { return ___spareMeshObject_35; }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 ** get_address_of_spareMeshObject_35() { return &___spareMeshObject_35; }
	inline void set_spareMeshObject_35(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * value)
	{
		___spareMeshObject_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_35), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_36() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4, ___lastUpdated_36)); }
	inline float get_lastUpdated_36() const { return ___lastUpdated_36; }
	inline float* get_address_of_lastUpdated_36() { return &___lastUpdated_36; }
	inline void set_lastUpdated_36(float value)
	{
		___lastUpdated_36 = value;
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver_PlayspaceAdapter
struct  PlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PoseProviderComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_OriginPose_10)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m7FBFB745BF419112971A4BF0DB915D296F08165E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___descriptors0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_gshared_inline (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_gshared (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1_Initialize_m8F32B1A77415A29A74AC523C8FFB396228A62A5C_gshared (MixedRealitySpatialAwarenessEventData_1_t913CA62791C677E680A9933DDE114D6753A14C60 * __this, RuntimeObject* ___observer0, int32_t ___id1, RuntimeObject * ___spatialObject2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_gshared_inline (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_gshared (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_gshared (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_gshared (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m379C08BE13D2E0AD1F9102B6E280A32F0C9C7015_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_gshared_inline (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_gshared (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_gshared (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD78F20403483801D607D886AFF68B77F589CA3B5_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mDD151E9EBB701B9B8E2A884BFEFA6FEBED3B6811_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_mEFB456406C0344B47A72CC235952096A261A7DCE_gshared_inline (BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3BF41F57B73B4C1A2357C3172B39A77BA797AA0D_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mBE5E4BF8C453D123B1C73DC3885170EDF1B50197_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m55C8B8338B0C67531FDF4EE59140C36F66EDC463_gshared (Dictionary_2_t0B4B27BFD3868BAFAD7C50B7A2E7EBF6527AF88D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_m098FB15E16B014EB8AA85788202BACC44E8C624C (BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DD_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m701A94DC92B9C50D591CE2B79D369E33EA5F8369 (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_mD403705A40B5D53B49633E462E7F99C39FAEEA9C (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::.ctor()
inline void Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993 (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2 (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialMeshObserver__ctor_m91687AC7025AC552AAC80F86379ACADB21FFF0AF (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_SpatialAwarenessSystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_StartupBehavior()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_StartupBehavior_m35303F6B249B97ABD69FA838F2927AB2007997A3_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsRunning()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRMeshSubsystem::set_meshDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_set_meshDensity_mD315BB1EB878525460C446B5A68A3FDB38216126 (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6 (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.XRMeshSubsystemDescriptor>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5 (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m7FBFB745BF419112971A4BF0DB915D296F08165E_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_inline (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_m47A876405AFC549622D82665575A6F0ED3CE9B8E (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_IsRunning(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_m31435B4F69AA1755718C91F9430CEADE18E6509B_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Clear()
inline void Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4 (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialMeshObserver_get_Meshes_m852E959FF478559E13D8BB625C7EC6602B93B054 (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_gshared)(__this, ___collection0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m07CF42144AE43B1B9FD3F48187AA598DDCA2A30A (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::get_Count()
inline int32_t Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_inline (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Dequeue()
inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6 (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	return ((  MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, const RuntimeMethod*))Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_m545DE4717840BF1786A951C07BF74911201744A6 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_UpdateInterval()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_m75F285D2A8EEAEC8B500D512693EFE7534994237_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mCCB17E1362C9A18D305D00FED01344B4AADF588F_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m2E27F36B2E33B66C8805316FBA3C44F0DDAA5DA1_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_IsStationaryObserver()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_m0F42D6190BEB0F2BF531071EF20E0586570264AE_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObserverOrigin(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_m75A98FA933A6277BC2F52E7CC41FAD8253F61F57_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_TryGetMeshInfos_m32691622E093BD37877174447CC77D7487E55B00 (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfosOut0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m015B39D2E2D747A81448DEE65969A3F03E331FF2 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_MeshPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_mDC055D9596054044D709C9738E15A9C011A2E142_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626 (MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Create(UnityEngine.Mesh,System.Int32,System.String,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * SpatialAwarenessMeshObject_Create_m16EB37FC0533B0CC1CE8ED8EDCC61C97C27FED02 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, int32_t ___layer1, String_t* ___name2, int32_t ___meshId3, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___meshParent4, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter>()
inline PlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630 * GameObject_AddComponent_TisPlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630_m3C5D6A6E02BB7400EC7B3B025DD946F8AE22856A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_GameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::set_Id(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m000C2A429EA014753438129B05778FFE1182CF22_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Filter()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * BaseSpatialAwarenessObject_get_Filter_m2166751D2FED95944A1256A3A75C11E19E64CA97_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::get_Collider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * SpatialAwarenessMeshObject_get_Collider_mF2F506EF10DC0D87D66F0F4A0E7D4A07045F5284_inline (SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682 (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_GenerateMeshAsync_m3893DD22BD77435E85D51F9C1E48313DB9559EAD (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh1, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___meshCollider2, int32_t ___attributes3, Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * ___onMeshGenerationComplete4, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m535D27570B39228E35C81D2AD7E7E6FD503690AE (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * __this, int32_t ___key0, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB *, int32_t, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Remove(!0)
inline bool Dictionary_2_Remove_m8B8A4F5D229083B356E8BE33778C8479D70D5E43 (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m638AE6335937AD9138CDFA263907FB9FB91DCC41 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___availableMeshObject0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Initialize(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver,System.Int32,!0)
inline void MixedRealitySpatialAwarenessEventData_1_Initialize_mC86BBDD88FD073636FEF70C79D3053AFC580E129 (MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * __this, RuntimeObject* ___observer0, int32_t ___id1, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___spatialObject2, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C *, RuntimeObject*, int32_t, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1_Initialize_m8F32B1A77415A29A74AC523C8FFB396228A62A5C_gshared)(__this, ___observer0, ___id1, ___spatialObject2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::Cleanup(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAwarenessMeshObject_Cleanup_m4CD7A21BBBF0A329E015321185348AB0065B9285 (SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___meshObject0, bool ___destroyGameObject1, bool ___destroyMeshes2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_mD4815DE66AAA5E75599F47EDCB77CEAF63FC2923_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m61D4FF152BC326C6B661E68BF6DC1738957744A2_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
inline Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_inline (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	return ((  MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  (*) (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *, const RuntimeMethod*))Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_gshared_inline)(__this, method);
}
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>::Enqueue(!0)
inline void Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A , const RuntimeMethod*))Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
inline bool Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447 (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *, const RuntimeMethod*))Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
inline void Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442 (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *, const RuntimeMethod*))Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_gshared)(__this, method);
}
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_mB2A2937F3CEA5264B977F6FAAD054CE353CDC248_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_DisplayOption()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_m51C25D43683F0D8F81FA645E6D9A3A67D962A518_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method);
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Renderer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * BaseSpatialAwarenessObject_get_Renderer_m1530531510AF0AB4ACCC31C943AF12055D4D5D05_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_OcclusionMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_OcclusionMaterial_m0BD016733EDBE136F930451879E02DC054AAB610_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_VisibleMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_VisibleMaterial_m1ED9BCEA634B6B343CF23C7084184A4268ED9102_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_RecalculateNormals()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m027857347283133EA9290A80C8761E57F3BCD760_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6823A35864C9D6F82A9B044338BBF8DB7DF30C3A (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m379C08BE13D2E0AD1F9102B6E280A32F0C9C7015_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Item(!0)
inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * Dictionary_2_get_Item_m9363E9C5EC2538F64EF09D750C9255ECFA7AE820 (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * (*) (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::Add(!0,!1)
inline void Dictionary_2_Add_m9EB400448ACA6F1CF95D59D7724BC75DE763F798 (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * __this, int32_t ___key0, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB *, int32_t, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m8F29FB995D8CDCBFCF93723412ABB0AD304D925A (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___meshGenerationResult0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_GetTransformedBy_m494B58D30A020A636F2B457F9042D4423F7A534A (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___lhs0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_get_Position_mAA3029CB5BB275F1BB0733098235C8F93E7069B7 (const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPlayspace_get_Rotation_m6D68EBCC7CC8DAAC5D6236EF3CD3C778601A5F1D (const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver/PlayspaceAdapter::Concatenate(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  PlayspaceAdapter_Concatenate_m4CB0DF1DCB8EB8FAFBFBC18604F33D32D53A0F00 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___lhs0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_m1B9B7FF1EE48EC8E8EEA9D2679BA6432D162E91D (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::AssignControllerMappings(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_AssignControllerMappings_m999C4431FC011A1E40A40B9E03C07A2653697E89 (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___mappings0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m1745360C36A79CB48529477A21EDDC91066F01E4_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m96A722BD37841DA0220C1D89FDB44B69D71450E6_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::get_TrackingState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_m526AAF39D7E7D5F1745E82DEC6C56C5CE43F9F74_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___usage0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m09D7C41D7C22C84C2E7AA799444D60E3F78D94CA_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionApproximate(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_m7D405F980EF51B3295738C78DD5F297CD3CF0EEA_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___usage0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_mB578444FA1E712ED43BD62B1F1C88C9587BF17DB_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m37A26FCDCEB93FA94B6273580CA3215A5573A12C_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_mFD7EA8BEA56B693321B065AE3E904936939264B6_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_TrackingState(Microsoft.MixedReality.Toolkit.TrackingState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_m70CADF0EDEF0CCFB1E12DCD63833A6E0FC8749D6_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_m4AB5ECB400274F917090B9B7DF16EEE4181A7E63 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mDC7B6E71466E46635F9A73B5B1D02F6EB00E7F6D_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1CEB8B06A88D3471B078233EC7409E652604A2C6_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_mF9AF9547DF046D38EFFEA5C9724C9E74AC693BC2 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___left0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___right1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mAE0180DF9562DF8326BE1B2AECAFAF97C57195BA_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___usage0, float* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_mC6CF728534F6405CA91C7EF5F0D27DE1C5F1F363 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m61EB4EE67167224A146BB32011E10545E5B9E814_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_FloatData(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_FloatData_m09BDB71E1766CC2BC415B72168C6D86F52BAFAC6 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mDBD89893476DC46DFC16A83CC254272EFCE19B69_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___usage0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m51050074CB9CE1A50ACDD5E47A74888971E0A6DE (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_m2FF2745E797CE3165DFEE9120A00908E8782D62E_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mF685F64DD474073262130DFCF89470AD49AF8E6E (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityInteractionMapping_get_PoseData_mEC612D2648DD0687A780D4884E4D0C966B217A5A_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_mC1D32C720A7299C03AA4AC7FAECC901F8EB496C4 (BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m2F9F37D69C6F16A3D427DECCCE089A63EDA5160D (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577 (uint32_t ___desiredCharacteristics0, List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733 (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  (*) (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *, const RuntimeMethod*))Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mE3289A300EC9C35B2570C561ED671D3B0FB49030 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Contains(!0)
inline bool List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Remove(!0)
inline bool List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2 (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *, const RuntimeMethod*))Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9 (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *, const RuntimeMethod*))Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
inline void List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5E00C8D5627E30F47C3639DDF31442EECE7D96ED (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))Dictionary_2_ContainsKey_mD78F20403483801D607D886AFF68B77F589CA3B5_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::get_Item(!0)
inline GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * Dictionary_2_get_Item_m64C4402999BB0496B505350C8C05EDBA622ADB49 (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method)
{
	return ((  GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * (*) (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))Dictionary_2_get_Item_mDD151E9EBB701B9B8E2A884BFEFA6FEBED3B6811_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173 (RuntimeObject * __this, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___flag0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mDB73949F7D25A8FE0BEB7A77A320B3295C234C1B_inline (BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t8C3B933A708BE562C4BDC1FD2C156B6106747C6F *, const RuntimeMethod*))BaseDataProvider_1_get_Service_mEFB456406C0344B47A72CC235952096A261A7DCE_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mEE50708E1E8AAD4E5021A2FFDB992DDF65727E17 (Type_t * ___type0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::SetupConfiguration(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_SetupConfiguration_mB46E2E0B7EC98BFE15180A95C0B6FA21D12A4C89 (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, Type_t * ___controllerType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Add(!0,!1)
inline void Dictionary_2_Add_m901CD9B3EA4AAABA8AA0C0975611C9F39B07AA76 (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *, const RuntimeMethod*))Dictionary_2_Add_m3BF41F57B73B4C1A2357C3172B39A77BA797AA0D_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::get_Visualizer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m8015BD547D081E4F7C2F00B64074DD92B7F9742B_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::Remove(!0)
inline bool Dictionary_2_Remove_m230DA28D3D94858B033A669473740775C42909FF (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC , const RuntimeMethod*))Dictionary_2_Remove_mBE5E4BF8C453D123B1C73DC3885170EDF1B50197_gshared)(__this, ___key0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>::.ctor()
inline void Dictionary_2__ctor_m88EB6E769D9AE85E4AC5635966E9C25671877607 (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 *, const RuntimeMethod*))Dictionary_2__ctor_m55C8B8338B0C67531FDF4EE59140C36F66EDC463_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBoundarySystem__ctor_mA209A7C7FF21FA178C0ABC5AED0C322DED473220 (BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150 * __this, MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE * ___profile0, int32_t ___scale1, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared)(__this, ___capacity0, method);
}
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryGetBoundaryPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryGetBoundaryPoints_m65DBE5495B42A5F3091CB61E05CB07761A0787ED (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___boundaryPoints0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.BaseBoundarySystem::get_Scale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_mCA811E05907C26B47895A15F8CA9C17258DB3D14_inline (BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, int32_t ___origin0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings__ctor_m52332E6FFD88B640F284BEE306FB4A3F9885B2C4 (GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_m098FB15E16B014EB8AA85788202BACC44E8C624C(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKCameraSettings_get_IsOpaque_m19797AB37970174B90473AF7E92DBE102DF62542 (GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKCameraSettings_get_IsOpaque_m19797AB37970174B90473AF7E92DBE102DF62542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B2_0 = NULL;
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSDKSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DD_inline(/*hidden argument*/NULL);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Enable_m02038E0D5E537C9E3ED48AEF1240F2DEA3E04D53 (GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKCameraSettings_Enable_m02038E0D5E537C9E3ED48AEF1240F2DEA3E04D53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_m701A94DC92B9C50D591CE2B79D369E33EA5F8369(__this, /*hidden argument*/NULL);
		// if (!CameraCache.Main.GetComponent<TrackedPoseDriver>())
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_0);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_1 = Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67(L_0, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// trackedPoseDriver = CameraCache.Main.gameObject.AddComponent<TrackedPoseDriver>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_5 = GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2(L_4, /*hidden argument*/GameObject_AddComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m1471B381B58DB0A3CD0CB12999905855FDE8CDB2_RuntimeMethod_var);
		__this->set_trackedPoseDriver_8(L_5);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKCameraSettings_Disable_mFFC3950269F2CAA05C70561BA5D2156441314857 (GenericXRSDKCameraSettings_t160F944E39E60A3904F0CC550299BD7063C9F5B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKCameraSettings_Disable_mFFC3950269F2CAA05C70561BA5D2156441314857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackedPoseDriver != null)
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_0 = __this->get_trackedPoseDriver_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Object.Destroy(trackedPoseDriver);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_2 = __this->get_trackedPoseDriver_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// trackedPoseDriver = null;
		__this->set_trackedPoseDriver_8((TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A *)NULL);
	}

IL_0020:
	{
		// base.Disable();
		BaseService_Disable_mD403705A40B5D53B49633E462E7F99C39FAEEA9C(__this, /*hidden argument*/NULL);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m8B9974F8DF7555E0E28E4A5CE95F5ECCB8B5125B (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver__ctor_m8B9974F8DF7555E0E28E4A5CE95F5ECCB8B5125B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Queue<MeshId> meshWorkQueue = new Queue<MeshId>();
		Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_0 = (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B *)il2cpp_codegen_object_new(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993(L_0, /*hidden argument*/Queue_1__ctor_m6C2FA4597DCCB3A59EBB1AD281547AE43A5A8993_RuntimeMethod_var);
		__this->set_meshWorkQueue_32(L_0);
		// private readonly List<MeshInfo> meshInfos = new List<MeshInfo>();
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_1 = (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *)il2cpp_codegen_object_new(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_il2cpp_TypeInfo_var);
		List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2(L_1, /*hidden argument*/List_1__ctor_m37F2D4688F397B7F540F0C41FDBE983AC1FDE3D2_RuntimeMethod_var);
		__this->set_meshInfos_33(L_1);
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_2 = ___spatialAwarenessSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_5 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var);
		BaseSpatialMeshObserver__ctor_m91687AC7025AC552AAC80F86379ACADB21FFF0AF(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CreateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_CreateObserver_m9162D56C3EF892B509DC88FA7D3AA526471D9C1D (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_CreateObserver_m9162D56C3EF892B509DC88FA7D3AA526471D9C1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SpatialAwarenessSystem == null) { return; }
		RuntimeObject* L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (SpatialAwarenessSystem == null) { return; }
		return;
	}

IL_0009:
	{
		// if (XRSDKSubsystemHelpers.MeshSubsystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// ConfigureObserverVolume();
		VirtActionInvoker0::Invoke(79 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
		// if (StartupBehavior == AutoStartBehavior.AutoStart)
		int32_t L_2 = BaseSpatialObserver_get_StartupBehavior_m35303F6B249B97ABD69FA838F2927AB2007997A3_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Resume();
		VirtActionInvoker0::Invoke(54 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Resume() */, __this);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CleanupObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_CleanupObserver_mD31870355CA5ED55EE889E5F3BF94E3E50643125 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	{
		// if (IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Suspend();
		VirtActionInvoker0::Invoke(55 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::LookupTriangleDensity(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericXRSDKSpatialMeshObserver_LookupTriangleDensity_m90EB18AD023DF589E57B2AE8D4055B734DCAAAFF (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, int32_t ___levelOfDetail0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_LookupTriangleDensity_m90EB18AD023DF589E57B2AE8D4055B734DCAAAFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int level = (int)levelOfDetail;
		int32_t L_0 = ___levelOfDetail0;
		V_0 = L_0;
		// if (XRSDKSubsystemHelpers.MeshSubsystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// XRSDKSubsystemHelpers.MeshSubsystem.meshDensity = level / (float)SpatialAwarenessMeshLevelOfDetail.Fine; // For now, map Coarse to 0.0 and Fine to 1.0
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_2 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		XRMeshSubsystem_set_meshDensity_mD315BB1EB878525460C446B5A68A3FDB38216126(L_2, ((float)((float)(((float)((float)L_3)))/(float)(2.0f))), /*hidden argument*/NULL);
	}

IL_001b:
	{
		// return level;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericXRSDKSpatialMeshObserver_CheckCapability_m817ECAB6108AE10EE397C80124CB7E9D8B3AF2FB (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_CheckCapability_m817ECAB6108AE10EE397C80124CB7E9D8B3AF2FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (capability != MixedRealityCapability.SpatialAwarenessMesh)
		int32_t L_0 = ___capability0;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0006;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0006:
	{
		// var descriptors = new List<XRMeshSubsystemDescriptor>();
		List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * L_1 = (List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 *)il2cpp_codegen_object_new(List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920_il2cpp_TypeInfo_var);
		List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6(L_1, /*hidden argument*/List_1__ctor_m7EF4FEE125F915D46DD73E315571E39640228CB6_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(descriptors);
		List_1_tD0096233D19E5B1D91BCFBC2F3515F33DF627920 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5(L_2, /*hidden argument*/SubsystemManager_GetSubsystemDescriptors_TisXRMeshSubsystemDescriptor_t714B4140E276BE215234C3BB3F252D6C12A23AFB_mB0540DF0965C2E5C68264D88290688CCBA3078C5_RuntimeMethod_var);
		// return descriptors.Count > 0;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_inline(L_2, /*hidden argument*/List_1_get_Count_m05E1928C3BE0A54B7DEBFBECDF26BE235235E071_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Update_mAE688B13F4A148F3008146FC0D0C4D2519F9F897 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	{
		// UpdateObserver();
		GenericXRSDKSpatialMeshObserver_UpdateObserver_m47A876405AFC549622D82665575A6F0ED3CE9B8E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Resume_mD41A34A163A02972539C54570866C9EEBBBF1061 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Resume_mD41A34A163A02972539C54570866C9EEBBBF1061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently running.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral86835A3DB5A72D8ADC8C34240A36AC24FDF843EF, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// lastUpdated = 0;
		__this->set_lastUpdated_36((0.0f));
		// IsRunning = true;
		BaseSpatialObserver_set_IsRunning_m31435B4F69AA1755718C91F9430CEADE18E6509B_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::Suspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_Suspend_m89ECA6E9AC51AA2FF1B2968B774D30A3DACC369A (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_Suspend_m89ECA6E9AC51AA2FF1B2968B774D30A3DACC369A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogWarning("The XR SDK spatial observer is currently stopped.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralFD59EE74A1BD72C2A0FB6F83CA703C7D099CE606, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// IsRunning = false;
		BaseSpatialObserver_set_IsRunning_m31435B4F69AA1755718C91F9430CEADE18E6509B_inline(__this, (bool)0, /*hidden argument*/NULL);
		// meshWorkQueue.Clear();
		Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_1 = __this->get_meshWorkQueue_32();
		NullCheck(L_1);
		Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4(L_1, /*hidden argument*/Queue_1_Clear_m2280002D2A89D3CED85106AA86BA7971D12868F4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ClearObservations_m4E31645DEF36D92C592A128AB6A305DEFE4A0DA0 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_ClearObservations_m4E31645DEF36D92C592A128AB6A305DEFE4A0DA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool wasRunning = false;
		V_0 = (bool)0;
		// if (IsRunning)
		bool L_0 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// wasRunning = true;
		V_0 = (bool)1;
		// Suspend();
		VirtActionInvoker0::Invoke(55 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Suspend() */, __this);
	}

IL_0012:
	{
		// IReadOnlyList<int> observations = new List<int>(Meshes.Keys);
		RuntimeObject* L_1 = BaseSpatialMeshObserver_get_Meshes_m852E959FF478559E13D8BB625C7EC6602B93B054(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!0> System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Keys() */, IReadOnlyDictionary_2_t93BEF8F9B904607E95A90A0EF45DDEAB639183D1_il2cpp_TypeInfo_var, L_1);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797(L_3, L_2, /*hidden argument*/List_1__ctor_m262B3A833A8A33F720DDF70DABD4C455423A6797_RuntimeMethod_var);
		// foreach (int meshId in observations)
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_002a:
		{
			// foreach (int meshId in observations)
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			// RemoveMeshObject(meshId);
			int32_t L_7 = V_2;
			GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m07CF42144AE43B1B9FD3F48187AA598DDCA2A30A(__this, L_7, /*hidden argument*/NULL);
		}

IL_0038:
		{
			// foreach (int meshId in observations)
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_002a;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		// if (wasRunning)
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// Resume();
		VirtActionInvoker0::Invoke(54 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::Resume() */, __this);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateObserver_m47A876405AFC549622D82665575A6F0ED3CE9B8E (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_UpdateObserver_m47A876405AFC549622D82665575A6F0ED3CE9B8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SpatialAwarenessSystem == null || XRSDKSubsystemHelpers.MeshSubsystem == null) { return; }
		RuntimeObject* L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (SpatialAwarenessSystem == null || XRSDKSubsystemHelpers.MeshSubsystem == null) { return; }
		return;
	}

IL_0010:
	{
		// if (IsRunning && (outstandingMeshObject == null))
		bool L_2 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00c4;
		}
	}
	{
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_3 = __this->get_outstandingMeshObject_34();
		if (L_3)
		{
			goto IL_00c4;
		}
	}
	{
		// if (meshWorkQueue.Count > 0)
		Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_4 = __this->get_meshWorkQueue_32();
		NullCheck(L_4);
		int32_t L_5 = Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_inline(L_4, /*hidden argument*/Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// RequestMesh(meshWorkQueue.Dequeue());
		Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_6 = __this->get_meshWorkQueue_32();
		NullCheck(L_6);
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_7 = Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6(L_6, /*hidden argument*/Queue_1_Dequeue_mBA9A5E99E49B3C2132A42A1E566525D0CD0902D6_RuntimeMethod_var);
		GenericXRSDKSpatialMeshObserver_RequestMesh_m545DE4717840BF1786A951C07BF74911201744A6(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// else if (Time.time - lastUpdated >= UpdateInterval)
		float L_8 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_9 = __this->get_lastUpdated_36();
		float L_10 = BaseSpatialObserver_get_UpdateInterval_m75F285D2A8EEAEC8B500D512693EFE7534994237_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))) >= ((float)L_10))))
		{
			goto IL_00c4;
		}
	}
	{
		// if (ObserverVolumeType == VolumeType.UserAlignedCube)
		int32_t L_11 = BaseSpatialObserver_get_ObserverVolumeType_mCCB17E1362C9A18D305D00FED01344B4AADF588F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0078;
		}
	}
	{
		// ObserverRotation = CameraCache.Main.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		BaseSpatialObserver_set_ObserverRotation_m2E27F36B2E33B66C8805316FBA3C44F0DDAA5DA1_inline(__this, L_14, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// if (!IsStationaryObserver)
		bool L_15 = BaseSpatialObserver_get_IsStationaryObserver_m0F42D6190BEB0F2BF531071EF20E0586570264AE_inline(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0095;
		}
	}
	{
		// ObserverOrigin = CameraCache.Main.transform.position;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_16 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		BaseSpatialObserver_set_ObserverOrigin_m75A98FA933A6277BC2F52E7CC41FAD8253F61F57_inline(__this, L_18, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// ConfigureObserverVolume();
		VirtActionInvoker0::Invoke(79 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume() */, __this);
		// if (XRSDKSubsystemHelpers.MeshSubsystem.TryGetMeshInfos(meshInfos))
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_19 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_20 = __this->get_meshInfos_33();
		NullCheck(L_19);
		bool L_21 = XRMeshSubsystem_TryGetMeshInfos_m32691622E093BD37877174447CC77D7487E55B00(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b9;
		}
	}
	{
		// UpdateMeshes(meshInfos);
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_22 = __this->get_meshInfos_33();
		GenericXRSDKSpatialMeshObserver_UpdateMeshes_m015B39D2E2D747A81448DEE65969A3F03E331FF2(__this, L_22, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// lastUpdated = Time.time;
		float L_23 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_lastUpdated_36(L_23);
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMesh(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RequestMesh_m545DE4717840BF1786A951C07BF74911201744A6 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_RequestMesh_m545DE4717840BF1786A951C07BF74911201744A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * V_1 = NULL;
	{
		// string meshName = ("SpatialMesh - " + meshId);
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_0 = ___meshId0;
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_1 = L_0;
		RuntimeObject * L_2 = Box(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB245477D5A96A319ED32B95AF7B4A7C31F5D863C, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (spareMeshObject == null)
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_4 = __this->get_spareMeshObject_35();
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		// newMesh = SpatialAwarenessMeshObject.Create(
		//     null,
		//     MeshPhysicsLayer,
		//     meshName,
		//     meshId.GetHashCode());
		int32_t L_5 = BaseSpatialMeshObserver_get_MeshPhysicsLayer_mDC055D9596054044D709C9738E15A9C011A2E142_inline(__this, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		int32_t L_7 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&___meshId0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0_il2cpp_TypeInfo_var);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_8 = SpatialAwarenessMeshObject_Create_m16EB37FC0533B0CC1CE8ED8EDCC61C97C27FED02((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)NULL, L_5, L_6, L_7, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		V_1 = L_8;
		// GameObject anchorHolder = new GameObject(meshName + "_anchor");
		String_t* L_9 = V_0;
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, _stringLiteralE6DF6A9402802F80FD6F2C704FB41798F67CF2E9, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_11, L_10, /*hidden argument*/NULL);
		// anchorHolder.AddComponent<PlayspaceAdapter>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = L_11;
		NullCheck(L_12);
		GameObject_AddComponent_TisPlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630_m3C5D6A6E02BB7400EC7B3B025DD946F8AE22856A(L_12, /*hidden argument*/GameObject_AddComponent_TisPlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630_m3C5D6A6E02BB7400EC7B3B025DD946F8AE22856A_RuntimeMethod_var);
		// anchorHolder.transform.SetParent(newMesh.GameObject.transform, false);
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_14 = V_1;
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_13, L_16, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_009d;
	}

IL_0064:
	{
		// newMesh = spareMeshObject;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_17 = __this->get_spareMeshObject_35();
		V_1 = L_17;
		// spareMeshObject = null;
		__this->set_spareMeshObject_35((SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 *)NULL);
		// newMesh.GameObject.name = meshName;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline(L_18, /*hidden argument*/NULL);
		String_t* L_20 = V_0;
		NullCheck(L_19);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_19, L_20, /*hidden argument*/NULL);
		// newMesh.Id = meshId.GetHashCode();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_21 = V_1;
		int32_t L_22 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&___meshId0), /*hidden argument*/NULL);
		NullCheck(L_21);
		BaseSpatialAwarenessObject_set_Id_m000C2A429EA014753438129B05778FFE1182CF22_inline(L_21, L_22, /*hidden argument*/NULL);
		// newMesh.GameObject.SetActive(true);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_23 = V_1;
		NullCheck(L_23);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_24, (bool)1, /*hidden argument*/NULL);
	}

IL_009d:
	{
		// XRSDKSubsystemHelpers.MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_25 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_26 = ___meshId0;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_27 = V_1;
		NullCheck(L_27);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_28 = BaseSpatialAwarenessObject_get_Filter_m2166751D2FED95944A1256A3A75C11E19E64CA97_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_29 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_28, /*hidden argument*/NULL);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_30 = V_1;
		NullCheck(L_30);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_31 = SpatialAwarenessMeshObject_get_Collider_mF2F506EF10DC0D87D66F0F4A0E7D4A07045F5284_inline(L_30, /*hidden argument*/NULL);
		Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * L_32 = (Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C *)il2cpp_codegen_object_new(Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C_il2cpp_TypeInfo_var);
		Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682(L_32, __this, (intptr_t)((intptr_t)GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__16_0_m7C1667B3C4DF3DDBD5A182A3CDA1EE391FBC1083_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAF433D4A6A1956EEFB5B3E276E96FD9A7EC60682_RuntimeMethod_var);
		NullCheck(L_25);
		XRMeshSubsystem_GenerateMeshAsync_m3893DD22BD77435E85D51F9C1E48313DB9559EAD(L_25, L_26, L_29, L_31, 1, L_32, /*hidden argument*/NULL);
		// outstandingMeshObject = newMesh;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_33 = V_1;
		__this->set_outstandingMeshObject_34(L_33);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m07CF42144AE43B1B9FD3F48187AA598DDCA2A30A (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m07CF42144AE43B1B9FD3F48187AA598DDCA2A30A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (meshes.TryGetValue(id, out mesh))
		Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * L_0 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshes_26();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m535D27570B39228E35C81D2AD7E7E6FD503690AE(L_0, L_1, (SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m535D27570B39228E35C81D2AD7E7E6FD503690AE_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// meshes.Remove(id);
		Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * L_3 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshes_26();
		int32_t L_4 = ___id0;
		NullCheck(L_3);
		Dictionary_2_Remove_m8B8A4F5D229083B356E8BE33778C8479D70D5E43(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m8B8A4F5D229083B356E8BE33778C8479D70D5E43_RuntimeMethod_var);
		// ReclaimMeshObject(mesh);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_5 = V_0;
		GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m638AE6335937AD9138CDFA263907FB9FB91DCC41(__this, L_5, /*hidden argument*/NULL);
		// meshEventData.Initialize(this, id, null);
		MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * L_6 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshEventData_19();
		int32_t L_7 = ___id0;
		NullCheck(L_6);
		MixedRealitySpatialAwarenessEventData_1_Initialize_mC86BBDD88FD073636FEF70C79D3053AFC580E129(L_6, __this, L_7, (SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 *)NULL, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_mC86BBDD88FD073636FEF70C79D3053AFC580E129_RuntimeMethod_var);
		// SpatialAwarenessSystem?.HandleEvent(meshEventData, OnMeshRemoved);
		RuntimeObject* L_8 = BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * L_10 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshEventData_19();
		IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var);
		EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * L_11 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var))->get_OnMeshRemoved_23();
		NullCheck(G_B3_0);
		GenericInterfaceActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tE62F1A8F944467A9BAC5FC2B86B1937CE282C276_m6B1F9423866D3742B9985F5C6481EE48F0497780_RuntimeMethod_var, G_B3_0, L_10, L_11);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObject(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m638AE6335937AD9138CDFA263907FB9FB91DCC41 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___availableMeshObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m638AE6335937AD9138CDFA263907FB9FB91DCC41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spareMeshObject == null)
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_0 = __this->get_spareMeshObject_35();
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		// SpatialAwarenessMeshObject.Cleanup(availableMeshObject, false);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_1 = ___availableMeshObject0;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0_il2cpp_TypeInfo_var);
		SpatialAwarenessMeshObject_Cleanup_m4CD7A21BBBF0A329E015321185348AB0065B9285(L_1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// availableMeshObject.GameObject.name = "Unused Spatial Mesh";
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_2 = ___availableMeshObject0;
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_3, _stringLiteral5DC6D5DE1EC5A7F2861EB2A043D91BCD0D44006B, /*hidden argument*/NULL);
		// availableMeshObject.GameObject.SetActive(false);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_4 = ___availableMeshObject0;
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// spareMeshObject = availableMeshObject;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_6 = ___availableMeshObject0;
		__this->set_spareMeshObject_35(L_6);
		// }
		return;
	}

IL_0034:
	{
		// SpatialAwarenessMeshObject.Cleanup(availableMeshObject);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_7 = ___availableMeshObject0;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0_il2cpp_TypeInfo_var);
		SpatialAwarenessMeshObject_Cleanup_m4CD7A21BBBF0A329E015321185348AB0065B9285(L_7, (bool)1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m778766C437B1C6BA666403924A082F514657D65A (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_ConfigureObserverVolume_m778766C437B1C6BA666403924A082F514657D65A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (SpatialAwarenessSystem == null || XRSDKSubsystemHelpers.MeshSubsystem == null)
		RuntimeObject* L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// switch (ObserverVolumeType)
		int32_t L_2 = BaseSpatialObserver_get_ObserverVolumeType_mCCB17E1362C9A18D305D00FED01344B4AADF588F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		// XRSDKSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_4 = XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = BaseSpatialObserver_get_ObserverOrigin_mD4815DE66AAA5E75599F47EDCB77CEAF63FC2923_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = BaseSpatialObserver_get_ObservationExtents_m61D4FF152BC326C6B661E68BF6DC1738957744A2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA(L_4, L_5, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0033:
	{
		// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
		int32_t L_7 = BaseSpatialObserver_get_ObserverVolumeType_mCCB17E1362C9A18D305D00FED01344B4AADF588F_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(VolumeType_tB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshes(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_UpdateMeshes_m015B39D2E2D747A81448DEE65969A3F03E331FF2 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_UpdateMeshes_m015B39D2E2D747A81448DEE65969A3F03E331FF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!IsRunning) { return; }
		bool L_0 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// foreach (MeshInfo meshInfo in meshInfos)
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_1 = ___meshInfos0;
		NullCheck(L_1);
		Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D  L_2 = List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A(L_1, /*hidden argument*/List_1_GetEnumerator_m6AF2B1D02AF03EAB54F4341B551C85B5A51B9E3A_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0012:
		{
			// foreach (MeshInfo meshInfo in meshInfos)
			MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_3 = Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_inline((Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_RuntimeMethod_var);
			V_1 = L_3;
			// switch (meshInfo.ChangeState)
			int32_t L_4 = MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_1), /*hidden argument*/NULL);
			V_2 = L_4;
			int32_t L_5 = V_2;
			if ((!(((uint32_t)L_5) > ((uint32_t)1))))
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			int32_t L_6 = V_2;
			if ((((int32_t)L_6) == ((int32_t)2)))
			{
				goto IL_0040;
			}
		}

IL_002a:
		{
			goto IL_005b;
		}

IL_002c:
		{
			// meshWorkQueue.Enqueue(meshInfo.MeshId);
			Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * L_7 = __this->get_meshWorkQueue_32();
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_8 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_1), /*hidden argument*/NULL);
			NullCheck(L_7);
			Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F(L_7, L_8, /*hidden argument*/Queue_1_Enqueue_m46B01211EEF6FF50926119E9F04CA7B255BD5B2F_RuntimeMethod_var);
			// break;
			goto IL_005b;
		}

IL_0040:
		{
			// RemoveMeshObject(meshInfo.MeshId.GetHashCode());
			MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_9 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_1), /*hidden argument*/NULL);
			V_3 = L_9;
			int32_t L_10 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&V_3), /*hidden argument*/NULL);
			GenericXRSDKSpatialMeshObserver_RemoveMeshObject_m07CF42144AE43B1B9FD3F48187AA598DDCA2A30A(__this, L_10, /*hidden argument*/NULL);
		}

IL_005b:
		{
			// foreach (MeshInfo meshInfo in meshInfos)
			bool L_11 = Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447((Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2AA54A2934A990CF88D0A65F087D480FA52AD447_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442((Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8772668464AA238B2728E97AC923B4BB75823442_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationAction(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m8F29FB995D8CDCBFCF93723412ABB0AD304D925A (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___meshGenerationResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m8F29FB995D8CDCBFCF93723412ABB0AD304D925A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * G_B10_0 = NULL;
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * G_B9_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B11_0 = NULL;
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * G_B11_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B19_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B18_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B20_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B20_1 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	RuntimeObject* G_B22_0 = NULL;
	RuntimeObject* G_B26_0 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	{
		// if (!IsRunning) { return; }
		bool L_0 = BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsRunning) { return; }
		return;
	}

IL_0009:
	{
		// if (outstandingMeshObject == null)
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_1 = __this->get_outstandingMeshObject_34();
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogWarning($"MeshGenerationAction called for mesh id {meshGenerationResult.MeshId} while no request was outstanding.");
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_2 = MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline((MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A *)(&___meshGenerationResult0), /*hidden argument*/NULL);
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_3 = L_2;
		RuntimeObject * L_4 = Box(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral77361B86D8FA2FDF99E13C61E6868332120A7BE3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_5, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002d:
	{
		// switch (meshGenerationResult.Status)
		int32_t L_6 = MeshGenerationResult_get_Status_mB2A2937F3CEA5264B977F6FAAD054CE353CDC248_inline((MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A *)(&___meshGenerationResult0), /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_01ab;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0050;
			}
		}
	}
	{
		return;
	}

IL_0050:
	{
		// outstandingMeshObject = null;
		__this->set_outstandingMeshObject_34((SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 *)NULL);
		// break;
		return;
	}

IL_0058:
	{
		// SpatialAwarenessMeshObject meshObject = outstandingMeshObject;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_8 = __this->get_outstandingMeshObject_34();
		V_1 = L_8;
		// meshObject.Id = meshGenerationResult.MeshId.GetHashCode();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_9 = V_1;
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_10 = MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline((MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A *)(&___meshGenerationResult0), /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = MeshId_GetHashCode_m96FC65CD0D1CA2FEEAB91581073E173E9EC51626((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_9);
		BaseSpatialAwarenessObject_set_Id_m000C2A429EA014753438129B05778FFE1182CF22_inline(L_9, L_11, /*hidden argument*/NULL);
		// outstandingMeshObject = null;
		__this->set_outstandingMeshObject_34((SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 *)NULL);
		// SpatialAwarenessMeshDisplayOptions displayOption = DisplayOption;
		int32_t L_12 = BaseSpatialMeshObserver_get_DisplayOption_m51C25D43683F0D8F81FA645E6D9A3A67D962A518_inline(__this, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (displayOption != SpatialAwarenessMeshDisplayOptions.None)
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_00b7;
		}
	}
	{
		// meshObject.Renderer.enabled = true;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_14 = V_1;
		NullCheck(L_14);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_15 = BaseSpatialAwarenessObject_get_Renderer_m1530531510AF0AB4ACCC31C943AF12055D4D5D05_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_15, (bool)1, /*hidden argument*/NULL);
		// meshObject.Renderer.sharedMaterial = (displayOption == SpatialAwarenessMeshDisplayOptions.Visible) ?
		//     VisibleMaterial :
		//     OcclusionMaterial;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_16 = V_1;
		NullCheck(L_16);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_17 = BaseSpatialAwarenessObject_get_Renderer_m1530531510AF0AB4ACCC31C943AF12055D4D5D05_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		G_B9_0 = L_17;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			G_B10_0 = L_17;
			goto IL_00aa;
		}
	}
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = BaseSpatialMeshObserver_get_OcclusionMaterial_m0BD016733EDBE136F930451879E02DC054AAB610_inline(__this, /*hidden argument*/NULL);
		G_B11_0 = L_19;
		G_B11_1 = G_B9_0;
		goto IL_00b0;
	}

IL_00aa:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = BaseSpatialMeshObserver_get_VisibleMaterial_m1ED9BCEA634B6B343CF23C7084184A4268ED9102_inline(__this, /*hidden argument*/NULL);
		G_B11_0 = L_20;
		G_B11_1 = G_B10_0;
	}

IL_00b0:
	{
		NullCheck(G_B11_1);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		// }
		goto IL_00c3;
	}

IL_00b7:
	{
		// meshObject.Renderer.enabled = false;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_21 = V_1;
		NullCheck(L_21);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_22 = BaseSpatialAwarenessObject_get_Renderer_m1530531510AF0AB4ACCC31C943AF12055D4D5D05_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_22, (bool)0, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// if (RecalculateNormals)
		bool L_23 = BaseSpatialMeshObserver_get_RecalculateNormals_m027857347283133EA9290A80C8761E57F3BCD760_inline(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00db;
		}
	}
	{
		// meshObject.Filter.sharedMesh.RecalculateNormals();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_24 = V_1;
		NullCheck(L_24);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_25 = BaseSpatialAwarenessObject_get_Filter_m2166751D2FED95944A1256A3A75C11E19E64CA97_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_26 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_26, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// bool sendUpdatedEvent = false;
		V_3 = (bool)0;
		// if (meshes.ContainsKey(meshObject.Id))
		Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * L_27 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshes_26();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_30 = Dictionary_2_ContainsKey_m6823A35864C9D6F82A9B044338BBF8DB7DF30C3A(L_27, L_29, /*hidden argument*/Dictionary_2_ContainsKey_m6823A35864C9D6F82A9B044338BBF8DB7DF30C3A_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		// ReclaimMeshObject(meshes[meshObject.Id]);
		Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * L_31 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshes_26();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_34 = Dictionary_2_get_Item_m9363E9C5EC2538F64EF09D750C9255ECFA7AE820(L_31, L_33, /*hidden argument*/Dictionary_2_get_Item_m9363E9C5EC2538F64EF09D750C9255ECFA7AE820_RuntimeMethod_var);
		GenericXRSDKSpatialMeshObserver_ReclaimMeshObject_m638AE6335937AD9138CDFA263907FB9FB91DCC41(__this, L_34, /*hidden argument*/NULL);
		// meshes.Remove(meshObject.Id);
		Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * L_35 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshes_26();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Dictionary_2_Remove_m8B8A4F5D229083B356E8BE33778C8479D70D5E43(L_35, L_37, /*hidden argument*/Dictionary_2_Remove_m8B8A4F5D229083B356E8BE33778C8479D70D5E43_RuntimeMethod_var);
		// sendUpdatedEvent = true;
		V_3 = (bool)1;
	}

IL_011b:
	{
		// meshes.Add(meshObject.Id, meshObject);
		Dictionary_2_t811C1E5866F8A65627C8F6481E1920B41E2B13AB * L_38 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshes_26();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline(L_39, /*hidden argument*/NULL);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_41 = V_1;
		NullCheck(L_38);
		Dictionary_2_Add_m9EB400448ACA6F1CF95D59D7724BC75DE763F798(L_38, L_40, L_41, /*hidden argument*/Dictionary_2_Add_m9EB400448ACA6F1CF95D59D7724BC75DE763F798_RuntimeMethod_var);
		// meshObject.GameObject.transform.parent = (ObservedObjectParent.transform != null) ? ObservedObjectParent.transform : null;
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_42 = V_1;
		NullCheck(L_42);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_43, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_45 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(73 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_47 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_46, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B18_0 = L_44;
		if (L_47)
		{
			G_B19_0 = L_44;
			goto IL_014e;
		}
	}
	{
		G_B20_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		G_B20_1 = G_B18_0;
		goto IL_0159;
	}

IL_014e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = VirtFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(73 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::get_ObservedObjectParent() */, __this);
		NullCheck(L_48);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_48, /*hidden argument*/NULL);
		G_B20_0 = L_49;
		G_B20_1 = G_B19_0;
	}

IL_0159:
	{
		NullCheck(G_B20_1);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		// meshEventData.Initialize(this, meshObject.Id, meshObject);
		MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * L_50 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshEventData_19();
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline(L_51, /*hidden argument*/NULL);
		SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * L_53 = V_1;
		NullCheck(L_50);
		MixedRealitySpatialAwarenessEventData_1_Initialize_mC86BBDD88FD073636FEF70C79D3053AFC580E129(L_50, __this, L_52, L_53, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1_Initialize_mC86BBDD88FD073636FEF70C79D3053AFC580E129_RuntimeMethod_var);
		// if (sendUpdatedEvent)
		bool L_54 = V_3;
		if (!L_54)
		{
			goto IL_0190;
		}
	}
	{
		// SpatialAwarenessSystem?.HandleEvent(meshEventData, OnMeshUpdated);
		RuntimeObject* L_55 = BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_56 = L_55;
		G_B22_0 = L_56;
		if (L_56)
		{
			G_B23_0 = L_56;
			goto IL_017f;
		}
	}
	{
		return;
	}

IL_017f:
	{
		MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * L_57 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshEventData_19();
		IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var);
		EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * L_58 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var))->get_OnMeshUpdated_22();
		NullCheck(G_B23_0);
		GenericInterfaceActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tE62F1A8F944467A9BAC5FC2B86B1937CE282C276_m6B1F9423866D3742B9985F5C6481EE48F0497780_RuntimeMethod_var, G_B23_0, L_57, L_58);
		// }
		return;
	}

IL_0190:
	{
		// SpatialAwarenessSystem?.HandleEvent(meshEventData, OnMeshAdded);
		RuntimeObject* L_59 = BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_60 = L_59;
		G_B25_0 = L_60;
		if (L_60)
		{
			G_B26_0 = L_60;
			goto IL_019b;
		}
	}
	{
		return;
	}

IL_019b:
	{
		MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * L_61 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 *)__this)->get_meshEventData_19();
		IL2CPP_RUNTIME_CLASS_INIT(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var);
		EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * L_62 = ((BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_StaticFields*)il2cpp_codegen_static_fields_for(BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2_il2cpp_TypeInfo_var))->get_OnMeshAdded_21();
		NullCheck(G_B26_0);
		GenericInterfaceActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t8B4E78AE28DD4277A905D01389ABA7F861AC692E * >::Invoke(IMixedRealityEventSystem_HandleEvent_TisIMixedRealitySpatialAwarenessObservationHandler_1_tE62F1A8F944467A9BAC5FC2B86B1937CE282C276_m6B1F9423866D3742B9985F5C6481EE48F0497780_RuntimeMethod_var, G_B26_0, L_61, L_62);
	}

IL_01ab:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::<RequestMesh>b__16_0(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver_U3CRequestMeshU3Eb__16_0_m7C1667B3C4DF3DDBD5A182A3CDA1EE391FBC1083 (GenericXRSDKSpatialMeshObserver_t4551E6A32F0B8A29D1A294D8BE487044F41D35E4 * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___meshGenerationResult0, const RuntimeMethod* method)
{
	{
		// XRSDKSubsystemHelpers.MeshSubsystem.GenerateMeshAsync(meshId, newMesh.Filter.mesh, newMesh.Collider, MeshVertexAttributes.Normals, (MeshGenerationResult meshGenerationResult) => MeshGenerationAction(meshGenerationResult));
		MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  L_0 = ___meshGenerationResult0;
		GenericXRSDKSpatialMeshObserver_MeshGenerationAction_m8F29FB995D8CDCBFCF93723412ABB0AD304D925A(__this, L_0, /*hidden argument*/NULL);
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
// UnityEngine.Pose Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver_PlayspaceAdapter::Concatenate(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  PlayspaceAdapter_Concatenate_m4CB0DF1DCB8EB8FAFBFBC18604F33D32D53A0F00 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___lhs0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___rhs1, const RuntimeMethod* method)
{
	{
		// return rhs.GetTransformedBy(lhs);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___lhs0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_GetTransformedBy_m494B58D30A020A636F2B457F9042D4423F7A534A((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&___rhs1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver_PlayspaceAdapter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayspaceAdapter_Update_m6519C572B486C548958F6824479CB38A37862487 (PlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayspaceAdapter_Update_m6519C572B486C548958F6824479CB38A37862487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Pose worldFromPlayspace = new Pose(MixedRealityPlayspace.Position, MixedRealityPlayspace.Rotation);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = MixedRealityPlayspace_get_Position_mAA3029CB5BB275F1BB0733098235C8F93E7069B7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = MixedRealityPlayspace_get_Rotation_m6D68EBCC7CC8DAAC5D6236EF3CD3C778601A5F1D(/*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235((&L_2), L_0, L_1, /*hidden argument*/NULL);
		// Pose anchorPose = new Pose(transform.position, transform.rotation);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_5, /*hidden argument*/NULL);
		Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&V_0), L_4, L_6, /*hidden argument*/NULL);
		// Pose parentPose = Concatenate(worldFromPlayspace, anchorPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = V_0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = PlayspaceAdapter_Concatenate_m4CB0DF1DCB8EB8FAFBFBC18604F33D32D53A0F00(L_2, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// transform.parent.position = parentPose.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_9, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_11 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = L_11.get_position_0();
		NullCheck(L_10);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_10, L_12, /*hidden argument*/NULL);
		// transform.parent.rotation = parentPose.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_13, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_15 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = L_15.get_rotation_1();
		NullCheck(L_14);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_14, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver_PlayspaceAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayspaceAdapter__ctor_m24C12998E24B7F5A75A527947EAACF5A40BF56E5 (PlayspaceAdapter_tD33A41A466F2486EF9DD25B2AABD967855032630 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_mE1E8C63B2BFC9F6A7B79C9B72D3B741C8A3EE46B (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController__ctor_mE1E8C63B2BFC9F6A7B79C9B72D3B741C8A3EE46B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected MixedRealityPose CurrentControllerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_0 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline(/*hidden argument*/NULL);
		__this->set_CurrentControllerPose_14(L_0);
		// protected MixedRealityPose LastControllerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_1 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline(/*hidden argument*/NULL);
		__this->set_LastControllerPose_15(L_1);
		// protected Vector3 CurrentControllerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_CurrentControllerPosition_16(L_2);
		// protected Quaternion CurrentControllerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_CurrentControllerRotation_17(L_3);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_4 = ___trackingState0;
		uint8_t L_5 = ___controllerHandedness1;
		RuntimeObject* L_6 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_7 = ___interactions3;
		BaseController__ctor_m1B9B7FF1EE48EC8E8EEA9D2679BA6432D162E91D(__this, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::get_DefaultLeftHandedInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* GenericXRSDKController_get_DefaultLeftHandedInteractions_mCD79DB6BCDFBBD1DA6062E04CA220E93712FC711 (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultLeftHandedInteractions => DefaultInteractions;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::get_DefaultRightHandedInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* GenericXRSDKController_get_DefaultRightHandedInteractions_m25696795B3B435E856D878A1485CEFBD2D518DBA (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, const RuntimeMethod* method)
{
	{
		// public override MixedRealityInteractionMapping[] DefaultRightHandedInteractions => DefaultInteractions;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::SetupDefaultInteractions(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_SetupDefaultInteractions_m5B59E525896F575179D53F4538BB4641F1AE9004 (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, uint8_t ___controllerHandedness0, const RuntimeMethod* method)
{
	{
		// AssignControllerMappings(DefaultInteractions);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		BaseController_AssignControllerMappings_m999C4431FC011A1E40A40B9E03C07A2653697E89(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_mB272A041BA289A65A61EAAEA5E3387DBD8E9A169 (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateController_mB272A041BA289A65A61EAAEA5E3387DBD8E9A169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	RuntimeObject* G_B22_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	RuntimeObject* G_B27_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B38_0 = NULL;
	int32_t G_B38_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B40_0;
	memset((&G_B40_0), 0, sizeof(G_B40_0));
	int32_t G_B40_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0 = BaseController_get_Enabled_m1745360C36A79CB48529477A21EDDC91066F01E4_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// if (Interactions == null)
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_1 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError($"No interaction configuration for {GetType().Name}");
		Type_t * L_2 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBEC3A1EB621F66A9977AE9420F50B054C58D000C, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_4, /*hidden argument*/NULL);
		// Enabled = false;
		BaseController_set_Enabled_m96A722BD37841DA0220C1D89FDB44B69D71450E6_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// var lastState = TrackingState;
		int32_t L_5 = BaseController_get_TrackingState_m526AAF39D7E7D5F1745E82DEC6C56C5CE43F9F74_inline(__this, /*hidden argument*/NULL);
		// LastControllerPose = CurrentControllerPose;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_6 = __this->get_CurrentControllerPose_14();
		__this->set_LastControllerPose_15(L_6);
		// IsPositionAvailable = inputDevice.TryGetFeatureValue(CommonUsages.devicePosition, out CurrentControllerPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_7 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_devicePosition_19();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_CurrentControllerPosition_16();
		bool L_9 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_7, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8, /*hidden argument*/NULL);
		BaseController_set_IsPositionAvailable_m09D7C41D7C22C84C2E7AA799444D60E3F78D94CA_inline(__this, L_9, /*hidden argument*/NULL);
		// IsPositionApproximate = false;
		BaseController_set_IsPositionApproximate_m7D405F980EF51B3295738C78DD5F297CD3CF0EEA_inline(__this, (bool)0, /*hidden argument*/NULL);
		// IsRotationAvailable = inputDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out CurrentControllerRotation);
		InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_10 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_deviceRotation_44();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_11 = __this->get_address_of_CurrentControllerRotation_17();
		bool L_12 = InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_10, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_11, /*hidden argument*/NULL);
		BaseController_set_IsRotationAvailable_mB578444FA1E712ED43BD62B1F1C88C9587BF17DB_inline(__this, L_12, /*hidden argument*/NULL);
		// TrackingState = (IsPositionAvailable || IsRotationAvailable) ? TrackingState.Tracked : TrackingState.NotTracked;
		bool L_13 = BaseController_get_IsPositionAvailable_m37A26FCDCEB93FA94B6273580CA3215A5573A12C_inline(__this, /*hidden argument*/NULL);
		G_B5_0 = __this;
		G_B5_1 = L_5;
		if (L_13)
		{
			G_B7_0 = __this;
			G_B7_1 = L_5;
			goto IL_008f;
		}
	}
	{
		bool L_14 = BaseController_get_IsRotationAvailable_mFD7EA8BEA56B693321B065AE3E904936939264B6_inline(__this, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (L_14)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_008f;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0090;
	}

IL_008f:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0090:
	{
		NullCheck(G_B8_1);
		BaseController_set_TrackingState_m70CADF0EDEF0CCFB1E12DCD63833A6E0FC8749D6_inline(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// CurrentControllerPosition = MixedRealityPlayspace.TransformPoint(CurrentControllerPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_CurrentControllerPosition_16();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = MixedRealityPlayspace_TransformPoint_m4AB5ECB400274F917090B9B7DF16EEE4181A7E63(L_15, /*hidden argument*/NULL);
		__this->set_CurrentControllerPosition_16(L_16);
		// CurrentControllerRotation = MixedRealityPlayspace.Rotation * CurrentControllerRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = MixedRealityPlayspace_get_Rotation_m6D68EBCC7CC8DAAC5D6236EF3CD3C778601A5F1D(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = __this->get_CurrentControllerRotation_17();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_17, L_18, /*hidden argument*/NULL);
		__this->set_CurrentControllerRotation_17(L_19);
		// CurrentControllerPose.Position = CurrentControllerPosition;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_20 = __this->get_address_of_CurrentControllerPose_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_CurrentControllerPosition_16();
		MixedRealityPose_set_Position_mDC7B6E71466E46635F9A73B5B1D02F6EB00E7F6D_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_20, L_21, /*hidden argument*/NULL);
		// CurrentControllerPose.Rotation = CurrentControllerRotation;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_22 = __this->get_address_of_CurrentControllerPose_14();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = __this->get_CurrentControllerRotation_17();
		MixedRealityPose_set_Rotation_m1CEB8B06A88D3471B078233EC7409E652604A2C6_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_22, L_23, /*hidden argument*/NULL);
		// if (lastState != TrackingState)
		int32_t L_24 = BaseController_get_TrackingState_m526AAF39D7E7D5F1745E82DEC6C56C5CE43F9F74_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)G_B8_2) == ((int32_t)L_24)))
		{
			goto IL_0103;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourceTrackingStateChanged(InputSource, this, TrackingState);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_26 = L_25;
		G_B10_0 = L_26;
		if (L_26)
		{
			G_B11_0 = L_26;
			goto IL_00f1;
		}
	}
	{
		goto IL_0103;
	}

IL_00f1:
	{
		RuntimeObject* L_27 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		int32_t L_28 = BaseController_get_TrackingState_m526AAF39D7E7D5F1745E82DEC6C56C5CE43F9F74_inline(__this, /*hidden argument*/NULL);
		NullCheck(G_B11_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceTrackingStateChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.TrackingState) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B11_0, L_27, __this, L_28);
	}

IL_0103:
	{
		// if (TrackingState == TrackingState.Tracked && LastControllerPose != CurrentControllerPose)
		int32_t L_29 = BaseController_get_TrackingState_m526AAF39D7E7D5F1745E82DEC6C56C5CE43F9F74_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_01b0;
		}
	}
	{
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_30 = __this->get_LastControllerPose_15();
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_31 = __this->get_CurrentControllerPose_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		bool L_32 = MixedRealityPose_op_Inequality_mF9AF9547DF046D38EFFEA5C9724C9E74AC693BC2(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_01b0;
		}
	}
	{
		// if (IsPositionAvailable && IsRotationAvailable)
		bool L_33 = BaseController_get_IsPositionAvailable_m37A26FCDCEB93FA94B6273580CA3215A5573A12C_inline(__this, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0154;
		}
	}
	{
		bool L_34 = BaseController_get_IsRotationAvailable_mFD7EA8BEA56B693321B065AE3E904936939264B6_inline(__this, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0154;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, CurrentControllerPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_35 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_36 = L_35;
		G_B17_0 = L_36;
		if (L_36)
		{
			G_B18_0 = L_36;
			goto IL_0140;
		}
	}
	{
		goto IL_01b0;
	}

IL_0140:
	{
		RuntimeObject* L_37 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_38 = __this->get_CurrentControllerPose_14();
		NullCheck(G_B18_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B18_0, L_37, __this, L_38);
		// }
		goto IL_01b0;
	}

IL_0154:
	{
		// else if (IsPositionAvailable && !IsRotationAvailable)
		bool L_39 = BaseController_get_IsPositionAvailable_m37A26FCDCEB93FA94B6273580CA3215A5573A12C_inline(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0183;
		}
	}
	{
		bool L_40 = BaseController_get_IsRotationAvailable_mFD7EA8BEA56B693321B065AE3E904936939264B6_inline(__this, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0183;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, CurrentControllerPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_41 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_42 = L_41;
		G_B22_0 = L_42;
		if (L_42)
		{
			G_B23_0 = L_42;
			goto IL_016f;
		}
	}
	{
		goto IL_01b0;
	}

IL_016f:
	{
		RuntimeObject* L_43 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = __this->get_CurrentControllerPosition_16();
		NullCheck(G_B23_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B23_0, L_43, __this, L_44);
		// }
		goto IL_01b0;
	}

IL_0183:
	{
		// else if (!IsPositionAvailable && IsRotationAvailable)
		bool L_45 = BaseController_get_IsPositionAvailable_m37A26FCDCEB93FA94B6273580CA3215A5573A12C_inline(__this, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_01b0;
		}
	}
	{
		bool L_46 = BaseController_get_IsRotationAvailable_mFD7EA8BEA56B693321B065AE3E904936939264B6_inline(__this, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01b0;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourceRotationChanged(InputSource, this, CurrentControllerRotation);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_47 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_48 = L_47;
		G_B27_0 = L_48;
		if (L_48)
		{
			G_B28_0 = L_48;
			goto IL_019e;
		}
	}
	{
		goto IL_01b0;
	}

IL_019e:
	{
		RuntimeObject* L_49 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = __this->get_CurrentControllerRotation_17();
		NullCheck(G_B28_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B28_0, L_49, __this, L_50);
	}

IL_01b0:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_0 = 0;
		goto IL_0230;
	}

IL_01b4:
	{
		// switch (Interactions[i].AxisType)
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_51 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		int32_t L_55 = MixedRealityInteractionMapping_get_AxisType_mAE0180DF9562DF8326BE1B2AECAFAF97C57195BA_inline(L_54, /*hidden argument*/NULL);
		V_1 = L_55;
		int32_t L_56 = V_1;
		switch (L_56)
		{
			case 0:
			{
				goto IL_022c;
			}
			case 1:
			{
				goto IL_022c;
			}
			case 2:
			{
				goto IL_01ea;
			}
			case 3:
			{
				goto IL_01fb;
			}
			case 4:
			{
				goto IL_020c;
			}
			case 5:
			{
				goto IL_022c;
			}
			case 6:
			{
				goto IL_022c;
			}
			case 7:
			{
				goto IL_021d;
			}
		}
	}
	{
		goto IL_022c;
	}

IL_01ea:
	{
		// UpdateButtonData(Interactions[i], inputDevice);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_57 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_61 = ___inputDevice0;
		VirtActionInvoker2< MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_60, L_61);
		// break;
		goto IL_022c;
	}

IL_01fb:
	{
		// UpdateSingleAxisData(Interactions[i], inputDevice);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_62 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		int32_t L_63 = V_0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_66 = ___inputDevice0;
		VirtActionInvoker2< MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_65, L_66);
		// break;
		goto IL_022c;
	}

IL_020c:
	{
		// UpdateDualAxisData(Interactions[i], inputDevice);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_67 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_71 = ___inputDevice0;
		VirtActionInvoker2< MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_70, L_71);
		// break;
		goto IL_022c;
	}

IL_021d:
	{
		// UpdatePoseData(Interactions[i], inputDevice);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_72 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		int32_t L_73 = V_0;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_76 = ___inputDevice0;
		VirtActionInvoker2< MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice) */, __this, L_75, L_76);
	}

IL_022c:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_77 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0230:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_78 = V_0;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_79 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_80 = L_79;
		G_B38_0 = L_80;
		G_B38_1 = L_78;
		if (L_80)
		{
			G_B39_0 = L_80;
			G_B39_1 = L_78;
			goto IL_0246;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_81 = V_3;
		G_B40_0 = L_81;
		G_B40_1 = G_B38_1;
		goto IL_024d;
	}

IL_0246:
	{
		NullCheck(G_B39_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_82), (((int32_t)((int32_t)(((RuntimeArray*)G_B39_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B40_0 = L_82;
		G_B40_1 = G_B39_1;
	}

IL_024d:
	{
		V_2 = G_B40_0;
		int32_t L_83 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_84 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B40_1) < ((int32_t)L_83))? 1 : 0)&(int32_t)L_84)))
		{
			goto IL_01b4;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_mA7E332C82474EE6484E571E8B4AD80021A677541 (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateButtonData_mA7E332C82474EE6484E571E8B4AD80021A677541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		// if (interactionMapping.InputType == DeviceInputType.TriggerTouch
		//     && inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_0 = ___interactionMapping0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_2 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_trigger_15();
		bool L_3 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_2, (float*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// interactionMapping.BoolData = !Mathf.Approximately(triggerData, 0.0f);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_4 = ___interactionMapping0;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_6 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_5, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		MixedRealityInteractionMapping_set_BoolData_mC6CF728534F6405CA91C7EF5F0D27DE1C5F1F363(L_4, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		goto IL_009a;
	}

IL_0030:
	{
		// switch (interactionMapping.InputType)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_7 = ___interactionMapping0;
		NullCheck(L_7);
		int32_t L_8 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)18))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_10 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)22))))
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_005e;
			}
			case 4:
			{
				goto IL_0086;
			}
			case 5:
			{
				goto IL_0076;
			}
		}
	}
	{
		return;
	}

IL_005e:
	{
		// buttonUsage = CommonUsages.triggerButton;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_11 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_triggerButton_6();
		V_1 = L_11;
		// break;
		goto IL_0087;
	}

IL_0066:
	{
		// buttonUsage = CommonUsages.primary2DAxisTouch;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_12 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
		V_1 = L_12;
		// break;
		goto IL_0087;
	}

IL_006e:
	{
		// buttonUsage = CommonUsages.primary2DAxisClick;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_13 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
		V_1 = L_13;
		// break;
		goto IL_0087;
	}

IL_0076:
	{
		// buttonUsage = CommonUsages.menuButton;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_14 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_menuButton_7();
		V_1 = L_14;
		// break;
		goto IL_0087;
	}

IL_007e:
	{
		// buttonUsage = CommonUsages.secondary2DAxisClick;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_15 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
		V_1 = L_15;
		// break;
		goto IL_0087;
	}

IL_0086:
	{
		// return;
		return;
	}

IL_0087:
	{
		// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_16 = V_1;
		bool L_17 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_16, (bool*)(&V_2), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		// interactionMapping.BoolData = buttonPressed;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_18 = ___interactionMapping0;
		bool L_19 = V_2;
		NullCheck(L_18);
		MixedRealityInteractionMapping_set_BoolData_mC6CF728534F6405CA91C7EF5F0D27DE1C5F1F363(L_18, L_19, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_20 = ___interactionMapping0;
		NullCheck(L_20);
		bool L_21 = MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ed;
		}
	}
	{
		// if (interactionMapping.BoolData)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_22 = ___interactionMapping0;
		NullCheck(L_22);
		bool L_23 = MixedRealityInteractionMapping_get_BoolData_m61EB4EE67167224A146BB32011E10545E5B9E814_inline(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00cc;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_25 = L_24;
		G_B17_0 = L_25;
		if (L_25)
		{
			G_B18_0 = L_25;
			goto IL_00b4;
		}
	}
	{
		return;
	}

IL_00b4:
	{
		RuntimeObject* L_26 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_27 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_28 = ___interactionMapping0;
		NullCheck(L_28);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_29 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_28, /*hidden argument*/NULL);
		NullCheck(G_B18_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B18_0, L_26, L_27, L_29);
		// }
		return;
	}

IL_00cc:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_30 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_31 = L_30;
		G_B20_0 = L_31;
		if (L_31)
		{
			G_B21_0 = L_31;
			goto IL_00d6;
		}
	}
	{
		return;
	}

IL_00d6:
	{
		RuntimeObject* L_32 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_33 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_34 = ___interactionMapping0;
		NullCheck(L_34);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_35 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_34, /*hidden argument*/NULL);
		NullCheck(G_B21_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B21_0, L_32, L_33, L_35);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateSingleAxisData_mB7502F6974FCB7C018B819E4C3642948D0FC740E (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateSingleAxisData_mB7502F6974FCB7C018B819E4C3642948D0FC740E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	{
		// switch (interactionMapping.InputType)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_0 = ___interactionMapping0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b6;
		}
	}
	{
		// if (inputDevice.TryGetFeatureValue(CommonUsages.gripButton, out bool buttonPressed))
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_4 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_gripButton_5();
		bool L_5 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// interactionMapping.BoolData = buttonPressed;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_6 = ___interactionMapping0;
		bool L_7 = V_1;
		NullCheck(L_6);
		MixedRealityInteractionMapping_set_BoolData_mC6CF728534F6405CA91C7EF5F0D27DE1C5F1F363(L_6, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_8 = ___interactionMapping0;
		NullCheck(L_8);
		bool L_9 = MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// if (interactionMapping.BoolData)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_10 = ___interactionMapping0;
		NullCheck(L_10);
		bool L_11 = MixedRealityInteractionMapping_get_BoolData_m61EB4EE67167224A146BB32011E10545E5B9E814_inline(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_13 = L_12;
		G_B7_0 = L_13;
		if (L_13)
		{
			G_B8_0 = L_13;
			goto IL_0049;
		}
	}
	{
		goto IL_0084;
	}

IL_0049:
	{
		RuntimeObject* L_14 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_15 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_16 = ___interactionMapping0;
		NullCheck(L_16);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_17 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_16, /*hidden argument*/NULL);
		NullCheck(G_B8_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B8_0, L_14, L_15, L_17);
		// }
		goto IL_0084;
	}

IL_0062:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_18 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_006d;
		}
	}
	{
		goto IL_0084;
	}

IL_006d:
	{
		RuntimeObject* L_20 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_21 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_22 = ___interactionMapping0;
		NullCheck(L_22);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_23 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_22, /*hidden argument*/NULL);
		NullCheck(G_B11_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B11_0, L_20, L_21, L_23);
	}

IL_0084:
	{
		// if (inputDevice.TryGetFeatureValue(CommonUsages.grip, out float buttonData))
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_24 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_grip_16();
		bool L_25 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_24, (float*)(&V_2), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00b7;
		}
	}
	{
		// interactionMapping.FloatData = buttonData;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_26 = ___interactionMapping0;
		float L_27 = V_2;
		NullCheck(L_26);
		MixedRealityInteractionMapping_set_FloatData_m09BDB71E1766CC2BC415B72168C6D86F52BAFAC6(L_26, L_27, /*hidden argument*/NULL);
		// break;
		goto IL_00b7;
	}

IL_009d:
	{
		// if (inputDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerData))
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_28 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_trigger_15();
		bool L_29 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_28, (float*)(&V_3), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00b7;
		}
	}
	{
		// interactionMapping.FloatData = triggerData;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_30 = ___interactionMapping0;
		float L_31 = V_3;
		NullCheck(L_30);
		MixedRealityInteractionMapping_set_FloatData_m09BDB71E1766CC2BC415B72168C6D86F52BAFAC6(L_30, L_31, /*hidden argument*/NULL);
		// break;
		goto IL_00b7;
	}

IL_00b6:
	{
		// return;
		return;
	}

IL_00b7:
	{
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_32 = ___interactionMapping0;
		NullCheck(L_32);
		bool L_33 = MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00e6;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseFloatInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.FloatData);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_34 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_35 = L_34;
		G_B19_0 = L_35;
		if (L_35)
		{
			G_B20_0 = L_35;
			goto IL_00c9;
		}
	}
	{
		return;
	}

IL_00c9:
	{
		RuntimeObject* L_36 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_37 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_38 = ___interactionMapping0;
		NullCheck(L_38);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_39 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_38, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_40 = ___interactionMapping0;
		NullCheck(L_40);
		float L_41 = MixedRealityInteractionMapping_get_FloatData_mDBD89893476DC46DFC16A83CC254272EFCE19B69_inline(L_40, /*hidden argument*/NULL);
		NullCheck(G_B20_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , float >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseFloatInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Single) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B20_0, L_36, L_37, L_39, L_41);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m1F3E75047CAFF011D399F9A5E98E948F9B2E45FF (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdateDualAxisData_m1F3E75047CAFF011D399F9A5E98E948F9B2E45FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		// switch (interactionMapping.InputType)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_0 = ___interactionMapping0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)17))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)21))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_0012:
	{
		// axisUsage = CommonUsages.secondary2DAxis;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_4 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
		V_0 = L_4;
		// break;
		goto IL_0020;
	}

IL_001a:
	{
		// axisUsage = CommonUsages.primary2DAxis;
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_5 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
		V_0 = L_5;
	}

IL_0020:
	{
		// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
		InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_6 = V_0;
		bool L_7 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_6, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// interactionMapping.Vector2Data = axisData;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_8 = ___interactionMapping0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_1;
		NullCheck(L_8);
		MixedRealityInteractionMapping_set_Vector2Data_m51050074CB9CE1A50ACDD5E47A74888971E0A6DE(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_10 = ___interactionMapping0;
		NullCheck(L_10);
		bool L_11 = MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_13 = L_12;
		G_B9_0 = L_13;
		if (L_13)
		{
			G_B10_0 = L_13;
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		RuntimeObject* L_14 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_15 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_16 = ___interactionMapping0;
		NullCheck(L_16);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_17 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_16, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_18 = ___interactionMapping0;
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = MixedRealityInteractionMapping_get_Vector2Data_m2FF2745E797CE3165DFEE9120A00908E8782D62E_inline(L_18, /*hidden argument*/NULL);
		NullCheck(G_B10_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B10_0, L_14, L_15, L_17, L_19);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_mCA63D4BE6511D7C4130A601A4684888CA4A1F6D9 (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * __this, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericXRSDKController_UpdatePoseData_mCA63D4BE6511D7C4130A601A4684888CA4A1F6D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// switch (interactionMapping.InputType)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_0 = ___interactionMapping0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0047;
		}
	}
	{
		// interactionMapping.PoseData = CurrentControllerPose;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_3 = ___interactionMapping0;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_4 = __this->get_CurrentControllerPose_14();
		NullCheck(L_3);
		MixedRealityInteractionMapping_set_PoseData_mF685F64DD474073262130DFCF89470AD49AF8E6E(L_3, L_4, /*hidden argument*/NULL);
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_5 = ___interactionMapping0;
		NullCheck(L_5);
		bool L_6 = MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		RuntimeObject* L_9 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(__this, /*hidden argument*/NULL);
		uint8_t L_10 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_11 = ___interactionMapping0;
		NullCheck(L_11);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_12 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_11, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_13 = ___interactionMapping0;
		NullCheck(L_13);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_14 = MixedRealityInteractionMapping_get_PoseData_mEC612D2648DD0687A780D4884E4D0C966B217A5A_inline(L_13, /*hidden argument*/NULL);
		NullCheck(G_B4_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B4_0, L_9, L_10, L_12, L_14);
	}

IL_0047:
	{
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m65DA4E734F55BCE2E9B4DDAE147D3C5819968596 (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager__ctor_m65DA4E734F55BCE2E9B4DDAE147D3C5819968596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> inputDevices = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_0 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_0, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_inputDevices_12(L_0);
		// private readonly List<InputDevice> lastInputDevices = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_1 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_1, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_lastInputDevices_13(L_1);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_2 = ___inputSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_5 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t356B253FA33CF98FC7A39CEC5696B49114A67D7B_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_mC1D32C720A7299C03AA4AC7FAECC901F8EB496C4(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSDKDeviceManager_CheckCapability_m678CBBE8EFE74C5CD32E51F51E84CFF5F4EAA64F (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// return (capability == MixedRealityCapability.MotionController);
		int32_t L_0 = ___capability0;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m5E5DE38CADBB46005354001206F26B2CF2FC7540 (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_Update_m5E5DE38CADBB46005354001206F26B2CF2FC7540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * V_2 = NULL;
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	{
		// base.Update();
		BaseService_Update_m2F9F37D69C6F16A3D427DECCCE089A63EDA5160D(__this, /*hidden argument*/NULL);
		// if (XRSDKSubsystemHelpers.InputSubsystem == null || !XRSDKSubsystemHelpers.InputSubsystem.running)
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_1 = XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Controller, inputDevices);
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_3 = __this->get_inputDevices_12();
		InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577(((int32_t)64), L_3, /*hidden argument*/NULL);
		// foreach (InputDevice device in inputDevices)
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_4 = __this->get_inputDevices_12();
		NullCheck(L_4);
		Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  L_5 = List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733(L_4, /*hidden argument*/List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008c;
		}

IL_0035:
		{
			// foreach (InputDevice device in inputDevices)
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_6 = Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var);
			V_1 = L_6;
			// if (device.isValid)
			bool L_7 = InputDevice_get_isValid_mE3289A300EC9C35B2570C561ED671D3B0FB49030((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_1), /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_008c;
			}
		}

IL_0046:
		{
			// GenericXRSDKController controller = GetOrAddController(device);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_8 = V_1;
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_9 = VirtFuncInvoker1< GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(35 /* Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice) */, __this, L_8);
			V_2 = L_9;
			// if (controller == null)
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_10 = V_2;
			if (!L_10)
			{
				goto IL_008c;
			}
		}

IL_0051:
		{
			// if (!lastInputDevices.Contains(device))
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_11 = __this->get_lastInputDevices_13();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_12 = V_1;
			NullCheck(L_11);
			bool L_13 = List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D(L_11, L_12, /*hidden argument*/List_1_Contains_mBD7EC3EB30A013318CA4E0135A6D10CEB2D86D7D_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0078;
			}
		}

IL_005f:
		{
			// CoreServices.InputSystem?.RaiseSourceDetected(controller.InputSource, controller);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
			RuntimeObject* L_14 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
			RuntimeObject* L_15 = L_14;
			G_B9_0 = L_15;
			if (L_15)
			{
				G_B10_0 = L_15;
				goto IL_006a;
			}
		}

IL_0067:
		{
			goto IL_008c;
		}

IL_006a:
		{
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_16 = V_2;
			NullCheck(L_16);
			RuntimeObject* L_17 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(L_16, /*hidden argument*/NULL);
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_18 = V_2;
			NullCheck(G_B10_0);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B10_0, L_17, L_18);
			// }
			goto IL_008c;
		}

IL_0078:
		{
			// lastInputDevices.Remove(device);
			List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_19 = __this->get_lastInputDevices_13();
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_20 = V_1;
			NullCheck(L_19);
			List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2(L_19, L_20, /*hidden argument*/List_1_Remove_m14446F4465851A7C7D0F871D6830ACAAD54C69A2_RuntimeMethod_var);
			// controller.UpdateController(device);
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_21 = V_2;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_22 = V_1;
			NullCheck(L_21);
			VirtActionInvoker1< InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice) */, L_21, L_22);
		}

IL_008c:
		{
			// foreach (InputDevice device in inputDevices)
			bool L_23 = Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0035;
			}
		}

IL_0095:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(151)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		// foreach (InputDevice device in lastInputDevices)
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_24 = __this->get_lastInputDevices_13();
		NullCheck(L_24);
		Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209  L_25 = List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733(L_24, /*hidden argument*/List_1_GetEnumerator_m91BB08C08395721E22CAE227815CCE7EA0D68733_RuntimeMethod_var);
		V_0 = L_25;
	}

IL_00b1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e8;
		}

IL_00b3:
		{
			// foreach (InputDevice device in lastInputDevices)
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_26 = Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_inline((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_RuntimeMethod_var);
			V_3 = L_26;
			// GenericXRSDKController controller = GetOrAddController(device);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_27 = V_3;
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_28 = VirtFuncInvoker1< GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(35 /* Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice) */, __this, L_27);
			V_4 = L_28;
			// if (controller != null)
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_29 = V_4;
			if (!L_29)
			{
				goto IL_00e8;
			}
		}

IL_00c8:
		{
			// CoreServices.InputSystem?.RaiseSourceLost(controller.InputSource, controller);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
			RuntimeObject* L_30 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
			RuntimeObject* L_31 = L_30;
			G_B19_0 = L_31;
			if (L_31)
			{
				G_B20_0 = L_31;
				goto IL_00d3;
			}
		}

IL_00d0:
		{
			goto IL_00e1;
		}

IL_00d3:
		{
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_32 = V_4;
			NullCheck(L_32);
			RuntimeObject* L_33 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(L_32, /*hidden argument*/NULL);
			GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_34 = V_4;
			NullCheck(G_B20_0);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B20_0, L_33, L_34);
		}

IL_00e1:
		{
			// RemoveController(device);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_35 = V_3;
			VirtActionInvoker1< InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice) */, __this, L_35);
		}

IL_00e8:
		{
			// foreach (InputDevice device in lastInputDevices)
			bool L_36 = Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCA4BB3E256191459D9ABD53DB6105673B146421C_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_00b3;
			}
		}

IL_00f1:
		{
			IL2CPP_LEAVE(0x101, FINALLY_00f3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f3;
	}

FINALLY_00f3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9((Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD8A1DF518B9CADA910CF035E050F73DAE7C40DE9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(243)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(243)
	{
		IL2CPP_JUMP_TBL(0x101, IL_0101)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0101:
	{
		// lastInputDevices.Clear();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_37 = __this->get_lastInputDevices_13();
		NullCheck(L_37);
		List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC(L_37, /*hidden argument*/List_1_Clear_mC502CFD727A3C1060843B7BF1C8F1CC1F183FCDC_RuntimeMethod_var);
		// lastInputDevices.AddRange(inputDevices);
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_38 = __this->get_lastInputDevices_13();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_39 = __this->get_inputDevices_12();
		NullCheck(L_38);
		List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC(L_38, L_39, /*hidden argument*/List_1_AddRange_m5B470607303E6187E55E0B586F474C57C0453FCC_RuntimeMethod_var);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * XRSDKDeviceManager_GetOrAddController_m1E39340C0DCB23E89B78B3D2FD92C5A3ECBECFB9 (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_GetOrAddController_m1E39340C0DCB23E89B78B3D2FD92C5A3ECBECFB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	int32_t V_3 = 0;
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * V_6 = NULL;
	int32_t V_7 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	RuntimeObject* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	int32_t G_B21_1 = 0;
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	{
		// if (ActiveControllers.ContainsKey(inputDevice))
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var);
		Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * L_0 = ((XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var))->get_ActiveControllers_11();
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_1 = ___inputDevice0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m5E00C8D5627E30F47C3639DDF31442EECE7D96ED(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5E00C8D5627E30F47C3639DDF31442EECE7D96ED_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// var controller = ActiveControllers[inputDevice];
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var);
		Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * L_3 = ((XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var))->get_ActiveControllers_11();
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = ___inputDevice0;
		NullCheck(L_3);
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_5 = Dictionary_2_get_Item_m64C4402999BB0496B505350C8C05EDBA622ADB49(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m64C4402999BB0496B505350C8C05EDBA622ADB49_RuntimeMethod_var);
		// return controller;
		return L_5;
	}

IL_0019:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left))
		uint32_t L_6 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = ((uint32_t)((int32_t)256));
		RuntimeObject * L_10 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_9);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_8);
		bool L_11 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_8, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		// controllingHand = Handedness.Left;
		V_0 = 1;
		// }
		goto IL_005d;
	}

IL_003a:
	{
		// else if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
		uint32_t L_12 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_13);
		uint32_t L_15 = ((uint32_t)((int32_t)512));
		RuntimeObject * L_16 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_14);
		bool L_17 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_14, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005b;
		}
	}
	{
		// controllingHand = Handedness.Right;
		V_0 = 2;
		// }
		goto IL_005d;
	}

IL_005b:
	{
		// controllingHand = Handedness.None;
		V_0 = 0;
	}

IL_005d:
	{
		// var currentControllerType = GetCurrentControllerType(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_18 = ___inputDevice0;
		int32_t L_19 = VirtFuncInvoker1< int32_t, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(39 /* Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice) */, __this, L_18);
		V_1 = L_19;
		// Type controllerType = GetControllerType(currentControllerType);
		int32_t L_20 = V_1;
		Type_t * L_21 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(37 /* System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_20);
		V_2 = L_21;
		// InputSourceType inputSourceType = GetInputSourceType(currentControllerType);
		int32_t L_22 = V_1;
		int32_t L_23 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(38 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType) */, __this, L_22);
		V_3 = L_23;
		// IMixedRealityInputSystem inputSystem = Service as IMixedRealityInputSystem;
		RuntimeObject* L_24 = BaseDataProvider_1_get_Service_mDB73949F7D25A8FE0BEB7A77A320B3295C234C1B_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mDB73949F7D25A8FE0BEB7A77A320B3295C234C1B_RuntimeMethod_var);
		// IMixedRealityPointer[] pointers = RequestPointers(currentControllerType, controllingHand);
		int32_t L_25 = V_1;
		uint8_t L_26 = V_0;
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_27 = VirtFuncInvoker2< IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D*, int32_t, uint8_t >::Invoke(31 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointers(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, __this, L_25, L_26);
		V_4 = L_27;
		// IMixedRealityInputSource inputSource = inputSystem?.RequestNewGenericInputSource($"{currentControllerType} Controller {controllingHand}", pointers, inputSourceType);
		RuntimeObject* L_28 = L_24;
		G_B8_0 = L_28;
		if (L_28)
		{
			G_B9_0 = L_28;
			goto IL_008c;
		}
	}
	{
		G_B10_0 = ((RuntimeObject*)(NULL));
		goto IL_00aa;
	}

IL_008c:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(SupportedControllerType_tE62C951555004930200D98F488E2C5615F23BF21_il2cpp_TypeInfo_var, &L_30);
		uint8_t L_32 = V_0;
		uint8_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral25B27DC2BCC839C8D8BCE6F17F582B5C0F269F61, L_31, L_34, /*hidden argument*/NULL);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_36 = V_4;
		int32_t L_37 = V_3;
		NullCheck(G_B9_0);
		RuntimeObject* L_38 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B9_0, L_35, L_36, L_37);
		G_B10_0 = L_38;
	}

IL_00aa:
	{
		V_5 = G_B10_0;
		// if (!(Activator.CreateInstance(controllerType, TrackingState.NotTracked, controllingHand, inputSource, null) is GenericXRSDKController detectedController))
		Type_t * L_39 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_40;
		int32_t L_42 = ((int32_t)1);
		RuntimeObject * L_43 = Box(TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_43);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = L_41;
		uint8_t L_45 = V_0;
		uint8_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_47);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = L_44;
		RuntimeObject* L_49 = V_5;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_49);
		RuntimeObject * L_50 = Activator_CreateInstance_mEE50708E1E8AAD4E5021A2FFDB992DDF65727E17(L_39, L_48, /*hidden argument*/NULL);
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_51 = ((GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *)IsInstClass((RuntimeObject*)L_50, GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0_il2cpp_TypeInfo_var));
		V_6 = L_51;
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		// Debug.LogError($"Failed to create {controllerType.Name} controller");
		Type_t * L_52 = V_2;
		NullCheck(L_52);
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_52);
		String_t* L_54 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralBFC251F0EE7E738E9803C51B96A0610EF66A88F3, L_53, _stringLiteral41DC700A22938E6F7AF528592CEA8E869DAC445E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_54, /*hidden argument*/NULL);
		// return null;
		return (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *)NULL;
	}

IL_00f5:
	{
		// if (!detectedController.SetupConfiguration(controllerType))
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_55 = V_6;
		Type_t * L_56 = V_2;
		NullCheck(L_55);
		bool L_57 = BaseController_SetupConfiguration_mB46E2E0B7EC98BFE15180A95C0B6FA21D12A4C89(L_55, L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_011b;
		}
	}
	{
		// Debug.LogError($"Failed to set up {controllerType.Name} controller");
		Type_t * L_58 = V_2;
		NullCheck(L_58);
		String_t* L_59 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_58);
		String_t* L_60 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralE03A434D5919B3E40AF5E05EDA1CA699757216A3, L_59, _stringLiteral41DC700A22938E6F7AF528592CEA8E869DAC445E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_60, /*hidden argument*/NULL);
		// return null;
		return (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *)NULL;
	}

IL_011b:
	{
		// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
		V_7 = 0;
		goto IL_013c;
	}

IL_0120:
	{
		// detectedController.InputSource.Pointers[i].Controller = detectedController;
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_61 = V_6;
		NullCheck(L_61);
		RuntimeObject* L_62 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_63 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var, L_62);
		int32_t L_64 = V_7;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		RuntimeObject* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_67 = V_6;
		NullCheck(L_66);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, L_66, L_67);
		// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_013c:
	{
		// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
		int32_t L_69 = V_7;
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_70 = V_6;
		NullCheck(L_70);
		RuntimeObject* L_71 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(L_70, /*hidden argument*/NULL);
		RuntimeObject* L_72 = L_71;
		G_B17_0 = L_72;
		G_B17_1 = L_69;
		if (L_72)
		{
			G_B18_0 = L_72;
			G_B18_1 = L_69;
			goto IL_0155;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_73 = V_9;
		G_B21_0 = L_73;
		G_B21_1 = G_B17_1;
		goto IL_0171;
	}

IL_0155:
	{
		NullCheck(G_B18_0);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_74 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var, G_B18_0);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_75 = L_74;
		G_B19_0 = L_75;
		G_B19_1 = G_B18_1;
		if (L_75)
		{
			G_B20_0 = L_75;
			G_B20_1 = G_B18_1;
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_76 = V_9;
		G_B21_0 = L_76;
		G_B21_1 = G_B19_1;
		goto IL_0171;
	}

IL_016a:
	{
		NullCheck(G_B20_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_77), (((int32_t)((int32_t)(((RuntimeArray*)G_B20_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B21_0 = L_77;
		G_B21_1 = G_B20_1;
	}

IL_0171:
	{
		V_8 = G_B21_0;
		int32_t L_78 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_79 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B21_1) < ((int32_t)L_78))? 1 : 0)&(int32_t)L_79)))
		{
			goto IL_0120;
		}
	}
	{
		// ActiveControllers.Add(inputDevice, detectedController);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var);
		Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * L_80 = ((XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var))->get_ActiveControllers_11();
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_81 = ___inputDevice0;
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_82 = V_6;
		NullCheck(L_80);
		Dictionary_2_Add_m901CD9B3EA4AAABA8AA0C0975611C9F39B07AA76(L_80, L_81, L_82, /*hidden argument*/Dictionary_2_Add_m901CD9B3EA4AAABA8AA0C0975611C9F39B07AA76_RuntimeMethod_var);
		// return detectedController;
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_83 = V_6;
		return L_83;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveController_m61222C5265BEC8EFF943D6581DFD3518C96BB985 (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_RemoveController_m61222C5265BEC8EFF943D6581DFD3518C96BB985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * V_0 = NULL;
	{
		// GenericXRSDKController controller = GetOrAddController(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_0 = ___inputDevice0;
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_1 = VirtFuncInvoker1< GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 *, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  >::Invoke(35 /* Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddController(UnityEngine.XR.InputDevice) */, __this, L_0);
		V_0 = L_1;
		// if (controller != null)
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// RecyclePointers(controller.InputSource);
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline(L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject* >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointers(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_4);
		// if (controller.Visualizer != null &&
		//     controller.Visualizer.GameObjectProxy != null)
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = BaseController_get_Visualizer_m8015BD547D081E4F7C2F00B64074DD92B7F9742B_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = BaseController_get_Visualizer_m8015BD547D081E4F7C2F00B64074DD92B7F9742B_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// controller.Visualizer.GameObjectProxy.SetActive(false);
		GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0 * L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = BaseController_get_Visualizer_m8015BD547D081E4F7C2F00B64074DD92B7F9742B_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// ActiveControllers.Remove(inputDevice);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var);
		Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * L_14 = ((XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var))->get_ActiveControllers_11();
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_15 = ___inputDevice0;
		NullCheck(L_14);
		Dictionary_2_Remove_m230DA28D3D94858B033A669473740775C42909FF(L_14, L_15, /*hidden argument*/Dictionary_2_Remove_m230DA28D3D94858B033A669473740775C42909FF_RuntimeMethod_var);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m56F87E2B9EB2698D4E96D2CD062912D48F5303EF (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_GetControllerType_m56F87E2B9EB2698D4E96D2CD062912D48F5303EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(GenericXRSDKController);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (GenericXRSDKController_t026E76505D4F07CCDDB42B63F5A890495822A0F0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mFB41C1226E6D4A6DE197B6C1849B9FA47F0E8165 (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m6B451BFDCA3F014255AA752846D470739453900D (XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager_GetCurrentControllerType_m6B451BFDCA3F014255AA752846D470739453900D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"{inputDevice.name} does not have a defined controller type, falling back to generic controller type");
		String_t* L_0 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralC577C6AB98A4D18F7740145FB4769D96C375A2B2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// return SupportedControllerType.GenericUnity;
		return (int32_t)(((int32_t)64));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__cctor_mDE3D8C6D2A35F2A1BB1E1981DBD37E2901BCD481 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKDeviceManager__cctor_mDE3D8C6D2A35F2A1BB1E1981DBD37E2901BCD481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly Dictionary<InputDevice, GenericXRSDKController> ActiveControllers = new Dictionary<InputDevice, GenericXRSDKController>();
		Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 * L_0 = (Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082 *)il2cpp_codegen_object_new(Dictionary_2_t9F85144DCF5A18D9B4782EB7717A2A07421B9082_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m88EB6E769D9AE85E4AC5635966E9C25671877607(L_0, /*hidden argument*/Dictionary_2__ctor_m88EB6E769D9AE85E4AC5635966E9C25671877607_RuntimeMethod_var);
		((XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKDeviceManager_t8371F9A9DC1F08AD8C3335B0BCCCC756417EE98E_il2cpp_TypeInfo_var))->set_ActiveControllers_11(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem__ctor_m24D820B177654F0A64DE190F80781B5C09F6CFD8 (XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1 * __this, MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE * ___profile0, int32_t ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem__ctor_m24D820B177654F0A64DE190F80781B5C09F6CFD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		__this->set_U3CNameU3Ek__BackingField_43(_stringLiteralED4EE0E0F4814BF1D025F3E41C608E4288258FD9);
		// ExperienceScale scale) : base(profile, scale)
		MixedRealityBoundaryVisualizationProfile_t58072EA327F9C6A76C0B6E3A517B4353F6289BFE * L_0 = ___profile0;
		int32_t L_1 = ___scale1;
		IL2CPP_RUNTIME_CLASS_INIT(BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150_il2cpp_TypeInfo_var);
		BaseBoundarySystem__ctor_mA209A7C7FF21FA178C0ABC5AED0C322DED473220(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSDKBoundarySystem_get_Name_mBB912844E8B31D2685B42609E4814A57F322C1C7 (XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_set_Name_mD7193D11AB6735BF82F2D8E4880C31F89349ED35 (XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "XR SDK Boundary System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_43(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::GetBoundaryGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * XRSDKBoundarySystem_GetBoundaryGeometry_mC1C06F6F0F781BF559E809DE756D03F4D35D3B93 (XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem_GetBoundaryGeometry_mC1C06F6F0F781BF559E809DE756D03F4D35D3B93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	{
		// if (XRSDKSubsystemHelpers.InputSubsystem.GetTrackingOriginMode() != TrackingOriginModeFlags.Floor)
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)NULL;
	}

IL_000f:
	{
		// var boundaryGeometry = new List<Vector3>(0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2(L_2, 0, /*hidden argument*/List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var);
		V_0 = L_2;
		// if (!XRSDKSubsystemHelpers.InputSubsystem.TryGetBoundaryPoints(boundaryGeometry) || boundaryGeometry.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_3 = XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline(/*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = XRInputSubsystem_TryGetBoundaryPoints_m65DBE5495B42A5F3091CB61E05CB07761A0787ED(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_6, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		// return null;
		return (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)NULL;
	}

IL_002d:
	{
		// return boundaryGeometry;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_8 = V_0;
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKBoundarySystem::SetTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKBoundarySystem_SetTrackingSpace_m52DAB6D53F74CC815FF236A666051D4465497804 (XRSDKBoundarySystem_t95EFE0D06C089374BA484DFF52A69BCF4903BDD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKBoundarySystem_SetTrackingSpace_m52DAB6D53F74CC815FF236A666051D4465497804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (Scale)
		int32_t L_0 = BaseBoundarySystem_get_Scale_mCA811E05907C26B47895A15F8CA9C17258DB3D14_inline(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0023:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Floor;
		V_0 = 2;
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// break;
		goto IL_0037;
	}

IL_002b:
	{
		// trackingOriginMode = TrackingOriginModeFlags.Device;
		V_0 = 1;
		// Debug.LogWarning("Unknown / unsupported ExperienceScale. Defaulting to Device tracking space.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral18414638F2486DC587D4197BFFA93F7B78162975, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// bool trackingSpaceSet = XRSDKSubsystemHelpers.InputSubsystem.TrySetTrackingOriginMode(trackingOriginMode);
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_2 = XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline(/*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4(L_2, L_3, /*hidden argument*/NULL);
		// if (!trackingSpaceSet)
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogWarning("Tracking origin unable to be set.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral74CA03DB3497544DC2BE05DE99A6DF69FA715DC5, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
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
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return inputSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = ((XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var))->get_inputSubsystem_0();
		return L_0;
	}
}
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return meshSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_0 = ((XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var))->get_meshSubsystem_1();
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return displaySubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = ((XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var))->get_displaySubsystem_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.XRSDKSubsystemHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKSubsystemHelpers__cctor_m61ACC88D891A368E73299923497520E87B7AFBB6 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_DisplaySubsystem_m29BC8DD68C2C409D068E3B86477422D09E2C73DDMicrosoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return displaySubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = ((XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var))->get_displaySubsystem_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_mCEDEC0F0C68AA50E76A848FADEE65910E3DA39A0_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealitySpatialAwarenessSystem SpatialAwarenessSystem { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSpatialAwarenessSystemU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_MeshSubsystem_mBB834DDD49F078855AC70B3A7AAAC54694471F6DMicrosoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return meshSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_0 = ((XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var))->get_meshSubsystem_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_StartupBehavior_m35303F6B249B97ABD69FA838F2927AB2007997A3_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public AutoStartBehavior StartupBehavior { get; set; } = AutoStartBehavior.AutoStart;
		int32_t L_0 = __this->get_U3CStartupBehaviorU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsRunning_m85C446C58D1C24F8CF89B8D5855A40B2877D59E2_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = __this->get_U3CIsRunningU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_IsRunning_m31435B4F69AA1755718C91F9430CEADE18E6509B_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; protected set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CIsRunningU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float BaseSpatialObserver_get_UpdateInterval_m75F285D2A8EEAEC8B500D512693EFE7534994237_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public float UpdateInterval { get; set; } = 3.5f; // 3.5 seconds
		float L_0 = __this->get_U3CUpdateIntervalU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mCCB17E1362C9A18D305D00FED01344B4AADF588F_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverRotation_m2E27F36B2E33B66C8805316FBA3C44F0DDAA5DA1_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion ObserverRotation { get; set; } = Quaternion.identity;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CObserverRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialObserver_get_IsStationaryObserver_m0F42D6190BEB0F2BF531071EF20E0586570264AE_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsStationaryObserver { get; set; } = false;
		bool L_0 = __this->get_U3CIsStationaryObserverU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObserverOrigin_m75A98FA933A6277BC2F52E7CC41FAD8253F61F57_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CObserverOriginU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_MeshPhysicsLayer_mDC055D9596054044D709C9738E15A9C011A2E142_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method)
{
	{
		// get { return meshPhysicsLayer; }
		int32_t L_0 = __this->get_meshPhysicsLayer_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * BaseSpatialAwarenessObject_get_GameObject_m8A541A8437EF9F6FB4137F1B28B4970F656F108D_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObject_set_Id_m000C2A429EA014753438129B05778FFE1182CF22_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * BaseSpatialAwarenessObject_get_Filter_m2166751D2FED95944A1256A3A75C11E19E64CA97_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter Filter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = __this->get_U3CFilterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * SpatialAwarenessMeshObject_get_Collider_mF2F506EF10DC0D87D66F0F4A0E7D4A07045F5284_inline (SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider Collider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = __this->get_U3CColliderU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_mD4815DE66AAA5E75599F47EDCB77CEAF63FC2923_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_m61D4FF152BC326C6B661E68BF6DC1738957744A2_inline (BaseSpatialObserver_t0F9CDFEDC4C6C18B8C2F675427865D2D2CC7D4E6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CChangeStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	{
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshGenerationResult_get_MeshId_m1113338E0F307CF16B4B4BE21666294DD4D256E1_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method)
{
	{
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_mB2A2937F3CEA5264B977F6FAAD054CE353CDC248_inline (MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialMeshObserver_get_DisplayOption_m51C25D43683F0D8F81FA645E6D9A3A67D962A518_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method)
{
	{
		// get { return displayOption; }
		int32_t L_0 = __this->get_displayOption_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * BaseSpatialAwarenessObject_get_Renderer_m1530531510AF0AB4ACCC31C943AF12055D4D5D05_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer Renderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_U3CRendererU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_OcclusionMaterial_m0BD016733EDBE136F930451879E02DC054AAB610_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method)
{
	{
		// get { return occlusionMaterial; }
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_occlusionMaterial_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * BaseSpatialMeshObserver_get_VisibleMaterial_m1ED9BCEA634B6B343CF23C7084184A4268ED9102_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method)
{
	{
		// get { return visibleMaterial; }
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_visibleMaterial_31();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseSpatialMeshObserver_get_RecalculateNormals_m027857347283133EA9290A80C8761E57F3BCD760_inline (BaseSpatialMeshObserver_tC6DF59A07ECB7CE1D7AF179EBE14B1015A5228B2 * __this, const RuntimeMethod* method)
{
	{
		// public bool RecalculateNormals { get; set; } = true;
		bool L_0 = __this->get_U3CRecalculateNormalsU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialAwarenessObject_get_Id_m286E34F68516928BDBDC756AFFB1F19282457C40_inline (BaseSpatialAwarenessObject_t473B32C72207C3A427CE9806FF81CC9478B5B47E * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603ADMicrosoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_0 = ((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m1745360C36A79CB48529477A21EDDC91066F01E4_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_Enabled_m96A722BD37841DA0220C1D89FDB44B69D71450E6_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnabledU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseController_get_TrackingState_m526AAF39D7E7D5F1745E82DEC6C56C5CE43F9F74_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = __this->get_U3CTrackingStateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m09D7C41D7C22C84C2E7AA799444D60E3F78D94CA_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionApproximate_m7D405F980EF51B3295738C78DD5F297CD3CF0EEA_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionApproximate { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionApproximateU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_mB578444FA1E712ED43BD62B1F1C88C9587BF17DB_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m37A26FCDCEB93FA94B6273580CA3215A5573A12C_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_mFD7EA8BEA56B693321B065AE3E904936939264B6_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_TrackingState_m70CADF0EDEF0CCFB1E12DCD63833A6E0FC8749D6_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingState TrackingState { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTrackingStateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mDC7B6E71466E46635F9A73B5B1D02F6EB00E7F6D_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1CEB8B06A88D3471B078233EC7409E652604A2C6_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mAE0180DF9562DF8326BE1B2AECAFAF97C57195BA_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->get_axisType_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m61EB4EE67167224A146BB32011E10545E5B9E814_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mDBD89893476DC46DFC16A83CC254272EFCE19B69_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// return floatData;
		float L_0 = __this->get_floatData_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_m2FF2745E797CE3165DFEE9120A00908E8782D62E_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityInteractionMapping_get_PoseData_mEC612D2648DD0687A780D4884E4D0C966B217A5A_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSDKSubsystemHelpers_get_InputSubsystem_mA17C38FF6265798E7ABB4CD3E45E011C58536C98Microsoft_MixedReality_Toolkit_Providers_XRSDK_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return inputSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = ((XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_StaticFields*)il2cpp_codegen_static_fields_for(XRSDKSubsystemHelpers_tA587BAA9B83AB131C65A9414A67A8B2807EAEE71_il2cpp_TypeInfo_var))->get_inputSubsystem_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_Visualizer_m8015BD547D081E4F7C2F00B64074DD92B7F9742B_inline (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityControllerVisualizer Visualizer { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CVisualizerU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseBoundarySystem_get_Scale_mCA811E05907C26B47895A15F8CA9C17258DB3D14_inline (BaseBoundarySystem_t3BAE1996C7E2C94EDB8CBB013D38BBA15EF46150 * __this, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->get_U3CScaleU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m85464A223A08FE9B9563E1726C743808C76543F5_gshared_inline (Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  Enumerator_get_Current_mE5B4EF6A9E544E65107B16E16E8F2129462AF513_gshared_inline (Enumerator_t4B833E672787728911247E2AEB72A7542B6BFA9D * __this, const RuntimeMethod* method)
{
	{
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_0 = (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  Enumerator_get_Current_m26B4857EE9F243467E9B8815BE63BDFCB049DCBF_gshared_inline (Enumerator_t9FA9683806C03D52F0DD9EDBFC90D58DCDEF8209 * __this, const RuntimeMethod* method)
{
	{
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_0 = (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_mEFB456406C0344B47A72CC235952096A261A7DCE_gshared_inline (BaseDataProvider_1_tB988343BFD94F876141BBD8CA84993978D8E498B * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
