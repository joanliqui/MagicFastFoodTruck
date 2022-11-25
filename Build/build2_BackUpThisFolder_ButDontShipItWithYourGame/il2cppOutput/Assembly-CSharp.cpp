#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<BaseFood>
struct List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Tool>
struct List_1_t4A7E22F035C733FFF9566825931A05E236FB1590;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>
struct List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<MagicBox/IngredientBox>
struct List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500;
// System.Collections.Generic.List`1<WorkingTable/TableSockets>
struct List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<BaseFood>
struct UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<BaseFood>
struct UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// BaseFood[]
struct BaseFoodU5BU5D_tBE3210C70C6A622A9C19EC644FA7BEB6A07E66C3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// MagicBox/IngredientBox[]
struct IngredientBoxU5BU5D_tDE368E08A4A43C0C1E7EB96E63C205443F883AB6;
// WorkingTable/TableSockets[]
struct TableSocketsU5BU5D_t110D7A3658DFA64F865CF424B70A79EE4EA23AD8;
// UnityEngine.XR.ARCore.ARCoreLoader
struct ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// BaseFood
struct BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9;
// BaseGazeInteractable
struct BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeMaterial
struct ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Electrodomestico
struct Electrodomestico_t577E715D42E73D84EB0474C226B662296E6FBA4D;
// FoodTruckObject
struct FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE;
// Fridge
struct Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GazeInteractable
struct GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F;
// GazeInteractableFood
struct GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627;
// GazeInteractor
struct GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F;
// GazeReticle
struct GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IPickeable
struct IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// IngredientListManager
struct IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5;
// Ingrediente
struct Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62;
// IngredienteCortable
struct IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// MagicBox
struct MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModeSelectionManager
struct ModeSelectionManager_t155A5F652866A02756406962667DC2EE3BB60DA4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PCController
struct PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PickablesManager
struct PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB;
// PlateSO
struct PlateSO_t33D10CF8644191A75DF0BA02BF565D0E2782813F;
// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE;
// RecipeSO
struct RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tool
struct Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WorkingTable
struct WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// XRLoadersController
struct XRLoadersController_tF6222DD0D6AC89215B0291DD514B577536B0B2D3;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// XRPluginManager
struct XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625;
// Fridge/<CloseFridge>d__6
struct U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249;
// GazeInteractable/<WaitToExit_Coroutine>d__27
struct U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29;
// GazeInteractable/OnActivated
struct OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940;
// GazeInteractableFood/<WaitToExit_Coroutine>d__24
struct U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E;
// MagicBox/IngredientBox
struct IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerInput/IPlayerActions
struct IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C;
// WorkingTable/TableSockets
struct TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187;
// XRPluginManager/<StartXRCoroutine>d__5
struct U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA1D0683F7DE5D73162F9AC67273D17FF9EF817;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD584950D49ADC46EE9CF8BB41B6AF5BC18A64;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA55B43DFC3FC1771C79DBB3EB9016B70D4B99A;
IL2CPP_EXTERN_C String_t* _stringLiteral20BBFFE256CC81A3D1C4980B8DB8C6DDE6034AC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2123FB38C4BF9FCC7C8605302157A06C5C580142;
IL2CPP_EXTERN_C String_t* _stringLiteral2F34ED1E5C83343BCFB4951B87B9E182ABE3213F;
IL2CPP_EXTERN_C String_t* _stringLiteral3452E6B674AEBA1EDCE7FDA6D0E4A1433FF92AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral384923F1FF34572E3B31849C2ACBC2B3A1F437E5;
IL2CPP_EXTERN_C String_t* _stringLiteral462F74A91ECB5795679DF09049977C1B312BAC70;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral4BC3C356492D369B4B5A804209FAF105B6185F8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5EBACCE79F1C5A0D42BB1143254BD1BF103CE24D;
IL2CPP_EXTERN_C String_t* _stringLiteral6B514E260236F16463F3E75F706DCC5449640861;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral87D3E7CC2BB97B6A2FF81E2211D514D25E0C375F;
IL2CPP_EXTERN_C String_t* _stringLiteral8E13C5B9553BFAC2017091FA2189D5FF81EB4D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E3CD9B9C86629918DEA4000AA1DB20D92F42AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral8F144B64E450318973F968AB20E67D244AA46EC4;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA572517D7A7BA4173D590CDA9AA6814A230E518F;
IL2CPP_EXTERN_C String_t* _stringLiteralA6985A249DBB50FEB1EB1D555044119E1B717CB1;
IL2CPP_EXTERN_C String_t* _stringLiteralAD95D0951F05836BF1ED12F2D28166CDA12539CB;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5EA8D52CE753D0240BDBE2A71565065D4AF287;
IL2CPP_EXTERN_C String_t* _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD843F8CB7A71AE6EED4CC1F174E7A518E2766AE9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA03EE7A6B6182F572CD1B7E82FDAB39DCDC97DE;
IL2CPP_EXTERN_C String_t* _stringLiteralF9B329A08C5256C079D0ACCB2AE4CF6624B76EE7;
IL2CPP_EXTERN_C String_t* _stringLiteralFB31C9E5CA11F7A6899801BC940865C23A25A4A1;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7ABB3BCA0E46D0CC2AECD980946A9F8064BC95;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m9B2CF4196314C8061ACB98A30601CDD7A50903E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC_mF1203F74183B61A1BD30C619D9115ACA6EF9219A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m55B6300557317FCCDF6C3E28F7B0B1730FF28DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2C1D405ECE4C41256074C35005473C0C56423FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0498A87C19340402BC4B535788788FCCCFB57FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m07852AD6D767DD6AA17149C42C54C3C7DC930B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m5DDFA49B54016518ABAC2CE23BD17805D35D0517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A_mA277EF274BAE2F4A15A5AAC9C525E064E85A306C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_m7D2F572AB10A1BE8F8C834977968A7FABD8C601E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_mFA2B608B2B51BB3ED36BA7B6105AE34E6D284096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m42C6BE201FFAB04F19FDEA59A917B76126D7795F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IngredienteCortable_Activated_mE9A73BF4676B7C050C581384BA6562822ADE9FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ingrediente_InteractWithIngredient_mDC30048673CC0634F14F3CE80FB0C028C604E7AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m59C7CFC6ECD7EDD7474256CC091A3A18A0E715AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2BE80BE8D3EF01E33AB912D8CAFB73E89771ECAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4EC07A9C2ED0C4652550482B713A36464D3C4BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0DF9903C952F19753D158B7A98CC06D6F6CE2101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m977CFD76CB7B5757348047A9F000370F238C4E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PCController_Interact_mD306D93F5F6BE4C948BAFD918E312FB94187F0D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCloseFridgeU3Ed__6_System_Collections_IEnumerator_Reset_m7C6A01D67C96B0B7D28AA8B4EC7311AB6A2AFAB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mE2F77CFB4F97A4457E656E107BFF74DA0D35EB59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitToExit_CoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m39BD56D5A653CDB65D33A10624AAAA5C10818C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitToExit_CoroutineU3Ed__27_System_Collections_IEnumerator_Reset_m61771CE8AFA25E9C212084CCA1B1005F085BFDE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<BaseFood>
struct List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseFoodU5BU5D_tBE3210C70C6A622A9C19EC644FA7BEB6A07E66C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseFoodU5BU5D_tBE3210C70C6A622A9C19EC644FA7BEB6A07E66C3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MagicBox/IngredientBox>
struct List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IngredientBoxU5BU5D_tDE368E08A4A43C0C1E7EB96E63C205443F883AB6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IngredientBoxU5BU5D_tDE368E08A4A43C0C1E7EB96E63C205443F883AB6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WorkingTable/TableSockets>
struct List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TableSocketsU5BU5D_t110D7A3658DFA64F865CF424B70A79EE4EA23AD8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TableSocketsU5BU5D_t110D7A3658DFA64F865CF424B70A79EE4EA23AD8* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// PlayerInput
struct PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset PlayerInput::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap PlayerInput::m_Player
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Player_1;
	// PlayerInput/IPlayerActions PlayerInput::m_PlayerActionsCallbackInterface
	RuntimeObject* ___m_PlayerActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_Player_View
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_View_3;
	// UnityEngine.InputSystem.InputAction PlayerInput::m_Player_Interact
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Interact_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Fridge/<CloseFridge>d__6
struct U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249  : public RuntimeObject
{
	// System.Int32 Fridge/<CloseFridge>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fridge/<CloseFridge>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fridge Fridge/<CloseFridge>d__6::<>4__this
	Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* ___U3CU3E4__this_2;
};

// GazeInteractable/<WaitToExit_Coroutine>d__27
struct U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29  : public RuntimeObject
{
	// System.Int32 GazeInteractable/<WaitToExit_Coroutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GazeInteractable/<WaitToExit_Coroutine>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GazeInteractor GazeInteractable/<WaitToExit_Coroutine>d__27::interactor
	GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor_2;
	// GazeInteractable GazeInteractable/<WaitToExit_Coroutine>d__27::<>4__this
	GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* ___U3CU3E4__this_3;
};

// GazeInteractableFood/<WaitToExit_Coroutine>d__24
struct U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E  : public RuntimeObject
{
	// System.Int32 GazeInteractableFood/<WaitToExit_Coroutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GazeInteractableFood/<WaitToExit_Coroutine>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GazeInteractor GazeInteractableFood/<WaitToExit_Coroutine>d__24::interactor
	GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor_2;
	// GazeInteractableFood GazeInteractableFood/<WaitToExit_Coroutine>d__24::<>4__this
	GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* ___U3CU3E4__this_3;
};

// MagicBox/IngredientBox
struct IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514  : public RuntimeObject
{
	// System.Boolean MagicBox/IngredientBox::isIn
	bool ___isIn_0;
	// BaseFood MagicBox/IngredientBox::ingredient
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___ingredient_1;
};

// WorkingTable/TableSockets
struct TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187  : public RuntimeObject
{
	// UnityEngine.Transform WorkingTable/TableSockets::socketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___socketTransform_0;
	// System.Boolean WorkingTable/TableSockets::isFull
	bool ___isFull_1;
};

// XRPluginManager/<StartXRCoroutine>d__5
struct U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4  : public RuntimeObject
{
	// System.Int32 XRPluginManager/<StartXRCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object XRPluginManager/<StartXRCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// XRPluginManager XRPluginManager/<StartXRCoroutine>d__5::<>4__this
	XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* ___U3CU3E4__this_2;
	// System.Boolean XRPluginManager/<StartXRCoroutine>d__5::<initSuccess>5__1
	bool ___U3CinitSuccessU3E5__1_3;
	// System.Boolean XRPluginManager/<StartXRCoroutine>d__5::<startSuccess>5__2
	bool ___U3CstartSuccessU3E5__2_4;
};

// System.Collections.Generic.List`1/Enumerator<BaseFood>
struct Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<MagicBox/IngredientBox>
struct Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Events.UnityEvent`1<BaseFood>
struct UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// PlayerInput/PlayerActions
struct PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 
{
	// PlayerInput PlayerInput/PlayerActions::m_Wrapper
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of PlayerInput/PlayerActions
struct PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke
{
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___m_Wrapper_0;
};
// Native definition for COM marshalling of PlayerInput/PlayerActions
struct PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com
{
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___m_Wrapper_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<BaseFood>
struct UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_11;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// PickablesManager
struct PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<BaseFood> PickablesManager::allIngredients
	List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927* ___allIngredients_4;
	// System.Collections.Generic.List`1<Tool> PickablesManager::allTools
	List_1_t4A7E22F035C733FFF9566825931A05E236FB1590* ___allTools_5;
};

// PlateSO
struct PlateSO_t33D10CF8644191A75DF0BA02BF565D0E2782813F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String PlateSO::plateName
	String_t* ___plateName_4;
	// UnityEngine.GameObject PlateSO::playePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playePrefab_5;
	// UnityEngine.Texture2D PlateSO::recipeSprite
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___recipeSprite_6;
};

// RecipeSO
struct RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// PlateSO RecipeSO::plate
	PlateSO_t33D10CF8644191A75DF0BA02BF565D0E2782813F* ___plate_4;
	// System.Collections.Generic.List`1<BaseFood> RecipeSO::ingredients
	List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927* ___ingredients_5;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// GazeInteractable/OnActivated
struct OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// UnityEngine.XR.ARCore.ARCoreLoader
struct ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
};

struct ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_SessionSubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SessionSubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_CameraSubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_CameraSubsystemDescriptors_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_DepthSubsystemDescriptors
	List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* ___s_DepthSubsystemDescriptors_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_PlaneSubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_PlaneSubsystemDescriptors_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_AnchorSubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_AnchorSubsystemDescriptors_9;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_RaycastSubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_RaycastSubsystemDescriptors_10;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_ImageTrackingSubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_ImageTrackingSubsystemDescriptors_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_InputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___s_InputSubsystemDescriptors_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_FaceSubsystemDescriptors
	List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* ___s_FaceSubsystemDescriptors_13;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_EnvironmentProbeSubsystemDescriptors
	List_1_tDE8C3B426AF72FF013BD4E2E4C4660F30F1371DB* ___s_EnvironmentProbeSubsystemDescriptors_14;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor> UnityEngine.XR.ARCore.ARCoreLoader::s_OcclusionSubsystemDescriptors
	List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* ___s_OcclusionSubsystemDescriptors_15;
};

// BaseGazeInteractable
struct BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean BaseGazeInteractable::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_4;
};

// ChangeMaterial
struct ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ChangeMaterial::enterMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___enterMat_4;
	// UnityEngine.Material ChangeMaterial::activatedMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___activatedMat_5;
	// UnityEngine.Material ChangeMaterial::originalMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMat_6;
	// UnityEngine.MeshRenderer ChangeMaterial::rend
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___rend_7;
};

// FoodTruckObject
struct FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material FoodTruckObject::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_4;
};

// GazeInteractor
struct GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GazeInteractor::maxDetectionDistance
	float ___maxDetectionDistance_4;
	// System.Single GazeInteractor::minDetectionDistance
	float ___minDetectionDistance_5;
	// System.Single GazeInteractor::_timeToActivate
	float ____timeToActivate_6;
	// UnityEngine.LayerMask GazeInteractor::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_7;
	// UnityEngine.Ray GazeInteractor::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_8;
	// UnityEngine.RaycastHit GazeInteractor::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_9;
	// System.Single GazeInteractor::_enterStartTime
	float ____enterStartTime_10;
	// UnityEngine.GameObject GazeInteractor::_reticlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____reticlePrefab_11;
	// GazeReticle GazeInteractor::_reticle
	GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* ____reticle_12;
	// BaseGazeInteractable GazeInteractor::interactable
	BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* ___interactable_13;
	// System.Boolean GazeInteractor::canInteract
	bool ___canInteract_14;
};

// GazeReticle
struct GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas GazeReticle::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_4;
	// UnityEngine.UI.Image GazeReticle::_imageProgress
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____imageProgress_5;
	// System.Single GazeReticle::_scale
	float ____scale_6;
	// GazeInteractor GazeReticle::_interactor
	GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ____interactor_7;
};

// IngredientListManager
struct IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PickablesManager IngredientListManager::pickablesManager
	PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB* ___pickablesManager_5;
};

struct IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields
{
	// IngredientListManager IngredientListManager::_instance
	IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* ____instance_4;
};

// Inventory
struct Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// IPickeable Inventory::_pickableObject
	RuntimeObject* ____pickableObject_4;
	// GazeInteractor Inventory::interactor
	GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor_5;
	// Tool Inventory::cntTool
	Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* ___cntTool_6;
	// UnityEngine.Transform Inventory::socketObj
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___socketObj_7;
	// UnityEngine.Material Inventory::holoMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___holoMat_8;
	// UnityEngine.MeshFilter Inventory::inventoryObjectModel
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___inventoryObjectModel_9;
};

// ModeSelectionManager
struct ModeSelectionManager_t155A5F652866A02756406962667DC2EE3BB60DA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PCController
struct PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PCController::mouseSensitivity
	float ___mouseSensitivity_4;
	// PlayerInput PCController::inputs
	PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___inputs_5;
	// UnityEngine.Vector2 PCController::mouseLook
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mouseLook_6;
	// UnityEngine.Transform PCController::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_7;
	// UnityEngine.Transform PCController::camBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camBody_8;
	// System.Single PCController::xRotation
	float ___xRotation_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// XRLoadersController
struct XRLoadersController_tF6222DD0D6AC89215B0291DD514B577536B0B2D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent XRLoadersController::onStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStart_4;
};

// XRPluginManager
struct XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARCore.ARCoreLoader XRPluginManager::arCoreLoader
	ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72* ___arCoreLoader_4;
	// UnityEngine.XR.Management.XRLoader XRPluginManager::m_SelectedXRLoader
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___m_SelectedXRLoader_5;
};

// BaseFood
struct BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9  : public FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE
{
	// System.String BaseFood::foodName
	String_t* ___foodName_6;
	// Inventory BaseFood::inventory
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inventory_7;
	// System.Boolean BaseFood::isInTable
	bool ___isInTable_8;
};

// Electrodomestico
struct Electrodomestico_t577E715D42E73D84EB0474C226B662296E6FBA4D  : public FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE
{
};

// GazeInteractable
struct GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F  : public BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC
{
	// GazeInteractable/OnActivated GazeInteractable::Activated
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* ___Activated_6;
	// System.Boolean GazeInteractable::_isActivable
	bool ____isActivable_7;
	// System.Single GazeInteractable::_exitDelay
	float ____exitDelay_8;
	// UnityEngine.Events.UnityEvent GazeInteractable::OnGazeEnter
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeEnter_9;
	// UnityEngine.Events.UnityEvent GazeInteractable::OnGazeStay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeStay_10;
	// UnityEngine.Events.UnityEvent GazeInteractable::OnGazeExit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeExit_11;
	// UnityEngine.Events.UnityEvent GazeInteractable::OnGazeActivated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeActivated_12;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> GazeInteractable::OnGazeToggle
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___OnGazeToggle_13;
	// UnityEngine.Collider GazeInteractable::col
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col_14;
	// System.Boolean GazeInteractable::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_15;
};

// GazeInteractableFood
struct GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627  : public BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC
{
	// System.Boolean GazeInteractableFood::_isActivable
	bool ____isActivable_6;
	// System.Single GazeInteractableFood::_exitDelay
	float ____exitDelay_7;
	// UnityEngine.Events.UnityEvent`1<BaseFood> GazeInteractableFood::OnGazeEnter
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* ___OnGazeEnter_8;
	// UnityEngine.Events.UnityEvent`1<BaseFood> GazeInteractableFood::OnGazeStay
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* ___OnGazeStay_9;
	// UnityEngine.Events.UnityEvent GazeInteractableFood::OnGazeExit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeExit_10;
	// UnityEngine.Events.UnityEvent`1<BaseFood> GazeInteractableFood::OnGazeActivated
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* ___OnGazeActivated_11;
	// UnityEngine.Collider GazeInteractableFood::col
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col_12;
	// Inventory GazeInteractableFood::inventory
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inventory_13;
	// BaseFood GazeInteractableFood::food
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food_14;
	// System.Boolean GazeInteractableFood::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// MagicBox
struct MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324  : public FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE
{
	// RecipeSO MagicBox::currentRecipe
	RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE* ___currentRecipe_6;
	// Inventory MagicBox::inventory
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inventory_7;
	// GazeInteractableFood MagicBox::gazeInteractable
	GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* ___gazeInteractable_8;
	// System.Collections.Generic.List`1<MagicBox/IngredientBox> MagicBox::acceptedIngredients
	List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* ___acceptedIngredients_9;
	// UnityEngine.Transform MagicBox::buildSocket
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___buildSocket_10;
};

// Tool
struct Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B  : public FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE
{
	// System.String Tool::toolName
	String_t* ___toolName_6;
	// System.Single Tool::scaleModel
	float ___scaleModel_7;
	// UnityEngine.Transform Tool::rotator
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotator_8;
	// Inventory Tool::inventory
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inventory_9;
	// GazeInteractable Tool::interactable
	GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* ___interactable_10;
	// UnityEngine.Vector3 Tool::givingScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___givingScale_11;
};

// WorkingTable
struct WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF  : public FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE
{
	// GazeInteractableFood WorkingTable::interactable
	GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* ___interactable_6;
	// System.Collections.Generic.List`1<WorkingTable/TableSockets> WorkingTable::sockets
	List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* ___sockets_7;
	// Inventory WorkingTable::inv
	Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* ___inv_8;
};

// Fridge
struct Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0  : public Electrodomestico_t577E715D42E73D84EB0474C226B662296E6FBA4D
{
	// UnityEngine.Animator Fridge::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_6;
	// System.Boolean Fridge::isOpen
	bool ___isOpen_7;
	// UnityEngine.Collider Fridge::col
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col_8;
	// UnityEngine.GameObject[] Fridge::doors
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___doors_9;
};

// Ingrediente
struct Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62  : public BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9
{
	// UnityEngine.GameObject Ingrediente::modelObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modelObject_9;
	// GazeInteractable Ingrediente::interactable
	GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* ___interactable_10;
};

// IngredienteCortable
struct IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642  : public BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9
{
	// System.Boolean IngredienteCortable::canBeCuted
	bool ___canBeCuted_9;
	// System.String IngredienteCortable::neededTool
	String_t* ___neededTool_10;
	// UnityEngine.GameObject IngredienteCortable::modelObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modelObject_11;
	// UnityEngine.GameObject IngredienteCortable::cutedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cutedObject_12;
	// GazeInteractable IngredienteCortable::interactable
	GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* ___interactable_13;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator XRPluginManager::StartXRCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRPluginManager_StartXRCoroutine_m93ADF57BAF7F4414B73ED2A1A257ACB0D8DEC13A (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void XRPluginManager/<StartXRCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRCoroutineU3Ed__5__ctor_m6F006DC8A1502F5B0774C467EFDADEECF0802299 (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void FoodTruckObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429 (FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fridge::CloseFridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Fridge_CloseFridge_m57EBC4F5270876FB62E897931A0CAA0B072603A1 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, const RuntimeMethod* method) ;
// System.Void Fridge/<CloseFridge>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseFridgeU3Ed__6__ctor_m5FECCDA565CF739761B88C18E011EDC259C62D43 (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Electrodomestico::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Electrodomestico__ctor_m75A1AEE92B4BA0BABE320E152AF9C29485984547 (Electrodomestico_t577E715D42E73D84EB0474C226B662296E6FBA4D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Fridge::EnableCollider(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge_EnableCollider_m924283576CC14129DB840C0EFAADC0417826D9AF (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void BaseFood::SetInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_SetInventory_mEBA6BC08DBF5A442BDA7A6E6B47CB99469EB0679 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Inventory>()
inline Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<BaseFood>()
inline BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* Component_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m9B2CF4196314C8061ACB98A30601CDD7A50903E7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void BaseFood::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_Start_mB838CC462315CF68F4F1B6E541E3110911080A16 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<GazeInteractable>()
inline GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Ingrediente::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ingrediente_Pick_mD9457FE044408912769D5581A113CFF6728099DA (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) ;
// System.Void Inventory::CleanInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Inventory::AddToInventory(IPickeable,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddToInventory_mB9B17F590A1C11573F16EA36122BF73B123B4EB6 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, RuntimeObject* ___pick0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMat3, const RuntimeMethod* method) ;
// System.Void BaseFood::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood__ctor_mB3998127FD9758FA9C710BE33169E20AF6813689 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Tool Inventory::get_CntTool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* Inventory_get_CntTool_mBFAA9897C74E716BFDD2D1D7C1113FB76D0E7469_inline (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) ;
// System.Boolean Tool::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tool_Equals_m94D323AAE38DFFD94FEDD78DF23C340E9F12D01C (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void IngredienteCortable::Cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Cut_m3B19CAF171D529F0FEEF2F72AA77EFA21767A37C (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) ;
// System.Void IngredienteCortable::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Pick_m53F4ABBE4E71E666B8118A5CA16995C10A131F41 (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m54E891D837D238AD3700E7554AA565E69A7BC983 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<GazeInteractableFood>()
inline GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<BaseFood>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEFF442E5890FCC0268EEFBACFA2A7D70BF3C5EF6 (UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<BaseFood>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3 (UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* __this, UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6*, UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void MagicBox::UpdateIngredientBoxList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_UpdateIngredientBoxList_m2F4769DD6B000E84BAD08646ED4DCF5044C1D6C8 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) ;
// System.Boolean MagicBox::CheckIfInRecipe(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagicBox_CheckIfInRecipe_m2E25D3E27E803F760FA9BC7DDFE7F771C08B2A77 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___ingrediente0, const RuntimeMethod* method) ;
// System.Void MagicBox::CheckCompletedRecipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_CheckCompletedRecipe_mC9FBA629F4A416B5323760D107ED82A8109B0C71 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MagicBox/IngredientBox>::GetEnumerator()
inline Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42 (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 (*) (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<MagicBox/IngredientBox>::Dispose()
inline void Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9 (Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<MagicBox/IngredientBox>::get_Current()
inline IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_inline (Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2* __this, const RuntimeMethod* method)
{
	return ((  IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* (*) (Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<MagicBox/IngredientBox>::MoveNext()
inline bool Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1 (Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<MagicBox/IngredientBox>::get_Count()
inline int32_t List_1_get_Count_m977CFD76CB7B5757348047A9F000370F238C4E51_inline (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void MagicBox::SpawnFoodBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_SpawnFoodBuild_m3126F52BF35811196FB1234AFCDB8507B9E5C6F7 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void MagicBox::IngredientInside(MagicBox/IngredientBox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_IngredientInside_m3B3BB0FEB60654EE0BC7C22C667C6AA756CE3411 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* ___ing0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String BaseFood::get_FoodName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BaseFood_get_FoodName_m766A2D5EE13416680299D82B3DFF26AB96289BD5_inline (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MagicBox/IngredientBox>::.ctor()
inline void List_1__ctor_m4EC07A9C2ED0C4652550482B713A36464D3C4BBC (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<BaseFood>::GetEnumerator()
inline Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109 List_1_GetEnumerator_m2BE80BE8D3EF01E33AB912D8CAFB73E89771ECAD (List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109 (*) (List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BaseFood>::Dispose()
inline void Enumerator_Dispose_m55B6300557317FCCDF6C3E28F7B0B1730FF28DF4 (Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<BaseFood>::get_Current()
inline BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* Enumerator_get_Current_m0498A87C19340402BC4B535788788FCCCFB57FDD_inline (Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109* __this, const RuntimeMethod* method)
{
	return ((  BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* (*) (Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void MagicBox/IngredientBox::.ctor(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredientBox__ctor_mE84D5D20360C936215D58A759CB9C51B899719F8 (IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___ingredient0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MagicBox/IngredientBox>::Add(T)
inline void List_1_Add_m59C7CFC6ECD7EDD7474256CC091A3A18A0E715AE_inline (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* __this, IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500*, IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BaseFood>::MoveNext()
inline bool Enumerator_MoveNext_m2C1D405ECE4C41256074C35005473C0C56423FCF (Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void GazeInteractable::InvokeExit(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_InvokeExit_mB10BD555846D7434EC21FD4F205FE48E09EAF534 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) ;
// System.Void GazeInteractable/<WaitToExit_Coroutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__27__ctor_m8B88C37A51909892DD1B49570BF88368F362087C (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Void BaseGazeInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGazeInteractable__ctor_mCE14A3C520E1584B981A3CBDD83CBC003A475349 (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, const RuntimeMethod* method) ;
// BaseFood Inventory::GetCurrentObjectAsFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* Inventory_GetCurrentObjectAsFood_m0F9DA834CC532718507D8DD2EB050504533EAF4C (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<BaseFood>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058 (UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6*, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void GazeInteractableFood::InvokeExit(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_InvokeExit_m208F4FF9222FD98A095FC99DFB45DBDB441FC5C4 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) ;
// System.Void GazeInteractableFood/<WaitToExit_Coroutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__24__ctor_mF6859A21EEE0BA34DC287DE7B4D419016D708743 (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<GazeReticle>()
inline GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* GameObject_GetComponent_TisGazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A_mA277EF274BAE2F4A15A5AAC9C525E064E85A306C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GazeReticle::SetInteractor(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetInteractor_mD0C664C0BAC66D884D658076803DEE0DB087AEDF (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void GazeReticle::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Enable_m2C1B8F11B4AA0FE65FD35C786E12DCB8C163A87A (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void GazeInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Reset_m7878C0974CD46E7CE46584EBE62FC19B9392CE61 (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void GazeReticle::PointerOnGaze(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_PointerOnGaze_mA3C1F9F87B80159A86CE8BEA8E6B80EFBBA219F8 (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitPoint0, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BaseGazeInteractable>()
inline BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* Component_GetComponent_TisBaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC_mF1203F74183B61A1BD30C619D9115ACA6EF9219A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void GazeReticle::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetProgress_m0BB1EEC25524B09F34E0A3256ED097F5E063D6D7 (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, float ___progress0, const RuntimeMethod* method) ;
// System.Void GazeReticle::PointerOutGaze(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_PointerOutGaze_m488A3C11BEF646A0E79AA34BF8DF52D2179275C1 (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, float ___maxDistance0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GazeReticle::CalculateReticlePosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GazeReticle_CalculateReticlePosition_m5BC86C58D2C97F34C61FAD6675AAD3265D9A3E2D (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<Tool>(T&)
inline bool GameObject_TryGetComponent_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m42C6BE201FFAB04F19FDEA59A917B76126D7795F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void Inventory::EnableModel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_EnableModel_m828AFF13D40AC9BD334939FFCD59AF51A21FB319 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void Inventory::set_PickableObject(IPickeable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_set_PickableObject_mB3D1B1FA67F9814A9DF5A2BC85E9A0B6CB8A016A (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponentInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m07852AD6D767DD6AA17149C42C54C3C7DC930B04 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<IPickeable>()
inline RuntimeObject* GameObject_GetComponent_TisIPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_m7D2F572AB10A1BE8F8C834977968A7FABD8C601E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<BaseFood>()
inline BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* GameObject_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m5DDFA49B54016518ABAC2CE23BD17805D35D0517 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<BaseFood>(T&)
inline bool GameObject_TryGetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_mFA2B608B2B51BB3ED36BA7B6105AE34E6D284096 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Void PlayerInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Enable_mE3EC3D4631D753DB2B6EEA9FF407DC0CA920A2E5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Disable_m9DA10D3B65ECD087D0C78E77A9719D31F1EC23ED (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// PlayerInput/PlayerActions PlayerInput::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInput/PlayerActions::get_Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInput/PlayerActions::get_View()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset PlayerInput::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetEnumerator_m718C2FBF1A4AE370122B0CBA506776EBF2A0C4A6 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::.ctor(PlayerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap PlayerInput/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerInput/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInput/PlayerActions::SetCallbacks(PlayerInput/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void Inventory::AddToInventory(IPickeable,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddToInventory_m3BD19A2163655D7ADADE6BA68D16416B4FC3BCBB (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, RuntimeObject* ___pick0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void WorkingTable::SetFoodOnTable(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkingTable_SetFoodOnTable_m25E6A880114362378A2A19AD2EFBA2B03470D909 (WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<WorkingTable/TableSockets>::get_Item(System.Int32)
inline TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB (List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* (*) (List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void BaseFood::AvtivateComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_AvtivateComponents_m5B4DBCEAFFEA310BBF14692C87603D0B7B597DA3 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<WorkingTable/TableSockets>::get_Count()
inline int32_t List_1_get_Count_m0DF9903C952F19753D158B7A98CC06D6F6CE2101_inline (List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void ModeSelectionManager::PlayeVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionManager_PlayeVR_mB8CFA8949B3FC3B06B1608173FA5F97E8D23CC84 (ModeSelectionManager_t155A5F652866A02756406962667DC2EE3BB60DA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA1D0683F7DE5D73162F9AC67273D17FF9EF817);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VR");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0EA1D0683F7DE5D73162F9AC67273D17FF9EF817, NULL);
		// }
		return;
	}
}
// System.Void ModeSelectionManager::PlayAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionManager_PlayAR_mDE5C02FC79D272C855E7E5720D167694CDA7817D (ModeSelectionManager_t155A5F652866A02756406962667DC2EE3BB60DA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BC3C356492D369B4B5A804209FAF105B6185F8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("AR");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4BC3C356492D369B4B5A804209FAF105B6185F8B, NULL);
		// }
		return;
	}
}
// System.Void ModeSelectionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionManager__ctor_mFCCA701880CD7B40A8DEC608D9F17542ECA19778 (ModeSelectionManager_t155A5F652866A02756406962667DC2EE3BB60DA4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void XRLoadersController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoadersController_Start_m52B2DB7625A17B73FD74D043054F639EE9D9176F (XRLoadersController_tF6222DD0D6AC89215B0291DD514B577536B0B2D3* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// onStart?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onStart_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void XRLoadersController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoadersController__ctor_m6B4ABC10CE5001F30233D702008FB66F3497418B (XRLoadersController_tF6222DD0D6AC89215B0291DD514B577536B0B2D3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void XRPluginManager::InicializeXRLoader(UnityEngine.XR.Management.XRLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPluginManager_InicializeXRLoader_mCECBBA9D4E79022977B03959CB397A4273599848 (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___loader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E3CD9B9C86629918DEA4000AA1DB20D92F42AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA572517D7A7BA4173D590CDA9AA6814A230E518F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA03EE7A6B6182F572CD1B7E82FDAB39DCDC97DE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool initSucces = loader.Initialize();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = ___loader0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_0);
		V_0 = L_1;
		// if (!initSucces)
		bool L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Error initializing GoogleCarboard loader.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8E3CD9B9C86629918DEA4000AA1DB20D92F42AE3, NULL);
		goto IL_004f;
	}

IL_001f:
	{
		// Debug.Log("Start GoogleCarboard loader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA572517D7A7BA4173D590CDA9AA6814A230E518F, NULL);
		// bool startSuccess = loader.Start();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_4 = ___loader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.XR.Management.XRLoader::Start() */, L_4);
		V_2 = L_5;
		// if (!startSuccess)
		bool L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("Error starting GoogleCarboard loader.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDA03EE7A6B6182F572CD1B7E82FDAB39DCDC97DE, NULL);
		// loader.Deinitialize();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8 = ___loader0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_8);
	}

IL_004e:
	{
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void XRPluginManager::InicializeARCoreLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPluginManager_InicializeARCoreLoader_m9AA03825F0D347846CC69AE03835044F7017064A (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F34ED1E5C83343BCFB4951B87B9E182ABE3213F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EBACCE79F1C5A0D42BB1143254BD1BF103CE24D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB31C9E5CA11F7A6899801BC940865C23A25A4A1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool initSucces = arCoreLoader.Initialize();
		ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72* L_0 = __this->___arCoreLoader_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_0);
		V_0 = L_1;
		// if (!initSucces)
		bool L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.LogError("Error initializing ARCore loader.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFB31C9E5CA11F7A6899801BC940865C23A25A4A1, NULL);
		goto IL_005e;
	}

IL_0024:
	{
		// Debug.Log("Start ARCore loader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5EBACCE79F1C5A0D42BB1143254BD1BF103CE24D, NULL);
		// bool startSuccess = arCoreLoader.Start();
		ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72* L_4 = __this->___arCoreLoader_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.XR.Management.XRLoader::Start() */, L_4);
		V_2 = L_5;
		// if (!startSuccess)
		bool L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// Debug.LogError("Error starting ARCore loader.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2F34ED1E5C83343BCFB4951B87B9E182ABE3213F, NULL);
		// arCoreLoader.Deinitialize();
		ARCoreLoader_t14046898389C7A78C47EAC92490AD4A6EB7A1E72* L_8 = __this->___arCoreLoader_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_8);
	}

IL_005d:
	{
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void XRPluginManager::StartXR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPluginManager_StartXR_m7EEC2C703B6A40C079AB9EEAAAC640FD32FA26BD (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, int32_t ___loaderIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_SelectedXRLoader == null)
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___m_SelectedXRLoader_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// m_SelectedXRLoader = XRGeneralSettings.Instance.Manager.activeLoaders[loaderIndex];
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_4, NULL);
		int32_t L_6 = ___loaderIndex0;
		NullCheck(L_5);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
		L_7 = InterfaceFuncInvoker1< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>::get_Item(System.Int32) */, IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A_il2cpp_TypeInfo_var, L_5, L_6);
		__this->___m_SelectedXRLoader_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SelectedXRLoader_5), (void*)L_7);
	}

IL_002e:
	{
		// StartCoroutine(StartXRCoroutine());
		RuntimeObject* L_8;
		L_8 = XRPluginManager_StartXRCoroutine_m93ADF57BAF7F4414B73ED2A1A257ACB0D8DEC13A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator XRPluginManager::StartXRCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRPluginManager_StartXRCoroutine_m93ADF57BAF7F4414B73ED2A1A257ACB0D8DEC13A (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* L_0 = (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4*)il2cpp_codegen_object_new(U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRCoroutineU3Ed__5__ctor_m6F006DC8A1502F5B0774C467EFDADEECF0802299(L_0, 0, NULL);
		U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void XRPluginManager::StopSubsystemXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPluginManager_StopSubsystemXR_mC93A9B636B781923E7580711C57CECA1413DF18B (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20BBFFE256CC81A3D1C4980B8DB8C6DDE6034AC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR stopped completely.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral20BBFFE256CC81A3D1C4980B8DB8C6DDE6034AC2, NULL);
		// }
		return;
	}
}
// System.Void XRPluginManager::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPluginManager_StopXR_mA9902C82199F3EF8E4EDAE6749B9B160C6781B15 (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384923F1FF34572E3B31849C2ACBC2B3A1F437E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E13C5B9553BFAC2017091FA2189D5FF81EB4D8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR Loader...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8E13C5B9553BFAC2017091FA2189D5FF81EB4D8D, NULL);
		// m_SelectedXRLoader.Stop();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___m_SelectedXRLoader_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.XR.Management.XRLoader::Stop() */, L_0);
		// m_SelectedXRLoader.Deinitialize();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_2 = __this->___m_SelectedXRLoader_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_2);
		// m_SelectedXRLoader = null;
		__this->___m_SelectedXRLoader_5 = (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SelectedXRLoader_5), (void*)(XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976*)NULL);
		// Debug.Log("XR Loader stopped completely.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral384923F1FF34572E3B31849C2ACBC2B3A1F437E5, NULL);
		// }
		return;
	}
}
// System.Void XRPluginManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPluginManager__ctor_mB492EFAADE9F4BD528EC7B3C207D510F373E9371 (XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void XRPluginManager/<StartXRCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRCoroutineU3Ed__5__ctor_m6F006DC8A1502F5B0774C467EFDADEECF0802299 (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void XRPluginManager/<StartXRCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRCoroutineU3Ed__5_System_IDisposable_Dispose_mA4A12C6AC9307B5044C1C98943DE61B8C25C5E9A (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean XRPluginManager/<StartXRCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRCoroutineU3Ed__5_MoveNext_mADF5F90C288417055D0F97B361D9126A13DD7764 (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA55B43DFC3FC1771C79DBB3EB9016B70D4B99A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462F74A91ECB5795679DF09049977C1B312BAC70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD843F8CB7A71AE6EED4CC1F174E7A518E2766AE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B329A08C5256C079D0ACCB2AE4CF6624B76EE7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_007c;
	}

IL_001f:
	{
		goto IL_00c2;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Init XR loader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD843F8CB7A71AE6EED4CC1F174E7A518E2766AE9, NULL);
		// var initSuccess = m_SelectedXRLoader.Initialize();
		XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_3 = L_2->___m_SelectedXRLoader_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_3);
		__this->___U3CinitSuccessU3E5__1_3 = L_4;
		// if (!initSuccess)
		bool L_5 = __this->___U3CinitSuccessU3E5__1_3;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		// Debug.LogError("Error initializing selected loader.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1EA55B43DFC3FC1771C79DBB3EB9016B70D4B99A, NULL);
		goto IL_00e7;
	}

IL_006b:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Start XR loader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral462F74A91ECB5795679DF09049977C1B312BAC70, NULL);
		// var startSuccess = m_SelectedXRLoader.Start();
		XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8 = L_7->___m_SelectedXRLoader_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.XR.Management.XRLoader::Start() */, L_8);
		__this->___U3CstartSuccessU3E5__2_4 = L_9;
		// if (!startSuccess)
		bool L_10 = __this->___U3CstartSuccessU3E5__2_4;
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.LogError("Error starting selected loader.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF9B329A08C5256C079D0ACCB2AE4CF6624B76EE7, NULL);
		// m_SelectedXRLoader.Deinitialize();
		XRPluginManager_tFDAED1CCB3DE0DF6093FAB3B33EB472769CB7625* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_13 = L_12->___m_SelectedXRLoader_5;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_13);
	}

IL_00e6:
	{
	}

IL_00e7:
	{
		// }
		return (bool)0;
	}
}
// System.Object XRPluginManager/<StartXRCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8A1CEA71C8BE30CBC30FAF12D56124F845C31E2C (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void XRPluginManager/<StartXRCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mE2F77CFB4F97A4457E656E107BFF74DA0D35EB59 (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mE2F77CFB4F97A4457E656E107BFF74DA0D35EB59_RuntimeMethod_var)));
	}
}
// System.Object XRPluginManager/<StartXRCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m981B8BA4FA226B0C3F56DEEEFFE086B874602CDB (U3CStartXRCoroutineU3Ed__5_t2589C6946FF207F342C2C71BFD7F7270E16C43C4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Electrodomestico::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Electrodomestico__ctor_m75A1AEE92B4BA0BABE320E152AF9C29485984547 (Electrodomestico_t577E715D42E73D84EB0474C226B662296E6FBA4D* __this, const RuntimeMethod* method) 
{
	{
		FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429(__this, NULL);
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
// System.Void Fridge::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge_Start_m7869A08316FFA3D1A8867C9D0BB043A7ABE93417 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_6), (void*)L_0);
		// col = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___col_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_8), (void*)L_1);
		// foreach (var item in doors)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___doors_9;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0037;
	}

IL_0025:
	{
		// foreach (var item in doors)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// item.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		// foreach (var item in doors)
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Fridge::Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge_Interact_mA5BFC4FAFA64DD7358A970586E47B25BBEACF1CF (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!isOpen)
		bool L_0 = __this->___isOpen_7;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// anim.SetTrigger("Open");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_6;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, NULL);
		// isOpen = true;
		__this->___isOpen_7 = (bool)1;
		// StartCoroutine(CloseFridge());
		RuntimeObject* L_3;
		L_3 = Fridge_CloseFridge_m57EBC4F5270876FB62E897931A0CAA0B072603A1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Fridge::CloseFridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Fridge_CloseFridge_m57EBC4F5270876FB62E897931A0CAA0B072603A1 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* L_0 = (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249*)il2cpp_codegen_object_new(U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCloseFridgeU3Ed__6__ctor_m5FECCDA565CF739761B88C18E011EDC259C62D43(L_0, 0, NULL);
		U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Fridge::EnableCollider(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge_EnableCollider_m924283576CC14129DB840C0EFAADC0417826D9AF (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// col.enabled = enable;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___col_8;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fridge__ctor_mA0690E1877D349F2F2C51327477B3540935A55E5 (Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* __this, const RuntimeMethod* method) 
{
	{
		// bool isOpen = false;
		__this->___isOpen_7 = (bool)0;
		Electrodomestico__ctor_m75A1AEE92B4BA0BABE320E152AF9C29485984547(__this, NULL);
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
// System.Void Fridge/<CloseFridge>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseFridgeU3Ed__6__ctor_m5FECCDA565CF739761B88C18E011EDC259C62D43 (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fridge/<CloseFridge>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseFridgeU3Ed__6_System_IDisposable_Dispose_m29E3F578979824AFF1EF9EC510020FB2E1C1322F (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fridge/<CloseFridge>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCloseFridgeU3Ed__6_MoveNext_m56BFD5F77B17213EE5A12D5DBE4154B2D2E6F715 (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(10f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetTrigger("Close");
		Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___anim_6;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, NULL);
		// isOpen = false;
		Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		L_6->___isOpen_7 = (bool)0;
		// EnableCollider(true);
		Fridge_t0DEAFB3E7611A277CD531217589DBBCFDB5FCDD0* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Fridge_EnableCollider_m924283576CC14129DB840C0EFAADC0417826D9AF(L_7, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fridge/<CloseFridge>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCloseFridgeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m91BFD9BAB453DB040B00F2CB205D15F1186B7D6E (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fridge/<CloseFridge>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseFridgeU3Ed__6_System_Collections_IEnumerator_Reset_m7C6A01D67C96B0B7D28AA8B4EC7311AB6A2AFAB1 (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCloseFridgeU3Ed__6_System_Collections_IEnumerator_Reset_m7C6A01D67C96B0B7D28AA8B4EC7311AB6A2AFAB1_RuntimeMethod_var)));
	}
}
// System.Object Fridge/<CloseFridge>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCloseFridgeU3Ed__6_System_Collections_IEnumerator_get_Current_m3EA6B7CB9A6E994AE854E526FDBE1A907EEB3BAF (U3CCloseFridgeU3Ed__6_t59FDF80BD44D93A69F9E3A251E4F6186EDEB4249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.String BaseFood::get_FoodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseFood_get_FoodName_m766A2D5EE13416680299D82B3DFF26AB96289BD5 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) 
{
	{
		// public string FoodName { get => foodName; set => foodName = value; }
		String_t* L_0 = __this->___foodName_6;
		return L_0;
	}
}
// System.Void BaseFood::set_FoodName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_set_FoodName_m0553FF9D6371051260824CBA73FC115D695F1FEB (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string FoodName { get => foodName; set => foodName = value; }
		String_t* L_0 = ___value0;
		__this->___foodName_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___foodName_6), (void*)L_0);
		return;
	}
}
// System.Void BaseFood::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_Start_mB838CC462315CF68F4F1B6E541E3110911080A16 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) 
{
	{
		// SetInventory();
		BaseFood_SetInventory_mEBA6BC08DBF5A442BDA7A6E6B47CB99469EB0679(__this, NULL);
		// }
		return;
	}
}
// System.Void BaseFood::SetInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_SetInventory_mEBA6BC08DBF5A442BDA7A6E6B47CB99469EB0679 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_1;
		L_1 = GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689(L_0, GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		__this->___inventory_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inventory_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void BaseFood::AvtivateComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood_AvtivateComponents_m5B4DBCEAFFEA310BBF14692C87603D0B7B597DA3 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m9B2CF4196314C8061ACB98A30601CDD7A50903E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Collider>().enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)1, NULL);
		// GetComponent<BaseFood>().enabled = true;
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_1;
		L_1 = Component_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m9B2CF4196314C8061ACB98A30601CDD7A50903E7(__this, Component_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m9B2CF4196314C8061ACB98A30601CDD7A50903E7_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean BaseFood::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseFood_Equals_m22C880A0328BDEF3AA2D45D07BF910123E9780EE (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var other = obj as BaseFood;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)IsInstClass((RuntimeObject*)L_0, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_il2cpp_TypeInfo_var));
		// if (other == null)
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0017:
	{
		// if (foodName != other.foodName)
		String_t* L_4 = __this->___foodName_6;
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___foodName_6;
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0030:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void BaseFood::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseFood__ctor_mB3998127FD9758FA9C710BE33169E20AF6813689 (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) 
{
	{
		// protected bool isInTable = false;
		__this->___isInTable_8 = (bool)0;
		FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429(__this, NULL);
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
// System.Void Ingrediente::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ingrediente_Start_mE843B04799E3215222080626192C72650CEADEAC (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ingrediente_InteractWithIngredient_mDC30048673CC0634F14F3CE80FB0C028C604E7AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		BaseFood_Start_mB838CC462315CF68F4F1B6E541E3110911080A16(__this, NULL);
		// interactable = GetComponent<GazeInteractable>();
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_0;
		L_0 = Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949(__this, Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var);
		__this->___interactable_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_10), (void*)L_0);
		// mat = modelObject.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___modelObject_9;
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_1, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		((FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE*)__this)->___mat_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE*)__this)->___mat_4), (void*)L_3);
		// interactable.OnGazeActivated.AddListener(InteractWithIngredient);
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_4 = __this->___interactable_10;
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4->___OnGazeActivated_12;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)Ingrediente_InteractWithIngredient_mDC30048673CC0634F14F3CE80FB0C028C604E7AE_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Ingrediente::InteractWithIngredient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ingrediente_InteractWithIngredient_mDC30048673CC0634F14F3CE80FB0C028C604E7AE (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (inventory != null)
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Pick();
		Ingrediente_Pick_mD9457FE044408912769D5581A113CFF6728099DA(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Ingrediente::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ingrediente_Drop_m36164464D90786146BD20DE0DB2987BD0B002C4F (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) 
{
	{
		// inventory.CleanInventory();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		NullCheck(L_0);
		Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812(L_0, NULL);
		// }
		return;
	}
}
// System.Void Ingrediente::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ingrediente_Pick_mD9457FE044408912769D5581A113CFF6728099DA (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) 
{
	{
		// inventory.AddToInventory(this, Vector3.one, transform.localRotation, mat);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE*)__this)->___mat_4;
		NullCheck(L_0);
		Inventory_AddToInventory_mB9B17F590A1C11573F16EA36122BF73B123B4EB6(L_0, __this, L_1, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Ingrediente::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ingrediente__ctor_m899F5CE933D2DDE46B4EBEF5FE01D03A232A3A35 (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) 
{
	{
		BaseFood__ctor_mB3998127FD9758FA9C710BE33169E20AF6813689(__this, NULL);
		return;
	}
}
// UnityEngine.GameObject Ingrediente::IPickeable.get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Ingrediente_IPickeable_get_gameObject_m5F8E9711C052F41410ED19E604EDB7C549B6EBB5 (Ingrediente_t55C717066A2367D2DF89346028D0B299861C6C62* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
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
// System.Void IngredienteCortable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Start_mE77F689F8DA16BE06FB3972B28DD39CD8F4B7B38 (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IngredienteCortable_Activated_mE9A73BF4676B7C050C581384BA6562822ADE9FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		BaseFood_Start_mB838CC462315CF68F4F1B6E541E3110911080A16(__this, NULL);
		// mat = modelObject.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___modelObject_11;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		((FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE*)__this)->___mat_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE*)__this)->___mat_4), (void*)L_2);
		// interactable = GetComponent<GazeInteractable>();
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_3;
		L_3 = Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949(__this, Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var);
		__this->___interactable_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_13), (void*)L_3);
		// interactable.OnGazeActivated.AddListener(Activated);
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_4 = __this->___interactable_13;
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4->___OnGazeActivated_12;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)IngredienteCortable_Activated_mE9A73BF4676B7C050C581384BA6562822ADE9FCB_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void IngredienteCortable::Activated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Activated_mE9A73BF4676B7C050C581384BA6562822ADE9FCB (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (inventory.CntTool != null && inventory.CntTool.Equals(neededTool))
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		NullCheck(L_0);
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_1;
		L_1 = Inventory_get_CntTool_mBFAA9897C74E716BFDD2D1D7C1113FB76D0E7469_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_3 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		NullCheck(L_3);
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_4;
		L_4 = Inventory_get_CntTool_mBFAA9897C74E716BFDD2D1D7C1113FB76D0E7469_inline(L_3, NULL);
		String_t* L_5 = __this->___neededTool_10;
		NullCheck(L_4);
		bool L_6;
		L_6 = Tool_Equals_m94D323AAE38DFFD94FEDD78DF23C340E9F12D01C(L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// if (canBeCuted)
		bool L_8 = __this->___canBeCuted_9;
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// Cut();
		IngredienteCortable_Cut_m3B19CAF171D529F0FEEF2F72AA77EFA21767A37C(__this, NULL);
		// return;
		goto IL_005b;
	}

IL_0046:
	{
		// Pick();
		IngredienteCortable_Pick_m53F4ABBE4E71E666B8118A5CA16995C10A131F41(__this, NULL);
		goto IL_005b;
	}

IL_0052:
	{
		// Pick();
		IngredienteCortable_Pick_m53F4ABBE4E71E666B8118A5CA16995C10A131F41(__this, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void IngredienteCortable::Cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Cut_m3B19CAF171D529F0FEEF2F72AA77EFA21767A37C (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(cutedObject, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cutedObject_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void IngredienteCortable::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Drop_mCC1D3AEA65AFD406AD2CE5C8E911D00F6D1024F4 (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	{
		// inventory.CleanInventory();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		NullCheck(L_0);
		Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812(L_0, NULL);
		// }
		return;
	}
}
// System.Void IngredienteCortable::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable_Pick_m53F4ABBE4E71E666B8118A5CA16995C10A131F41 (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	{
		// inventory.AddToInventory(this, modelObject.transform.localScale, transform.localRotation, mat);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = ((BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)__this)->___inventory_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___modelObject_11;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ((FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE*)__this)->___mat_4;
		NullCheck(L_0);
		Inventory_AddToInventory_mB9B17F590A1C11573F16EA36122BF73B123B4EB6(L_0, __this, L_3, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean IngredienteCortable::CanBeCuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IngredienteCortable_CanBeCuted_m6A0129056F32808B47123F459DC74E721F7AFC0B (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool canCut = false;
		V_0 = (bool)0;
		// return canCut;
		bool L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		bool L_1 = V_1;
		return L_1;
	}
}
// System.Void IngredienteCortable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredienteCortable__ctor_mF4A28871F553B024E51667CDFEC5DEB02273F079 (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87D3E7CC2BB97B6A2FF81E2211D514D25E0C375F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool canBeCuted = true;
		__this->___canBeCuted_9 = (bool)1;
		// [SerializeField] string neededTool = "Knife";
		__this->___neededTool_10 = _stringLiteral87D3E7CC2BB97B6A2FF81E2211D514D25E0C375F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___neededTool_10), (void*)_stringLiteral87D3E7CC2BB97B6A2FF81E2211D514D25E0C375F);
		BaseFood__ctor_mB3998127FD9758FA9C710BE33169E20AF6813689(__this, NULL);
		return;
	}
}
// UnityEngine.GameObject IngredienteCortable::IPickeable.get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* IngredienteCortable_IPickeable_get_gameObject_mA2178430F6CDAD814CF3810054B96729CEF08849 (IngredienteCortable_t89B9352360F8CDA0AB55603FC7682C4D12F9E642* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
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
// System.Void PlateSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlateSO__ctor_mEE98B382E38186886A00CEB0F701E7B31686E215 (PlateSO_t33D10CF8644191A75DF0BA02BF565D0E2782813F* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void RecipeSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecipeSO__ctor_m06649E53D761842D3553AE070F641138C20899E6 (RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void FoodTruckObject::ToogleGlow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodTruckObject_ToogleGlow_m87A07B92DDF700C569ECAF31BAF9BDF15681B795 (FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE* __this, bool ___glow0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD584950D49ADC46EE9CF8BB41B6AF5BC18A64);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int i = Convert.ToInt32(glow);
		bool L_0 = ___glow0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Convert_ToInt32_m54E891D837D238AD3700E7554AA565E69A7BC983(L_0, NULL);
		V_0 = L_1;
		// if(mat != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___mat_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// mat.SetInt(_canShinePropertie, i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___mat_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral0EBD584950D49ADC46EE9CF8BB41B6AF5BC18A64, L_6, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void FoodTruckObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429 (FoodTruckObject_tFD0163678933C142F8416715218024FA07C80ADE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// PickablesManager IngredientListManager::get_IngredientManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB* IngredientListManager_get_IngredientManager_m7A0D0DD0B71E02B05E5FB05FA11D46BEF5E37E1B (IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* __this, const RuntimeMethod* method) 
{
	{
		// public PickablesManager IngredientManager { get => pickablesManager; set => pickablesManager = value; }
		PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB* L_0 = __this->___pickablesManager_5;
		return L_0;
	}
}
// System.Void IngredientListManager::set_IngredientManager(PickablesManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredientListManager_set_IngredientManager_mBFB774DBAFCF2DD2AC15F7481715F48ECCBA95B6 (IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* __this, PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB* ___value0, const RuntimeMethod* method) 
{
	{
		// public PickablesManager IngredientManager { get => pickablesManager; set => pickablesManager = value; }
		PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB* L_0 = ___value0;
		__this->___pickablesManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pickablesManager_5), (void*)L_0);
		return;
	}
}
// IngredientListManager IngredientListManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* IngredientListManager_get_Instance_m26FD7BFD0DDCA38C591F59DB368330D50A05F459 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IngredientListManager Instance { get => _instance;}
		IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* L_0 = ((IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields*)il2cpp_codegen_static_fields_for(IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var))->____instance_4;
		return L_0;
	}
}
// System.Void IngredientListManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredientListManager_Start_m204D7F2989C88672DBA70DEEA6585CBDE94D1A23 (IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if(_instance == null)
		IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* L_0 = ((IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields*)il2cpp_codegen_static_fields_for(IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// _instance = this;
		((IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields*)il2cpp_codegen_static_fields_for(IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields*)il2cpp_codegen_static_fields_for(IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		goto IL_0047;
	}

IL_001a:
	{
		// else if(_instance != null && _instance != this)
		IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* L_3 = ((IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields*)il2cpp_codegen_static_fields_for(IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* L_5 = ((IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_StaticFields*)il2cpp_codegen_static_fields_for(IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, __this, NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void IngredientListManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredientListManager__ctor_mFB75C80B5B2E37BBD226391D86186FCC2E7239F5 (IngredientListManager_tE72E147606540B90863B524B5D90AA63FE06D7B5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MagicBox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_Start_mB78B646AE51B22CB96331FA7AB5E465CC5AECE74 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_1;
		L_1 = GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689(L_0, GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		__this->___inventory_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inventory_7), (void*)L_1);
		// gazeInteractable = GetComponent<GazeInteractableFood>();
		GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* L_2;
		L_2 = Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334(__this, Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334_RuntimeMethod_var);
		__this->___gazeInteractable_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gazeInteractable_8), (void*)L_2);
		// gazeInteractable.OnGazeActivated.AddListener(PutIn);
		GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* L_3 = __this->___gazeInteractable_8;
		NullCheck(L_3);
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_4 = L_3->___OnGazeActivated_11;
		UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE* L_5 = (UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE*)il2cpp_codegen_object_new(UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEFF442E5890FCC0268EEFBACFA2A7D70BF3C5EF6(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 5)), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3(L_4, L_5, UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3_RuntimeMethod_var);
		// UpdateIngredientBoxList();
		MagicBox_UpdateIngredientBoxList_m2F4769DD6B000E84BAD08646ED4DCF5044C1D6C8(__this, NULL);
		// }
		return;
	}
}
// System.Void MagicBox::PutIn(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_PutIn_m1C39A175003705B294EBF8513C3D4CD393167F35 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F144B64E450318973F968AB20E67D244AA46EC4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (CheckIfInRecipe(food))
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_0 = ___food0;
		bool L_1;
		L_1 = MagicBox_CheckIfInRecipe_m2E25D3E27E803F760FA9BC7DDFE7F771C08B2A77(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.Log("IsIn");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8F144B64E450318973F968AB20E67D244AA46EC4, NULL);
		// inventory.CleanInventory();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_3 = __this->___inventory_7;
		NullCheck(L_3);
		Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812(L_3, NULL);
	}

IL_0025:
	{
		// CheckCompletedRecipe();
		MagicBox_CheckCompletedRecipe_mC9FBA629F4A416B5323760D107ED82A8109B0C71(__this, NULL);
		// }
		return;
	}
}
// System.Void MagicBox::CheckCompletedRecipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_CheckCompletedRecipe_mC9FBA629F4A416B5323760D107ED82A8109B0C71 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m977CFD76CB7B5757348047A9F000370F238C4E51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// int t = 0;
		V_0 = 0;
		// foreach (IngredientBox item in acceptedIngredients)
		List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* L_0 = __this->___acceptedIngredients_9;
		NullCheck(L_0);
		Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 L_1;
		L_1 = List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42(L_0, List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9((&V_1), Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_0012_1:
			{
				// foreach (IngredientBox item in acceptedIngredients)
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_2;
				L_2 = Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_inline((&V_1), Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_RuntimeMethod_var);
				V_2 = L_2;
				// if (item.isIn)
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_3 = V_2;
				NullCheck(L_3);
				bool L_4 = L_3->___isIn_0;
				V_3 = L_4;
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_002b_1;
				}
			}
			{
				// t++;
				int32_t L_6 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
			}

IL_002b_1:
			{
			}

IL_002c_1:
			{
				// foreach (IngredientBox item in acceptedIngredients)
				bool L_7;
				L_7 = Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1((&V_1), Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// if(t >= acceptedIngredients.Count)
		int32_t L_8 = V_0;
		List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* L_9 = __this->___acceptedIngredients_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m977CFD76CB7B5757348047A9F000370F238C4E51_inline(L_9, List_1_get_Count_m977CFD76CB7B5757348047A9F000370F238C4E51_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// SpawnFoodBuild();
		MagicBox_SpawnFoodBuild_m3126F52BF35811196FB1234AFCDB8507B9E5C6F7(__this, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void MagicBox::SpawnFoodBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_SpawnFoodBuild_m3126F52BF35811196FB1234AFCDB8507B9E5C6F7 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (currentRecipe.plate.playePrefab)
		RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE* L_0 = __this->___currentRecipe_6;
		NullCheck(L_0);
		PlateSO_t33D10CF8644191A75DF0BA02BF565D0E2782813F* L_1 = L_0->___plate_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___playePrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// Instantiate(currentRecipe.plate.playePrefab, buildSocket.position, Quaternion.identity);
		RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE* L_5 = __this->___currentRecipe_6;
		NullCheck(L_5);
		PlateSO_t33D10CF8644191A75DF0BA02BF565D0E2782813F* L_6 = L_5->___plate_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___playePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___buildSocket_10;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean MagicBox::CheckIfInRecipe(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MagicBox_CheckIfInRecipe_m2E25D3E27E803F760FA9BC7DDFE7F771C08B2A77 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___ingrediente0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD95D0951F05836BF1ED12F2D28166CDA12539CB);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// foreach (IngredientBox item in acceptedIngredients)
		List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* L_0 = __this->___acceptedIngredients_9;
		NullCheck(L_0);
		Enumerator_t965817F04DB0B302ED71CBE690B523B7225587A2 L_1;
		L_1 = List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42(L_0, List_1_GetEnumerator_m3E37A3FCC82316158C7840AE4CC93A60D95B9F42_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9((&V_0), Enumerator_Dispose_m10F240946258FBE583799B2A4A1E5F0D4FE37DD9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_0010_1:
			{
				// foreach (IngredientBox item in acceptedIngredients)
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_2;
				L_2 = Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_inline((&V_0), Enumerator_get_Current_mF0E614A557C8A22841E46AC369798979BD429309_RuntimeMethod_var);
				V_1 = L_2;
				// if (item.ingredient.Equals(ingrediente))
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_3 = V_1;
				NullCheck(L_3);
				BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_4 = L_3->___ingredient_1;
				BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_5 = ___ingrediente0;
				NullCheck(L_4);
				bool L_6;
				L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
				V_2 = L_6;
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_0056_1;
				}
			}
			{
				// if (!item.isIn)
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_8 = V_1;
				NullCheck(L_8);
				bool L_9 = L_8->___isIn_0;
				V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_0045_1;
				}
			}
			{
				// IngredientInside(item);
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_11 = V_1;
				MagicBox_IngredientInside_m3B3BB0FEB60654EE0BC7C22C667C6AA756CE3411(__this, L_11, NULL);
				// return true;
				V_4 = (bool)1;
				goto IL_0076;
			}

IL_0045_1:
			{
				// Debug.LogWarning("Ya esta dentro");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAD95D0951F05836BF1ED12F2D28166CDA12539CB, NULL);
				// return false;
				V_4 = (bool)0;
				goto IL_0076;
			}

IL_0056_1:
			{
			}

IL_0057_1:
			{
				// foreach (IngredientBox item in acceptedIngredients)
				bool L_12;
				L_12 = Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1((&V_0), Enumerator_MoveNext_m839A608DA05F90A5A9201F79E8FD668C46C4CFC1_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		bool L_13 = V_4;
		return L_13;
	}
}
// System.Void MagicBox::IngredientInside(MagicBox/IngredientBox)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_IngredientInside_m3B3BB0FEB60654EE0BC7C22C667C6AA756CE3411 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* ___ing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7ABB3BCA0E46D0CC2AECD980946A9F8064BC95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(ing.ingredient.FoodName + " metido");
		IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_0 = ___ing0;
		NullCheck(L_0);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_1 = L_0->___ingredient_1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = BaseFood_get_FoodName_m766A2D5EE13416680299D82B3DFF26AB96289BD5_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralFE7ABB3BCA0E46D0CC2AECD980946A9F8064BC95, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// ing.isIn = true;
		IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_4 = ___ing0;
		NullCheck(L_4);
		L_4->___isIn_0 = (bool)1;
		// }
		return;
	}
}
// System.Void MagicBox::UpdateIngredientBoxList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox_UpdateIngredientBoxList_m2F4769DD6B000E84BAD08646ED4DCF5044C1D6C8 (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55B6300557317FCCDF6C3E28F7B0B1730FF28DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2C1D405ECE4C41256074C35005473C0C56423FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0498A87C19340402BC4B535788788FCCCFB57FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m59C7CFC6ECD7EDD7474256CC091A3A18A0E715AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2BE80BE8D3EF01E33AB912D8CAFB73E89771ECAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4EC07A9C2ED0C4652550482B713A36464D3C4BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* V_1 = NULL;
	IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* V_2 = NULL;
	{
		// acceptedIngredients = new List<IngredientBox>();
		List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* L_0 = (List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500*)il2cpp_codegen_object_new(List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4EC07A9C2ED0C4652550482B713A36464D3C4BBC(L_0, List_1__ctor_m4EC07A9C2ED0C4652550482B713A36464D3C4BBC_RuntimeMethod_var);
		__this->___acceptedIngredients_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___acceptedIngredients_9), (void*)L_0);
		// foreach (BaseFood item in currentRecipe.ingredients)
		RecipeSO_t82AC55BFE9C83AC3F4A7EEAA98EC249DB09118AE* L_1 = __this->___currentRecipe_6;
		NullCheck(L_1);
		List_1_tECC7F66737253C25EF64BBB45E1EE9FB94079927* L_2 = L_1->___ingredients_5;
		NullCheck(L_2);
		Enumerator_tFF4F1FE27E0394C5AC904100D8774B6910245109 L_3;
		L_3 = List_1_GetEnumerator_m2BE80BE8D3EF01E33AB912D8CAFB73E89771ECAD(L_2, List_1_GetEnumerator_m2BE80BE8D3EF01E33AB912D8CAFB73E89771ECAD_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55B6300557317FCCDF6C3E28F7B0B1730FF28DF4((&V_0), Enumerator_Dispose_m55B6300557317FCCDF6C3E28F7B0B1730FF28DF4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0020_1:
			{
				// foreach (BaseFood item in currentRecipe.ingredients)
				BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_4;
				L_4 = Enumerator_get_Current_m0498A87C19340402BC4B535788788FCCCFB57FDD_inline((&V_0), Enumerator_get_Current_m0498A87C19340402BC4B535788788FCCCFB57FDD_RuntimeMethod_var);
				V_1 = L_4;
				// IngredientBox ing = new IngredientBox(item);
				BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_5 = V_1;
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_6 = (IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514*)il2cpp_codegen_object_new(IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				IngredientBox__ctor_mE84D5D20360C936215D58A759CB9C51B899719F8(L_6, L_5, NULL);
				V_2 = L_6;
				// acceptedIngredients.Add(ing);
				List_1_t2D58EBD4E47C9F56152C458EFE9C2232FEA08500* L_7 = __this->___acceptedIngredients_9;
				IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* L_8 = V_2;
				NullCheck(L_7);
				List_1_Add_m59C7CFC6ECD7EDD7474256CC091A3A18A0E715AE_inline(L_7, L_8, List_1_Add_m59C7CFC6ECD7EDD7474256CC091A3A18A0E715AE_RuntimeMethod_var);
			}

IL_003e_1:
			{
				// foreach (BaseFood item in currentRecipe.ingredients)
				bool L_9;
				L_9 = Enumerator_MoveNext_m2C1D405ECE4C41256074C35005473C0C56423FCF((&V_0), Enumerator_MoveNext_m2C1D405ECE4C41256074C35005473C0C56423FCF_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void MagicBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagicBox__ctor_m72E3EC7C90D473127F79C44688430DBF5A9A115C (MagicBox_t4A52A42F5ADA02BB671BF26C2F9B4BFC6C53F324* __this, const RuntimeMethod* method) 
{
	{
		FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429(__this, NULL);
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
// System.Void MagicBox/IngredientBox::.ctor(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IngredientBox__ctor_mE84D5D20360C936215D58A759CB9C51B899719F8 (IngredientBox_t84C88E53B30D883B7A80D9F7F8BE2BFE69CED514* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___ingredient0, const RuntimeMethod* method) 
{
	{
		// public IngredientBox(BaseFood ingredient)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.ingredient = ingredient;
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_0 = ___ingredient0;
		__this->___ingredient_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ingredient_1), (void*)L_0);
		// this.isIn = false;
		__this->___isIn_0 = (bool)0;
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
// System.Boolean BaseGazeInteractable::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseGazeInteractable_get_IsEnabled_mAD4215B40D0790080283D67567DFE9C08DA858F1 (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void BaseGazeInteractable::set_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGazeInteractable_set_IsEnabled_m4CC082755D159946A91A6D75AE2A2BF0DC3F7AAC (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Boolean BaseGazeInteractable::get_IsActivable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseGazeInteractable_get_IsActivable_mF19C6E4FB1A996A56C51DD8A0502831E1A351418 (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean BaseGazeInteractable::get_IsActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseGazeInteractable_get_IsActivated_m2BFAC5B095FA3A10C363E9F1E1F4578D53A9FE36 (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsActivated { get; protected set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void BaseGazeInteractable::set_IsActivated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGazeInteractable_set_IsActivated_m7F0B0C6EE4628CC572229FF9CE71FA2C19B09F4E (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsActivated { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsActivatedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void BaseGazeInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGazeInteractable__ctor_mCE14A3C520E1584B981A3CBDD83CBC003A475349 (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GazeInteractable::add_Activated(GazeInteractable/OnActivated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Activated_m3A05279AFB2FBDA61D654EB3413321F3EF966703 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* V_0 = NULL;
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* V_1 = NULL;
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* V_2 = NULL;
	{
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_0 = __this->___Activated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_1 = V_0;
		V_1 = L_1;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_2 = V_1;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*)CastclassSealed((RuntimeObject*)L_4, OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940_il2cpp_TypeInfo_var));
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940** L_5 = (&__this->___Activated_6);
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_6 = V_2;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_7 = V_1;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_9 = V_0;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*)L_9) == ((RuntimeObject*)(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GazeInteractable::remove_Activated(GazeInteractable/OnActivated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Activated_m953C57B185A1ECF3AD94CA40729F94BDD96D9A1A (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* V_0 = NULL;
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* V_1 = NULL;
	OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* V_2 = NULL;
	{
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_0 = __this->___Activated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_1 = V_0;
		V_1 = L_1;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_2 = V_1;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*)CastclassSealed((RuntimeObject*)L_4, OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940_il2cpp_TypeInfo_var));
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940** L_5 = (&__this->___Activated_6);
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_6 = V_2;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_7 = V_1;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_9 = V_0;
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*)L_9) == ((RuntimeObject*)(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean GazeInteractable::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsEnabled_m7B99264266C229070E43BEB080560ED5FB6B9F26 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return col.enabled; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___col_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return col.enabled; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void GazeInteractable::set_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_set_IsEnabled_mEE75C37DB6360957D12258838FF696F32B67D1CC (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { col.enabled = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___col_14;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, L_1, NULL);
		// set { col.enabled = value; }
		return;
	}
}
// System.Boolean GazeInteractable::get_IsActivable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mEF9AB84619C5611894E1C73A352540DF8FBF55EB (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _isActivable; }
		bool L_0 = __this->____isActivable_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isActivable; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GazeInteractable::get_IsActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_m7B94A6E4AC1C79F6A9D9A83B3B15E6C14AA9C503 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsActivated { get; protected set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void GazeInteractable::set_IsActivated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_m12F2AA15A81F91898E899427C10A8E1B1A954BB5 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public override bool IsActivated { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsActivatedU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void GazeInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Start_mAF9D7608EB6078A10FF416C9C8A60CD7B91CADED (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// col = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___col_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void GazeInteractable::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Activate_m5FDB9F3D12077F0924C8A3D4A04CE349FDC652E4 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// IsActivated = true;
		VirtualActionInvoker1< bool >::Invoke(12 /* System.Void BaseGazeInteractable::set_IsActivated(System.Boolean) */, __this, (bool)1);
		// OnGazeActivated?.Invoke(); //UnityEvent
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnGazeActivated_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void GazeInteractable::GazeEnter(GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeEnter_mA177A74F85064A19EC049C355F6748E5A471BF07 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// StopCoroutine(WAIT_TO_EXIT_COROUTINE);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, NULL);
		// OnGazeEnter?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnGazeEnter_9;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void GazeInteractable::GazeStay(GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeStay_mC3B7A448E63230D9FCAED2AC5F8D89BB732181E4 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// OnGazeStay?.Invoke(); //UnityEvent
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnGazeStay_10;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GazeInteractable::GazeExit(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeExit_m3CA02A6B0568486341E8DD805A690F0D54D13764 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// StartCoroutine(WAIT_TO_EXIT_COROUTINE, interactor);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_3 = ___interactor0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, L_3, NULL);
		goto IL_002b;
	}

IL_0021:
	{
		// InvokeExit(interactor);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_5 = ___interactor0;
		GazeInteractable_InvokeExit_mB10BD555846D7434EC21FD4F205FE48E09EAF534(__this, L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GazeInteractable::WaitToExit_Coroutine(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeInteractable_WaitToExit_Coroutine_m159F7D5FAD069F4E4E8EA1FDEBABF07A169CEF6C (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* L_0 = (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29*)il2cpp_codegen_object_new(U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitToExit_CoroutineU3Ed__27__ctor_m8B88C37A51909892DD1B49570BF88368F362087C(L_0, 0, NULL);
		U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* L_2 = L_1;
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_3 = ___interactor0;
		NullCheck(L_2);
		L_2->___interactor_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___interactor_2), (void*)L_3);
		return L_2;
	}
}
// System.Void GazeInteractable::InvokeExit(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_InvokeExit_mB10BD555846D7434EC21FD4F205FE48E09EAF534 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B5_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B4_0 = NULL;
	{
		// OnGazeExit?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnGazeExit_11;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_0013:
	{
		// OnGazeToggle?.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_2 = __this->___OnGazeToggle_13;
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0026;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(G_B5_0, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
	}

IL_0026:
	{
		// IsActivated = false;
		VirtualActionInvoker1< bool >::Invoke(12 /* System.Void BaseGazeInteractable::set_IsActivated(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// System.Void GazeInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable__ctor_m205DFA7442807E6F9EFCA844434149DA08B7C4E4 (GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool _isActivable = true;
		__this->____isActivable_7 = (bool)1;
		BaseGazeInteractable__ctor_mCE14A3C520E1584B981A3CBDD83CBC003A475349(__this, NULL);
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
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_Multicast(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* currentDelegate = reinterpret_cast<OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___food0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenInst(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	NullCheck(___food0);
	typedef void (*FunctionPointerType) (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___food0, method);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenStatic(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___food0, method);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenStaticInvoker(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* >::Invoke(__this->___method_ptr_0, method, NULL, ___food0);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_ClosedStaticInvoker(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___food0);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenVirtual(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	NullCheck(___food0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___food0);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenInterface(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	NullCheck(___food0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___food0);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenGenericVirtual(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	NullCheck(___food0);
	GenericVirtualActionInvoker0::Invoke(method, ___food0);
}
void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenGenericInterface(OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method)
{
	NullCheck(___food0);
	GenericInterfaceActionInvoker0::Invoke(method, ___food0);
}
// System.Void GazeInteractable/OnActivated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated__ctor_m3A02188447ADEF047183EC3A1E3F06373D855649 (OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683_Multicast;
}
// System.Void GazeInteractable/OnActivated::Invoke(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated_Invoke_mE86F4D791301473437B4101DCA67A0788DF5E683 (OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___food0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GazeInteractable/OnActivated::BeginInvoke(BaseFood,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnActivated_BeginInvoke_m27B0EE4D114F9BDEDF826B374D5B959898D8FFF5 (OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___food0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GazeInteractable/OnActivated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated_EndInvoke_mCF24FAF4B793F0B0B34D34679B3AD9DDF0317C83 (OnActivated_t9CF0AEC21E00A01E7A8CFF243637778799CE8940* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GazeInteractable/<WaitToExit_Coroutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__27__ctor_m8B88C37A51909892DD1B49570BF88368F362087C (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GazeInteractable/<WaitToExit_Coroutine>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__27_System_IDisposable_Dispose_m75FCD65FBA4217320451B495551364C5181CE0BA (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GazeInteractable/<WaitToExit_Coroutine>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitToExit_CoroutineU3Ed__27_MoveNext_m03F1365156DFE98069E918E60D2DD342F23B58F6 (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_exitDelay);
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		float L_4 = L_3->____exitDelay_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// InvokeExit(interactor);
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_6 = __this->___U3CU3E4__this_3;
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_7 = __this->___interactor_2;
		NullCheck(L_6);
		GazeInteractable_InvokeExit_mB10BD555846D7434EC21FD4F205FE48E09EAF534(L_6, L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GazeInteractable/<WaitToExit_Coroutine>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA75315D82401AE0BBAD9E2B4BD41FE1088B2C66F (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GazeInteractable/<WaitToExit_Coroutine>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__27_System_Collections_IEnumerator_Reset_m61771CE8AFA25E9C212084CCA1B1005F085BFDE1 (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__27_System_Collections_IEnumerator_Reset_m61771CE8AFA25E9C212084CCA1B1005F085BFDE1_RuntimeMethod_var)));
	}
}
// System.Object GazeInteractable/<WaitToExit_Coroutine>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__27_System_Collections_IEnumerator_get_Current_m9CAADBE3524D4772229DBA67193F4FA0FA86A43B (U3CWaitToExit_CoroutineU3Ed__27_tA40A0F62352EAD5ED91C71B481F9D8C441E0AC29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Boolean GazeInteractableFood::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractableFood_get_IsEnabled_m1A93B0CE99AB47176D7E035BB37DE39F4F554989 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return col.enabled; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___col_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return col.enabled; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void GazeInteractableFood::set_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_set_IsEnabled_mDFEAB3E5B152F11BC76CD10BF1271A39CA3E8D57 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { col.enabled = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___col_12;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, L_1, NULL);
		// set { col.enabled = value; }
		return;
	}
}
// System.Boolean GazeInteractableFood::get_IsActivable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractableFood_get_IsActivable_m3701E4594ED5E33342C0847B69C46F39DD4F6383 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _isActivable; }
		bool L_0 = __this->____isActivable_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isActivable; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GazeInteractableFood::get_IsActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractableFood_get_IsActivated_m884E6C71779E7EC90D6F8AA2AE36577106572481 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsActivated { get; protected set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void GazeInteractableFood::set_IsActivated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_set_IsActivated_mC951EED3796C0C5B9D847FBEEC6D1AA4AD3600C3 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public override bool IsActivated { get; protected set; }
		bool L_0 = ___value0;
		__this->___U3CIsActivatedU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void GazeInteractableFood::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_Start_m4452B6CE511AA6AD0141748A79710199B917909D (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// col = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___col_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___col_12), (void*)L_0);
		// inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_1);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_2;
		L_2 = GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689(L_1, GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		__this->___inventory_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inventory_13), (void*)L_2);
		// }
		return;
	}
}
// System.Void GazeInteractableFood::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_Activate_m310F3B7F67EF1EC0E4DDBD487519B62D6D212FEB (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* G_B3_0 = NULL;
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* G_B2_0 = NULL;
	{
		// IsActivated = true;
		VirtualActionInvoker1< bool >::Invoke(12 /* System.Void BaseGazeInteractable::set_IsActivated(System.Boolean) */, __this, (bool)1);
		// food = inventory.GetCurrentObjectAsFood();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = __this->___inventory_13;
		NullCheck(L_0);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_1;
		L_1 = Inventory_GetCurrentObjectAsFood_m0F9DA834CC532718507D8DD2EB050504533EAF4C(L_0, NULL);
		__this->___food_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___food_14), (void*)L_1);
		// if(food != null)
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_2 = __this->___food_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// OnGazeActivated?.Invoke(food); //UnityEvent
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_5 = __this->___OnGazeActivated_11;
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_0036;
		}
	}
	{
		goto IL_0042;
	}

IL_0036:
	{
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_7 = __this->___food_14;
		NullCheck(G_B3_0);
		UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058(G_B3_0, L_7, UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void GazeInteractableFood::GazeEnter(GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_GazeEnter_m99234D7DEC74DAAEBF12ACDA6A57747ED40F0CBC (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* G_B3_0 = NULL;
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* G_B2_0 = NULL;
	{
		// StopCoroutine(WAIT_TO_EXIT_COROUTINE);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, NULL);
		// if(food)
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_0 = __this->___food_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// OnGazeEnter?.Invoke(inventory.GetCurrentObjectAsFood());
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_3 = __this->___OnGazeEnter_8;
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0028;
		}
	}
	{
		goto IL_0039;
	}

IL_0028:
	{
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_5 = __this->___inventory_13;
		NullCheck(L_5);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_6;
		L_6 = Inventory_GetCurrentObjectAsFood_m0F9DA834CC532718507D8DD2EB050504533EAF4C(L_5, NULL);
		NullCheck(G_B3_0);
		UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058(G_B3_0, L_6, UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GazeInteractableFood::GazeStay(GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_GazeStay_m39383BF0C55D66356A7014A5480D11117909F64C (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* G_B3_0 = NULL;
	UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* G_B2_0 = NULL;
	{
		// if(food != null)
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_0 = __this->___food_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// OnGazeStay?.Invoke(inventory.GetCurrentObjectAsFood()); //UnityEvent
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_3 = __this->___OnGazeStay_9;
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001d;
		}
	}
	{
		goto IL_002e;
	}

IL_001d:
	{
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_5 = __this->___inventory_13;
		NullCheck(L_5);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_6;
		L_6 = Inventory_GetCurrentObjectAsFood_m0F9DA834CC532718507D8DD2EB050504533EAF4C(L_5, NULL);
		NullCheck(G_B3_0);
		UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058(G_B3_0, L_6, UnityEvent_1_Invoke_m4087315C6DABD90A2E19B1E24F50760D11C7D058_RuntimeMethod_var);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void GazeInteractableFood::GazeExit(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_GazeExit_mBACAB655AB01575F4C7A4E406587CF12FC3F039B (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// StartCoroutine(WAIT_TO_EXIT_COROUTINE, interactor);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_3 = ___interactor0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, L_3, NULL);
		goto IL_002b;
	}

IL_0021:
	{
		// InvokeExit(interactor);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_5 = ___interactor0;
		GazeInteractableFood_InvokeExit_m208F4FF9222FD98A095FC99DFB45DBDB441FC5C4(__this, L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GazeInteractableFood::WaitToExit_Coroutine(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeInteractableFood_WaitToExit_Coroutine_m9A12FD41B984771C279B8F3B9B7555417EBCBA97 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* L_0 = (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E*)il2cpp_codegen_object_new(U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitToExit_CoroutineU3Ed__24__ctor_mF6859A21EEE0BA34DC287DE7B4D419016D708743(L_0, 0, NULL);
		U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* L_2 = L_1;
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_3 = ___interactor0;
		NullCheck(L_2);
		L_2->___interactor_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___interactor_2), (void*)L_3);
		return L_2;
	}
}
// System.Void GazeInteractableFood::InvokeExit(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood_InvokeExit_m208F4FF9222FD98A095FC99DFB45DBDB441FC5C4 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// OnGazeExit?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnGazeExit_10;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
	}

IL_0013:
	{
		// IsActivated = false;
		VirtualActionInvoker1< bool >::Invoke(12 /* System.Void BaseGazeInteractable::set_IsActivated(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// System.Void GazeInteractableFood::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractableFood__ctor_m3721B319C97365325D2A64251AB0E558E37CA586 (GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* __this, const RuntimeMethod* method) 
{
	{
		// BaseFood food = null;
		__this->___food_14 = (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___food_14), (void*)(BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)NULL);
		BaseGazeInteractable__ctor_mCE14A3C520E1584B981A3CBDD83CBC003A475349(__this, NULL);
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
// System.Void GazeInteractableFood/<WaitToExit_Coroutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__24__ctor_mF6859A21EEE0BA34DC287DE7B4D419016D708743 (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GazeInteractableFood/<WaitToExit_Coroutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__24_System_IDisposable_Dispose_m93C7AB1277EFF4A511FE88E8E383C0B2CEDD25AE (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GazeInteractableFood/<WaitToExit_Coroutine>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitToExit_CoroutineU3Ed__24_MoveNext_m577937AE4F19ABDFD4742F42FF8D6FCA71B44A0B (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_exitDelay);
		GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		float L_4 = L_3->____exitDelay_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// InvokeExit(interactor);
		GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* L_6 = __this->___U3CU3E4__this_3;
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_7 = __this->___interactor_2;
		NullCheck(L_6);
		GazeInteractableFood_InvokeExit_m208F4FF9222FD98A095FC99DFB45DBDB441FC5C4(L_6, L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GazeInteractableFood/<WaitToExit_Coroutine>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m820071D623B83E42FAB6F9FEA79357B885C84298 (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GazeInteractableFood/<WaitToExit_Coroutine>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m39BD56D5A653CDB65D33A10624AAAA5C10818C6B (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m39BD56D5A653CDB65D33A10624AAAA5C10818C6B_RuntimeMethod_var)));
	}
}
// System.Object GazeInteractableFood/<WaitToExit_Coroutine>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__24_System_Collections_IEnumerator_get_Current_m191F0E59FAAD1BC72A70EE2B28C9E8D8F22B09B3 (U3CWaitToExit_CoroutineU3Ed__24_t017AF26F08A88CA7FC75C09DE101B9EA83F8AC4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Boolean GazeInteractor::get_CanInteract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractor_get_CanInteract_mD07A7594BF19A46A15F07E8D2EAD2504FD656911 (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanInteract { get => canInteract; set => canInteract = value; }
		bool L_0 = __this->___canInteract_14;
		return L_0;
	}
}
// System.Void GazeInteractor::set_CanInteract(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_set_CanInteract_m48E713551BCAF43FF56F1CE6EB1815C979005180 (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanInteract { get => canInteract; set => canInteract = value; }
		bool L_0 = ___value0;
		__this->___canInteract_14 = L_0;
		return;
	}
}
// System.Void GazeInteractor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Start_m8E2067E1EEDBB8B245B8F67CDBD16D14430FC20C (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A_mA277EF274BAE2F4A15A5AAC9C525E064E85A306C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _reticle = Instantiate(_reticlePrefab).GetComponent<GazeReticle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____reticlePrefab_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_1);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_2;
		L_2 = GameObject_GetComponent_TisGazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A_mA277EF274BAE2F4A15A5AAC9C525E064E85A306C(L_1, GameObject_GetComponent_TisGazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A_mA277EF274BAE2F4A15A5AAC9C525E064E85A306C_RuntimeMethod_var);
		__this->____reticle_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reticle_12), (void*)L_2);
		// _reticle.SetInteractor(this);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_3 = __this->____reticle_12;
		NullCheck(L_3);
		GazeReticle_SetInteractor_mD0C664C0BAC66D884D658076803DEE0DB087AEDF(L_3, __this, NULL);
		// }
		return;
	}
}
// System.Void GazeInteractor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Update_mF80B9F3B787D99E9D01056984D3738B17619F062 (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC_mF1203F74183B61A1BD30C619D9115ACA6EF9219A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	int32_t G_B10_0 = 0;
	{
		// ray = new Ray(transform.position, transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_4), L_1, L_3, /*hidden argument*/NULL);
		__this->___ray_8 = L_4;
		// if(Physics.Raycast(ray,out hit, maxDetectionDistance)) //Miramos si choca con cualquier objeto
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = __this->___ray_8;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___hit_9);
		float L_7 = __this->___maxDetectionDistance_4;
		bool L_8;
		L_8 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_5, L_6, L_7, NULL);
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_01ca;
		}
	}
	{
		// float distance = Vector3.Distance(transform.position, hit.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_12 = (&__this->___hit_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15;
		L_15 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_14, NULL);
		V_1 = L_15;
		// if(distance < minDetectionDistance)
		float L_16 = V_1;
		float L_17 = __this->___minDetectionDistance_5;
		V_3 = (bool)((((float)L_16) < ((float)L_17))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		// _reticle.Enable(false);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_19 = __this->____reticle_12;
		NullCheck(L_19);
		GazeReticle_Enable_m2C1B8F11B4AA0FE65FD35C786E12DCB8C163A87A(L_19, (bool)0, NULL);
		// Reset();
		GazeInteractor_Reset_m7878C0974CD46E7CE46584EBE62FC19B9392CE61(__this, NULL);
		// return;
		goto IL_01e5;
	}

IL_0089:
	{
		// _reticle.PointerOnGaze(hit.point);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_20 = __this->____reticle_12;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_21 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_21, NULL);
		NullCheck(L_20);
		GazeReticle_PointerOnGaze_mA3C1F9F87B80159A86CE8BEA8E6B80EFBBA219F8(L_20, L_22, NULL);
		// _reticle.Enable(true);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_23 = __this->____reticle_12;
		NullCheck(L_23);
		GazeReticle_Enable_m2C1B8F11B4AA0FE65FD35C786E12DCB8C163A87A(L_23, (bool)1, NULL);
		// BaseGazeInteractable inter = hit.collider.transform.GetComponent<BaseGazeInteractable>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_24 = (&__this->___hit_9);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25;
		L_25 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_27;
		L_27 = Component_GetComponent_TisBaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC_mF1203F74183B61A1BD30C619D9115ACA6EF9219A(L_26, Component_GetComponent_TisBaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC_mF1203F74183B61A1BD30C619D9115ACA6EF9219A_RuntimeMethod_var);
		V_2 = L_27;
		// if(inter == null)
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_29;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00dd;
		}
	}
	{
		// Reset();
		GazeInteractor_Reset_m7878C0974CD46E7CE46584EBE62FC19B9392CE61(__this, NULL);
		// return;
		goto IL_01e5;
	}

IL_00dd:
	{
		// if(inter != interactable)
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_31 = V_2;
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_32 = __this->___interactable_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, L_32, NULL);
		V_5 = L_33;
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_0122;
		}
	}
	{
		// Reset();
		GazeInteractor_Reset_m7878C0974CD46E7CE46584EBE62FC19B9392CE61(__this, NULL);
		// _enterStartTime = Time.time;
		float L_35;
		L_35 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->____enterStartTime_10 = L_35;
		// interactable = inter;
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_36 = V_2;
		__this->___interactable_13 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_13), (void*)L_36);
		// interactable.GazeEnter(this, hit.point);
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_37 = __this->___interactable_13;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_38 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_38, NULL);
		NullCheck(L_37);
		VirtualActionInvoker2< GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4 /* System.Void BaseGazeInteractable::GazeEnter(GazeInteractor,UnityEngine.Vector3) */, L_37, __this, L_39);
	}

IL_0122:
	{
		// interactable.GazeStay(this, hit.point);
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_40 = __this->___interactable_13;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_41 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_41, NULL);
		NullCheck(L_40);
		VirtualActionInvoker2< GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Void BaseGazeInteractable::GazeStay(GazeInteractor,UnityEngine.Vector3) */, L_40, __this, L_42);
		// if(interactable.IsActivable && !interactable.IsActivated)
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_43 = __this->___interactable_13;
		NullCheck(L_43);
		bool L_44;
		L_44 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean BaseGazeInteractable::get_IsActivable() */, L_43);
		if (!L_44)
		{
			goto IL_0157;
		}
	}
	{
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_45 = __this->___interactable_13;
		NullCheck(L_45);
		bool L_46;
		L_46 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean BaseGazeInteractable::get_IsActivated() */, L_45);
		G_B10_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_0158;
	}

IL_0157:
	{
		G_B10_0 = 0;
	}

IL_0158:
	{
		V_6 = (bool)G_B10_0;
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_01c7;
		}
	}
	{
		// float timeToActivate = (_enterStartTime + _timeToActivate) - Time.time;
		float L_48 = __this->____enterStartTime_10;
		float L_49 = __this->____timeToActivate_6;
		float L_50;
		L_50 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_48, L_49)), L_50));
		// float progress = 1 - (timeToActivate / _timeToActivate);
		float L_51 = V_7;
		float L_52 = __this->____timeToActivate_6;
		V_8 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_51/L_52))));
		// progress = Mathf.Clamp(progress, 0, 1);
		float L_53 = V_8;
		float L_54;
		L_54 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_53, (0.0f), (1.0f), NULL);
		V_8 = L_54;
		// _reticle.SetProgress(progress);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_55 = __this->____reticle_12;
		float L_56 = V_8;
		NullCheck(L_55);
		GazeReticle_SetProgress_m0BB1EEC25524B09F34E0A3256ED097F5E063D6D7(L_55, L_56, NULL);
		// if(progress >= 1)
		float L_57 = V_8;
		V_9 = (bool)((((int32_t)((!(((float)L_57) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_9;
		if (!L_58)
		{
			goto IL_01c6;
		}
	}
	{
		// interactable.Activate();
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_59 = __this->___interactable_13;
		NullCheck(L_59);
		VirtualActionInvoker0::Invoke(7 /* System.Void BaseGazeInteractable::Activate() */, L_59);
	}

IL_01c6:
	{
	}

IL_01c7:
	{
		goto IL_01e5;
	}

IL_01ca:
	{
		// _reticle.PointerOutGaze(maxDetectionDistance);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_60 = __this->____reticle_12;
		float L_61 = __this->___maxDetectionDistance_4;
		NullCheck(L_60);
		GazeReticle_PointerOutGaze_m488A3C11BEF646A0E79AA34BF8DF52D2179275C1(L_60, L_61, NULL);
		// Reset();
		GazeInteractor_Reset_m7878C0974CD46E7CE46584EBE62FC19B9392CE61(__this, NULL);
	}

IL_01e5:
	{
		// }
		return;
	}
}
// System.Void GazeInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Reset_m7878C0974CD46E7CE46584EBE62FC19B9392CE61 (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _reticle.SetProgress(0);
		GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* L_0 = __this->____reticle_12;
		NullCheck(L_0);
		GazeReticle_SetProgress_m0BB1EEC25524B09F34E0A3256ED097F5E063D6D7(L_0, (0.0f), NULL);
		// if(interactable == null) { return; }
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_1 = __this->___interactable_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// if(interactable == null) { return; }
		goto IL_0039;
	}

IL_0025:
	{
		// interactable.GazeExit(this);
		BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC* L_4 = __this->___interactable_13;
		NullCheck(L_4);
		VirtualActionInvoker1< GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* >::Invoke(6 /* System.Void BaseGazeInteractable::GazeExit(GazeInteractor) */, L_4, __this);
		// interactable = null;
		__this->___interactable_13 = (BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_13), (void*)(BaseGazeInteractable_tA4DD0AD79CDD42BDE01A3CD5756C078B0EBCDBAC*)NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GazeInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor__ctor_m5FA5AC8827089B003F1065F216CC3C50A366927C (GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _timeToActivate = 1.0f;
		__this->____timeToActivate_6 = (1.0f);
		// private bool canInteract = true;
		__this->___canInteract_14 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GazeReticle::PointerOnGaze(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_PointerOnGaze_mA3C1F9F87B80159A86CE8BEA8E6B80EFBBA219F8 (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitPoint0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float distance = Vector3.Distance(_interactor.transform.position, hitPoint);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_0 = __this->____interactor_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___hitPoint0;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// float scaleFactor = _scale * distance;
		float L_5 = __this->____scale_6;
		float L_6 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// Vector3 direction = _interactor.transform.position - hitPoint;
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_7 = __this->____interactor_7;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___hitPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		V_2 = L_11;
		// Quaternion rot = Quaternion.LookRotation(direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_12, NULL);
		V_3 = L_13;
		// transform.localScale = Vector3.one * scaleFactor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_17, NULL);
		// transform.position = CalculateReticlePosition(_interactor.transform.position, hitPoint, 0.97f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_19 = __this->____interactor_7;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___hitPoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = GazeReticle_CalculateReticlePosition_m5BC86C58D2C97F34C61FAD6675AAD3265D9A3E2D(__this, L_21, L_22, (0.970000029f), NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_23, NULL);
		// transform.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_3;
		NullCheck(L_24);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_24, L_25, NULL);
		// }
		return;
	}
}
// System.Void GazeReticle::PointerOutGaze(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_PointerOutGaze_m488A3C11BEF646A0E79AA34BF8DF52D2179275C1 (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, float ___maxDistance0, const RuntimeMethod* method) 
{
	{
		// transform.localScale = Vector3.one * 0.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (0.100000001f), NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_2, NULL);
		// transform.localPosition = _interactor.transform.position + _interactor.transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_4 = __this->____interactor_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_7 = __this->____interactor_7;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_10, NULL);
		// transform.localRotation = _interactor.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_12 = __this->____interactor_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_14, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 GazeReticle::CalculateReticlePosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GazeReticle_CalculateReticlePosition_m5BC86C58D2C97F34C61FAD6675AAD3265D9A3E2D (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p11, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float x = p0.x + t * (p1.x - p0.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p00;
		float L_1 = L_0.___x_2;
		float L_2 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___p11;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___p00;
		float L_6 = L_5.___x_2;
		V_0 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_subtract(L_4, L_6))))));
		// float y = p0.y + t * (p1.y - p0.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___p00;
		float L_8 = L_7.___y_3;
		float L_9 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___p11;
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___p00;
		float L_13 = L_12.___y_3;
		V_1 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract(L_11, L_13))))));
		// float z = p0.z + t * (p1.z - p0.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___p00;
		float L_15 = L_14.___z_4;
		float L_16 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___p11;
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___p00;
		float L_20 = L_19.___z_4;
		V_2 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, ((float)il2cpp_codegen_subtract(L_18, L_20))))));
		// return new Vector3(x, y, z);
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		return L_25;
	}
}
// System.Void GazeReticle::SetInteractor(GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetInteractor_mD0C664C0BAC66D884D658076803DEE0DB087AEDF (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* ___interactor0, const RuntimeMethod* method) 
{
	{
		// _interactor = interactor;
		GazeInteractor_t43985758A5E304CA34F7B0C7991FA920993FC94F* L_0 = ___interactor0;
		__this->____interactor_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactor_7), (void*)L_0);
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GazeReticle::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetProgress_m0BB1EEC25524B09F34E0A3256ED097F5E063D6D7 (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// _imageProgress.fillAmount = progress;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____imageProgress_5;
		float L_1 = ___progress0;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GazeReticle::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Enable_m2C1B8F11B4AA0FE65FD35C786E12DCB8C163A87A (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___enable0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GazeReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle__ctor_m4D6A85A83EBBE80F95A35DAF5A261836E89EB60F (GazeReticle_t7F05235AF4FAB7EC97BDDEED5D1FDF30366D9D8A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _scale = 0.0015f;
		__this->____scale_6 = (0.00150000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// IPickeable Inventory::get_PickableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Inventory_get_PickableObject_m518C2CCFB70B712705D056DE11CD5DD95DF7E338 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return _pickableObject;
		RuntimeObject* L_0 = __this->____pickableObject_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Inventory::set_PickableObject(IPickeable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_set_PickableObject_mB3D1B1FA67F9814A9DF5A2BC85E9A0B6CB8A016A (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m42C6BE201FFAB04F19FDEA59A917B76126D7795F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2123FB38C4BF9FCC7C8605302157A06C5C580142);
		s_Il2CppMethodInitialized = true;
	}
	Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* V_0 = NULL;
	bool V_1 = false;
	{
		// if(value.gameObject.TryGetComponent<Tool>(out Tool t))
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject IPickeable::get_gameObject() */, IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m42C6BE201FFAB04F19FDEA59A917B76126D7795F(L_1, (&V_0), GameObject_TryGetComponent_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m42C6BE201FFAB04F19FDEA59A917B76126D7795F_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.Log("Is a tool: " + t.name);
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2123FB38C4BF9FCC7C8605302157A06C5C580142, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// cntTool = t;
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_7 = V_0;
		__this->___cntTool_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cntTool_6), (void*)L_7);
	}

IL_0031:
	{
		// _pickableObject = value;
		RuntimeObject* L_8 = ___value0;
		__this->____pickableObject_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pickableObject_4), (void*)L_8);
		// }
		return;
	}
}
// Tool Inventory::get_CntTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* Inventory_get_CntTool_mBFAA9897C74E716BFDD2D1D7C1113FB76D0E7469 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	{
		// public Tool CntTool { get => cntTool; set => cntTool = value; }
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_0 = __this->___cntTool_6;
		return L_0;
	}
}
// System.Void Inventory::set_CntTool(Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_set_CntTool_m357FF3A6FF346E7245A43EF59A7BE6D9E051C567 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Tool CntTool { get => cntTool; set => cntTool = value; }
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_0 = ___value0;
		__this->___cntTool_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cntTool_6), (void*)L_0);
		return;
	}
}
// System.Void Inventory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Start_m4BFCF164C98AA479C60C545C2D3568688B485DE2 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	{
		// EnableModel(false);
		Inventory_EnableModel_m828AFF13D40AC9BD334939FFCD59AF51A21FB319(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Inventory::AddToInventory(IPickeable,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddToInventory_m3BD19A2163655D7ADADE6BA68D16416B4FC3BCBB (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, RuntimeObject* ___pick0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m07852AD6D767DD6AA17149C42C54C3C7DC930B04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	{
		// PickableObject = pick;
		RuntimeObject* L_0 = ___pick0;
		Inventory_set_PickableObject_mB3D1B1FA67F9814A9DF5A2BC85E9A0B6CB8A016A(__this, L_0, NULL);
		// Mesh mesh = pick.gameObject.GetComponentInChildren<MeshFilter>().mesh;
		RuntimeObject* L_1 = ___pick0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject IPickeable::get_gameObject() */, IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3;
		L_3 = GameObject_GetComponentInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m07852AD6D767DD6AA17149C42C54C3C7DC930B04(L_2, GameObject_GetComponentInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m07852AD6D767DD6AA17149C42C54C3C7DC930B04_RuntimeMethod_var);
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_3, NULL);
		V_0 = L_4;
		// inventoryObjectModel.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5 = __this->___inventoryObjectModel_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = V_0;
		NullCheck(L_5);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_5, L_6, NULL);
		// inventoryObjectModel.transform.localScale = scale;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7 = __this->___inventoryObjectModel_9;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___scale1;
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		// inventoryObjectModel.transform.localRotation = rotation;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_10 = __this->___inventoryObjectModel_9;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___rotation2;
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_12, NULL);
		// EnableModel(true);
		Inventory_EnableModel_m828AFF13D40AC9BD334939FFCD59AF51A21FB319(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Inventory::AddToInventory(IPickeable,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddToInventory_mB9B17F590A1C11573F16EA36122BF73B123B4EB6 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, RuntimeObject* ___pick0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMat3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m5DDFA49B54016518ABAC2CE23BD17805D35D0517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_m7D2F572AB10A1BE8F8C834977968A7FABD8C601E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// pick.gameObject.SetActive(false);
		RuntimeObject* L_0 = ___pick0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject IPickeable::get_gameObject() */, IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// GameObject o = Instantiate(pick.gameObject, Vector3.zero, rotation, socketObj);
		RuntimeObject* L_2 = ___pick0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject IPickeable::get_gameObject() */, IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var, L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___rotation2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___socketObj_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_3, L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_0 = L_7;
		// o.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		// o.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// o.GetComponent<Collider>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_12, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_13);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_13, (bool)0, NULL);
		// PickableObject = o.GetComponent<IPickeable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = GameObject_GetComponent_TisIPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_m7D2F572AB10A1BE8F8C834977968A7FABD8C601E(L_14, GameObject_GetComponent_TisIPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_m7D2F572AB10A1BE8F8C834977968A7FABD8C601E_RuntimeMethod_var);
		Inventory_set_PickableObject_mB3D1B1FA67F9814A9DF5A2BC85E9A0B6CB8A016A(__this, L_15, NULL);
		// o.GetComponent<BaseFood>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_16);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_17;
		L_17 = GameObject_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m5DDFA49B54016518ABAC2CE23BD17805D35D0517(L_16, GameObject_GetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_m5DDFA49B54016518ABAC2CE23BD17805D35D0517_RuntimeMethod_var);
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Inventory::EnableModel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_EnableModel_m828AFF13D40AC9BD334939FFCD59AF51A21FB319 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// inventoryObjectModel.gameObject.SetActive(enable);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___inventoryObjectModel_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___enable0;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Inventory::CleanInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _pickableObject = null;
		__this->____pickableObject_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pickableObject_4), (void*)(RuntimeObject*)NULL);
		// if(socketObj.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___socketObj_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(socketObj.GetChild(0).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___socketObj_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0033:
	{
		// EnableModel(false);
		Inventory_EnableModel_m828AFF13D40AC9BD334939FFCD59AF51A21FB319(__this, (bool)0, NULL);
		// }
		return;
	}
}
// BaseFood Inventory::GetCurrentObjectAsFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* Inventory_GetCurrentObjectAsFood_m0F9DA834CC532718507D8DD2EB050504533EAF4C (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_mFA2B608B2B51BB3ED36BA7B6105AE34E6D284096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3452E6B674AEBA1EDCE7FDA6D0E4A1433FF92AD8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* V_1 = NULL;
	bool V_2 = false;
	BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* V_3 = NULL;
	{
		// if(_pickableObject != null)
		RuntimeObject* L_0 = __this->____pickableObject_4;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (_pickableObject.gameObject.TryGetComponent(out BaseFood food))
		RuntimeObject* L_2 = __this->____pickableObject_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.GameObject IPickeable::get_gameObject() */, IPickeable_t530F17CD2BDD0F2C540F289C20545C051B0B28A5_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_TryGetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_mFA2B608B2B51BB3ED36BA7B6105AE34E6D284096(L_3, (&V_1), GameObject_TryGetComponent_TisBaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9_mFA2B608B2B51BB3ED36BA7B6105AE34E6D284096_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return food;
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_6 = V_1;
		V_3 = L_6;
		goto IL_003e;
	}

IL_002a:
	{
		// Debug.Log("El objeto del inventario no es comida");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3452E6B674AEBA1EDCE7FDA6D0E4A1433FF92AD8, NULL);
		// return null;
		V_3 = (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)NULL;
		goto IL_003e;
	}

IL_003a:
	{
		// return null;
		V_3 = (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9*)NULL;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_7 = V_3;
		return L_7;
	}
}
// System.Void Inventory::CanInteract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_CanInteract_m51837A7C22C6A2938D138A8B96125FE036A1ECA4 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(this._pickableObject != null)
		RuntimeObject* L_0 = __this->____pickableObject_4;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mEC4DABB7AD987F2E1734A9D27C46087E24DFECC0 (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PCController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_OnEnable_m1E4EB22B5BB6B54FC33BF779A2106EBBA8FCBC7E (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	{
		// inputs.Enable();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___inputs_5;
		NullCheck(L_0);
		PlayerInput_Enable_mE3EC3D4631D753DB2B6EEA9FF407DC0CA920A2E5(L_0, NULL);
		// }
		return;
	}
}
// System.Void PCController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_OnDisable_mC258E7BDB389CB1FA152D018E92E14E26C3C79BF (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	{
		// inputs.Disable();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___inputs_5;
		NullCheck(L_0);
		PlayerInput_Disable_m9DA10D3B65ECD087D0C78E77A9719D31F1EC23ED(L_0, NULL);
		// }
		return;
	}
}
// System.Void PCController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_Awake_mF93C88D19D8CF7C64A6D5F5901AB5084A1BA578A (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCController_Interact_mD306D93F5F6BE4C948BAFD918E312FB94187F0D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerBody = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___playerBody_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerBody_7), (void*)L_0);
		// inputs = new PlayerInput();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_1 = (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE*)il2cpp_codegen_object_new(PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8(L_1, NULL);
		__this->___inputs_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputs_5), (void*)L_1);
		// inputs.Player.Interact.started += Interact;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_2 = __this->___inputs_5;
		NullCheck(L_2);
		PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 L_3;
		L_3 = PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794(L_2, NULL);
		V_0 = L_3;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_5, __this, (intptr_t)((void*)PCController_Interact_mD306D93F5F6BE4C948BAFD918E312FB94187F0D8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void PCController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_Start_m8336C4ECE9C883561E2073FC0F69F250641240E4 (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void PCController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_Update_m8C92A307AB337839EAA0F8443A7D7FF996623094 (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PCController::Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_Look_mE2CFF710E1481BFE75536D979A56E9E704FABEC3 (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// mouseLook = inputs.Player.View.ReadValue<Vector2>();
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___inputs_5;
		NullCheck(L_0);
		PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 L_1;
		L_1 = PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794(L_0, NULL);
		V_2 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789((&V_2), NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		__this->___mouseLook_6 = L_3;
		// float mouseX = mouseLook.x * mouseSensitivity * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___mouseLook_6);
		float L_5 = L_4->___x_0;
		float L_6 = __this->___mouseSensitivity_4;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7));
		// float mouseY = mouseLook.y * mouseSensitivity * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___mouseLook_6);
		float L_9 = L_8->___y_1;
		float L_10 = __this->___mouseSensitivity_4;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), L_11));
		// xRotation -= mouseY;
		float L_12 = __this->___xRotation_9;
		float L_13 = V_1;
		__this->___xRotation_9 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// camBody.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___camBody_8;
		float L_15 = __this->___xRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_15, (0.0f), (0.0f), NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_16, NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___playerBody_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_17, L_20, NULL);
		// }
		return;
	}
}
// System.Void PCController::Interact(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController_Interact_mD306D93F5F6BE4C948BAFD918E312FB94187F0D8 (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___obj0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PCController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCController__ctor_mD4475DBC1EDCFEB7FA274D31E75D8C5C8CAD7774 (PCController_t5F458983820E5FCD5EF07D6E22FFB9876EC9F3D5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float mouseSensitivity = 100f;
		__this->___mouseSensitivity_4 = (100.0f);
		// private float xRotation = 0f;
		__this->___xRotation_9 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.InputSystem.InputActionAsset PlayerInput::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m24FD924FB39A9A023CDEA8F6916EEC47B471B3A8 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B514E260236F16463F3E75F706DCC5449640861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6985A249DBB50FEB1EB1D555044119E1B717CB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB5EA8D52CE753D0240BDBE2A71565065D4AF287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @PlayerInput()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""PlayerInput"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Player"",
		//             ""id"": ""74483e26-b215-4848-b299-712247cfb22f"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""View"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""a13a17b5-cb0b-4fde-a819-6968e8b16982"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Interact"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""5870512d-a6e1-48ce-8af3-d34cd0a9cee7"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""a6b7156e-a5cd-4089-9d4f-b234e5b4f011"",
		//                     ""path"": ""<Mouse>/delta"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""View"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8dcba094-289d-4b60-91a1-69f35c4dfd50"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Interact"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C(_stringLiteralA6985A249DBB50FEB1EB1D555044119E1B717CB1, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)1, NULL);
		__this->___m_Player_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_1), (void*)L_2);
		// m_Player_View = m_Player.FindAction("View", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Player_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteralCB5EA8D52CE753D0240BDBE2A71565065D4AF287, (bool)1, NULL);
		__this->___m_Player_View_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_View_3), (void*)L_4);
		// m_Player_Interact = m_Player.FindAction("Interact", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_Player_1;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteral6B514E260236F16463F3E75F706DCC5449640861, (bool)1, NULL);
		__this->___m_Player_Interact_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Interact_4), (void*)L_6);
		// }
		return;
	}
}
// System.Void PlayerInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Dispose_mED8AB62E19D2B6DF4610354C380D122AF54F60F5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> PlayerInput::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 PlayerInput_get_bindingMask_mE9D628D8534C3F84B6120729E5868509A86FBF50 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInput::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_bindingMask_m32F66DD9FBB010F6F9297F345C4D3D5C5FADC354 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> PlayerInput::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D PlayerInput_get_devices_m970521FB3C8BC58D21FBAD5535438670E5B5A76D (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInput::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_devices_mF37D9BFB40C8FE4F6D6AA4B750CE412AD651D7F0 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> PlayerInput::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 PlayerInput_get_controlSchemes_m7894888243769B1B8E856FBF1525FE8818F51B50 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean PlayerInput::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_Contains_mEABB2AA00C1CC1F789CAC71C9B301622ED8EA65E (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetEnumerator_m718C2FBF1A4AE370122B0CBA506776EBF2A0C4A6 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator PlayerInput::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_System_Collections_IEnumerable_GetEnumerator_m79D4B6BDDF3AC172AEAE8B9C3E140C55CF95D54C (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = PlayerInput_GetEnumerator_m718C2FBF1A4AE370122B0CBA506776EBF2A0C4A6(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Enable_mE3EC3D4631D753DB2B6EEA9FF407DC0CA920A2E5 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Disable_m9DA10D3B65ECD087D0C78E77A9719D31F1EC23ED (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> PlayerInput::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_get_bindings_m18B4B8DE3CB2CE5BAA798B334C162667408E8F38 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction PlayerInput::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerInput_FindAction_m742A99ACB197ECCC39B4F25315FA5F29832883F9 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 PlayerInput::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerInput_FindBinding_m6214B5095DA36F8751C0C80C7963346EBA298321 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// PlayerInput/PlayerActions PlayerInput::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 PlayerInput_get_Player_m0D1809F4AF04ADCB4EF11E26B5A46F38B7DCC794 (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerActions @Player => new PlayerActions(this);
		PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
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
// Conversion methods for marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_pinvoke(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_pinvoke_back(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke& marshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_pinvoke_cleanup(PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_com(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_com_back(const PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com& marshaled, PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshal_com_cleanup(PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80_marshaled_com& marshaled)
{
}
// System.Void PlayerInput/PlayerActions::.ctor(PlayerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@PlayerInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5_AdjustorThunk (RuntimeObject* __this, PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* ___wrapper0, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions__ctor_mFB67A0C7AC5A9A8567059747B2C20ABD72C3C2E5(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction PlayerInput/PlayerActions::get_View()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @View => m_Wrapper.m_Player_View;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_View_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInput/PlayerActions::get_Interact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Interact => m_Wrapper.m_Player_Interact;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Interact_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInput/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Player_1;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerInput/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions_Enable_m6F3D5774ADBFC24A605C290EFB34297E1B6B7E23(_thisAdjusted, method);
}
// System.Void PlayerInput/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions_Disable_m4495A28F317429F59CC26C461292910CE6DC9F5F(_thisAdjusted, method);
}
// System.Boolean PlayerInput/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_mC7D12518775B7A6155191458B2C7B9CD14DE6A40(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInput/PlayerActions::op_Implicit(PlayerInput/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_op_Implicit_m00FE8104DBFBA0A8F29A97EE08F83EACE97FB3F8 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80 ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m8EED578EEE1B7055481E66B9FB7404CED22F0B3E((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerInput/PlayerActions::SetCallbacks(PlayerInput/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7 (PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_PlayerActionsCallbackInterface_2;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ea;
		}
	}
	{
		// @View.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnView;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @View.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnView;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @View.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnView;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
		// @Interact.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnInteract;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_19 = __this->___m_Wrapper_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_21 = L_20;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, L_21, (intptr_t)((void*)GetInterfaceMethodInfo(L_21, 1, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_18);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_18, L_22, NULL);
		// @Interact.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnInteract;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_24 = __this->___m_Wrapper_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_23);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_23, L_27, NULL);
		// @Interact.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnInteract;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(__this, NULL);
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_29 = __this->___m_Wrapper_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_31 = L_30;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, L_31, (intptr_t)((void*)GetInterfaceMethodInfo(L_31, 1, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_28, L_32, NULL);
	}

IL_00ea:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterface = instance;
		PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* L_33 = __this->___m_Wrapper_0;
		RuntimeObject* L_34 = ___instance0;
		NullCheck(L_33);
		L_33->___m_PlayerActionsCallbackInterface_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___m_PlayerActionsCallbackInterface_2), (void*)L_34);
		// if (instance != null)
		RuntimeObject* L_35 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0199;
		}
	}
	{
		// @View.started += instance.OnView;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(__this, NULL);
		RuntimeObject* L_38 = ___instance0;
		RuntimeObject* L_39 = L_38;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, L_39, (intptr_t)((void*)GetInterfaceMethodInfo(L_39, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_37, L_40, NULL);
		// @View.performed += instance.OnView;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41;
		L_41 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(__this, NULL);
		RuntimeObject* L_42 = ___instance0;
		RuntimeObject* L_43 = L_42;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_44 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_44, L_43, (intptr_t)((void*)GetInterfaceMethodInfo(L_43, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_41);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_41, L_44, NULL);
		// @View.canceled += instance.OnView;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45;
		L_45 = PlayerActions_get_View_m7280D6C6CBE55C649DEF339098210E35DAB23789(__this, NULL);
		RuntimeObject* L_46 = ___instance0;
		RuntimeObject* L_47 = L_46;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_48 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_48, L_47, (intptr_t)((void*)GetInterfaceMethodInfo(L_47, 0, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_45);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_45, L_48, NULL);
		// @Interact.started += instance.OnInteract;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_49;
		L_49 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(__this, NULL);
		RuntimeObject* L_50 = ___instance0;
		RuntimeObject* L_51 = L_50;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, L_51, (intptr_t)((void*)GetInterfaceMethodInfo(L_51, 1, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_49);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_49, L_52, NULL);
		// @Interact.performed += instance.OnInteract;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_53;
		L_53 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(__this, NULL);
		RuntimeObject* L_54 = ___instance0;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 1, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_53);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_53, L_56, NULL);
		// @Interact.canceled += instance.OnInteract;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = PlayerActions_get_Interact_m7F7E227985129BABFE34D8E5F3ED863208BA088E(__this, NULL);
		RuntimeObject* L_58 = ___instance0;
		RuntimeObject* L_59 = L_58;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_60 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_60, L_59, (intptr_t)((void*)GetInterfaceMethodInfo(L_59, 1, IPlayerActions_tBA9CF29BC5EF6133953E9460966D9454F746E54C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_57);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_57, L_60, NULL);
	}

IL_0199:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t007F6A0DF92D9BE9F75F2987B85E9D72E20E7C80*>(__this + _offset);
	PlayerActions_SetCallbacks_m28DF740FE33BD08EDFA5B38ADABBA046F9DA36A7(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PickablesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickablesManager__ctor_m34616BEFFB840512EC3C92DBE06BFEDF0B474FAE (PickablesManager_t7E44E00CE0B292679FB88CBBDD1AD4A2E53CE5AB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ChangeMaterial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_Start_mB61BFBF9DDDAD728E0BC7D2516D5E7204A7B7C63 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___rend_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_7), (void*)L_0);
		// originalMat = rend.material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___rend_7;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___originalMat_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMat_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void ChangeMaterial::SwapToEnterMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_SwapToEnterMaterial_mCB04BCD6A253812CC83EC0C19AABCA158E4B73C4 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		// rend.material = enterMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___rend_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___enterMat_4;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeMaterial::SwapToActivatedMat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_SwapToActivatedMat_mC430B2991624CA000230FCD4A0185F65A965826D (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		// rend.material = activatedMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___rend_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___activatedMat_5;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeMaterial::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial_Reset_m29A15353BB495E913B9C13AC85F408B9272FD35E (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		// rend.material = originalMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___rend_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___originalMat_6;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ChangeMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMaterial__ctor_m299412F0E46735B612E3746C5C43606D8CAD11D8 (ChangeMaterial_tAC660926B06784D1AB46270E8C6AF0DECDBDE578* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Tool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tool_Start_mAF915D652F2F53C11F847E4A13E61D2D5AE02104 (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_1;
		L_1 = GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689(L_0, GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		__this->___inventory_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inventory_9), (void*)L_1);
		// interactable = GetComponent<GazeInteractable>();
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_2;
		L_2 = Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949(__this, Component_GetComponent_TisGazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F_mC359CD85F403AE0700CDB6C42ABF9112D2F6E949_RuntimeMethod_var);
		__this->___interactable_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_10), (void*)L_2);
		// givingScale = new Vector3(scaleModel, scaleModel, scaleModel);
		float L_3 = __this->___scaleModel_7;
		float L_4 = __this->___scaleModel_7;
		float L_5 = __this->___scaleModel_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->___givingScale_11 = L_6;
		// interactable.OnGazeActivated.AddListener(Pick);
		GazeInteractable_tBC9011AD5C10D4B3A4AFAFFF5967820A7A296E4F* L_7 = __this->___interactable_10;
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = L_7->___OnGazeActivated_12;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Tool::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tool_Drop_mA4DA9CA8113B29B2A23D02C2B0D0D384EE2A05FC (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, const RuntimeMethod* method) 
{
	{
		// inventory.CleanInventory();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_0 = __this->___inventory_9;
		NullCheck(L_0);
		Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Tool::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tool_Equals_m94D323AAE38DFFD94FEDD78DF23C340E9F12D01C (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_000d:
	{
		// if (toolName != name)
		String_t* L_2 = __this->___toolName_6;
		String_t* L_3 = ___name0;
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_0021:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void Tool::Pick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tool_Pick_m151AF4A3A791F678C813DB4397400550AE332006 (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(rotator!= null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___rotator_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// inventory.AddToInventory(this, givingScale, rotator.localRotation);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_3 = __this->___inventory_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___givingScale_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___rotator_8;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		NullCheck(L_3);
		Inventory_AddToInventory_m3BD19A2163655D7ADADE6BA68D16416B4FC3BCBB(L_3, __this, L_4, L_6, NULL);
		goto IL_004d;
	}

IL_0033:
	{
		// inventory.AddToInventory(this, givingScale, Quaternion.identity);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_7 = __this->___inventory_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___givingScale_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_7);
		Inventory_AddToInventory_m3BD19A2163655D7ADADE6BA68D16416B4FC3BCBB(L_7, __this, L_8, L_9, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Tool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tool__ctor_m116A6411B07921F5B0F6FFB2AEDBD09E49BD0CF9 (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, const RuntimeMethod* method) 
{
	{
		FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429(__this, NULL);
		return;
	}
}
// UnityEngine.GameObject Tool::IPickeable.get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tool_IPickeable_get_gameObject_m792EA4723505E598073D644A27B2D1253532021F (Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
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
// System.Void WorkingTable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkingTable_Start_mA7B9D7041900C136F2151F563C005DD724F0571A (WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interactable = GetComponent<GazeInteractableFood>();
		GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* L_0;
		L_0 = Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334(__this, Component_GetComponent_TisGazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627_m9A8704D46394D145C3886ADD8B58F17D09EF6334_RuntimeMethod_var);
		__this->___interactable_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_6), (void*)L_0);
		// inv = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_1);
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_2;
		L_2 = GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689(L_1, GameObject_GetComponent_TisInventory_tF939A06B3A6FC9605B83740B581334D9DB672574_mEC6CFD7D02CD53ABD620F2400342A3868B29F689_RuntimeMethod_var);
		__this->___inv_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inv_8), (void*)L_2);
		// interactable.OnGazeActivated.AddListener(PutIn);
		GazeInteractableFood_tB2744F7BAFF2D97CBC2F89AEC5AFA7E5FDD64627* L_3 = __this->___interactable_6;
		NullCheck(L_3);
		UnityEvent_1_t67DC948F89542951A25AAC45DA88DCC62FADB1A6* L_4 = L_3->___OnGazeActivated_11;
		UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE* L_5 = (UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE*)il2cpp_codegen_object_new(UnityAction_1_tCFD55128F1B5D5634D58227A31F8379A6E7AD0FE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mEFF442E5890FCC0268EEFBACFA2A7D70BF3C5EF6(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 5)), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3(L_4, L_5, UnityEvent_1_AddListener_mBFBE25E831EA43959887CBDB9F7B26E74AECADE3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WorkingTable::PutIn(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkingTable_PutIn_m74708727A6F510D8DA34D1F0F79D62B6363D08E0 (WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (food != null)
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_0 = ___food0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// SetFoodOnTable(food);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_3 = ___food0;
		WorkingTable_SetFoodOnTable_m25E6A880114362378A2A19AD2EFBA2B03470D909(__this, L_3, NULL);
		// inv.CleanInventory();
		Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* L_4 = __this->___inv_8;
		NullCheck(L_4);
		Inventory_CleanInventory_m40DD668A6E2B9913E42589503D01DB7194B79812(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void WorkingTable::SetFoodOnTable(BaseFood)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkingTable_SetFoodOnTable_m25E6A880114362378A2A19AD2EFBA2B03470D909 (WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF* __this, BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* ___food0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0DF9903C952F19753D158B7A98CC06D6F6CE2101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (int i = 0; i < sockets.Count; i++)
		V_0 = 0;
		goto IL_0091;
	}

IL_0008:
	{
		// if (!sockets[i].isFull)
		List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* L_0 = __this->___sockets_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* L_2;
		L_2 = List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB(L_0, L_1, List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___isFull_1;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_008c;
		}
	}
	{
		// food.gameObject.transform.parent = null;
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_5 = ___food0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// food.gameObject.transform.SetPositionAndRotation(sockets[i].socketTransform.position, sockets[i].socketTransform.rotation);
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_8 = ___food0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* L_11 = __this->___sockets_7;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* L_13;
		L_13 = List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB(L_11, L_12, List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB_RuntimeMethod_var);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13->___socketTransform_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* L_16 = __this->___sockets_7;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* L_18;
		L_18 = List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB(L_16, L_17, List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB_RuntimeMethod_var);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___socketTransform_0;
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		NullCheck(L_10);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_10, L_15, L_20, NULL);
		// food.AvtivateComponents();
		BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* L_21 = ___food0;
		NullCheck(L_21);
		BaseFood_AvtivateComponents_m5B4DBCEAFFEA310BBF14692C87603D0B7B597DA3(L_21, NULL);
		// sockets[i].isFull = true;
		List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* L_22 = __this->___sockets_7;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* L_24;
		L_24 = List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB(L_22, L_23, List_1_get_Item_m357585024C8AE15B281E3B3AE620260FF4EBF1FB_RuntimeMethod_var);
		NullCheck(L_24);
		L_24->___isFull_1 = (bool)1;
		// return;
		goto IL_00a6;
	}

IL_008c:
	{
		// for (int i = 0; i < sockets.Count; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0091:
	{
		// for (int i = 0; i < sockets.Count; i++)
		int32_t L_26 = V_0;
		List_1_tE57738A6C844B6E69AF650FC5ACA4A0591E34831* L_27 = __this->___sockets_7;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m0DF9903C952F19753D158B7A98CC06D6F6CE2101_inline(L_27, List_1_get_Count_m0DF9903C952F19753D158B7A98CC06D6F6CE2101_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_0008;
		}
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void WorkingTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkingTable__ctor_m881359CC171CFAA8756B5B4873D3DEACB99855F7 (WorkingTable_t5463CCE3C34C203F75FC2125418CF7542F3132FF* __this, const RuntimeMethod* method) 
{
	{
		FoodTruckObject__ctor_m620125A0D7CA7DF6A10A55E050798DA121C64429(__this, NULL);
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
// System.Void WorkingTable/TableSockets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableSockets__ctor_m12E6E8FBE9C699DFCC68DF134F394D38A3AF23F8 (TableSockets_tB35006CC578C18ECE5F1A9AA85ADC411C1E67187* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFull = false;
		__this->___isFull_1 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* Inventory_get_CntTool_mBFAA9897C74E716BFDD2D1D7C1113FB76D0E7469_inline (Inventory_tF939A06B3A6FC9605B83740B581334D9DB672574* __this, const RuntimeMethod* method) 
{
	{
		// public Tool CntTool { get => cntTool; set => cntTool = value; }
		Tool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B* L_0 = __this->___cntTool_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BaseFood_get_FoodName_m766A2D5EE13416680299D82B3DFF26AB96289BD5_inline (BaseFood_t43843EFF238063D15F45B64C9B7ED820C0F2F7D9* __this, const RuntimeMethod* method) 
{
	{
		// public string FoodName { get => foodName; set => foodName = value; }
		String_t* L_0 = __this->___foodName_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_asset_mB150BFBAFA2BC91504C640B0065EF84C41EEF998_inline (PlayerInput_tBE96AF5A43484D32C39A7F108EE081D6425059EE* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
