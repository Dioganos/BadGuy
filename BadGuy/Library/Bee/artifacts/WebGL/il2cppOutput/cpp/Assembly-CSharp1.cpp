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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
// System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// TMPro.FastAction`1<System.Boolean>
struct FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3;
// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005;
// TMPro.FastAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Material>
struct FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Object>
struct FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B;
// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs>
struct FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D;
// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>
struct FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Outfrost.GoogleSheets.CellData[]
struct CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// Outfrost.GoogleSheets.GridData[]
struct GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// Outfrost.GoogleSheets.RowData[]
struct RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4;
// Outfrost.GoogleSheets.Sheet[]
struct SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Outfrost.Callback
struct Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Outfrost.GoogleSheets.CellData
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Outfrost.GoogleSheets.ExtendedValue
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C;
// TMPro.FastAction
struct FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Outfrost.GoogleSheets.GridData
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Outfrost.GoogleSheets.RowData
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Outfrost.GoogleSheets.Sheet
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88;
// Outfrost.GoogleSheets.SheetProperties
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Outfrost.Debug.VersionText
struct VersionText_t18B1BCE0D2D11E33DB7534B27E9491E5D9137732;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// TMPro.Examples.VertexZoom
struct VertexZoom_t51F05EB153497034D27896F07590D790A73981A6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Outfrost.Util/<DelayCoroutine>d__6
struct U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E;
// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123;
// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A9E1C0E43ED1481365320B45FC4321BE6701D0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m2EA6E8546AE6B4DDEF772A09A3A6825E1E58CC01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var;
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543;;
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com;
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com;;
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke;
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke;;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C;;
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com;
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com;;
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke;
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke;;
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C;;
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com;
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com;;
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke;
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke;;
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED;;
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com;
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com;;
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke;
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke;;
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038;;
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com;
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com;;
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke;
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke;;
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88;;
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com;
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com;;
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke;
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke;;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4;
struct SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<System.Action`1<A>> TMPro.FastAction`1::delegates
	LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C* ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> TMPro.FastAction`1::lookup
	Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E* ___lookup_1;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Outfrost.JsonResources
struct JsonResources_t8BCFA26758B32C4F8EE6EF2E776225A636CF028B  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9  : public RuntimeObject
{
};

struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields
{
	// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> TMPro.TMPro_EventManager::COMPUTE_DT_EVENT
	FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D* ___COMPUTE_DT_EVENT_0;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Material> TMPro.TMPro_EventManager::MATERIAL_PROPERTY_EVENT
	FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A* ___MATERIAL_PROPERTY_EVENT_1;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::FONT_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___FONT_PROPERTY_EVENT_2;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::SPRITE_ASSET_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___SPRITE_ASSET_PROPERTY_EVENT_3;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_PROPERTY_EVENT_4;
	// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> TMPro.TMPro_EventManager::DRAG_AND_DROP_MATERIAL_EVENT
	FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77* ___DRAG_AND_DROP_MATERIAL_EVENT_5;
	// TMPro.FastAction`1<System.Boolean> TMPro.TMPro_EventManager::TEXT_STYLE_PROPERTY_EVENT
	FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3* ___TEXT_STYLE_PROPERTY_EVENT_6;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::COLOR_GRADIENT_PROPERTY_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___COLOR_GRADIENT_PROPERTY_EVENT_7;
	// TMPro.FastAction TMPro.TMPro_EventManager::TMP_SETTINGS_PROPERTY_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___TMP_SETTINGS_PROPERTY_EVENT_8;
	// TMPro.FastAction TMPro.TMPro_EventManager::RESOURCE_LOAD_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___RESOURCE_LOAD_EVENT_9;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_UGUI_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_UGUI_PROPERTY_EVENT_10;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::TEXT_CHANGED_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___TEXT_CHANGED_EVENT_11;
};

// Outfrost.Util
struct Util_tCC3DA67C49C1DAC205D4E756257581BC3C564572  : public RuntimeObject
{
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

// Outfrost.Util/<DelayCoroutine>d__6
struct U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E  : public RuntimeObject
{
	// System.Int32 Outfrost.Util/<DelayCoroutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Outfrost.Util/<DelayCoroutine>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single Outfrost.Util/<DelayCoroutine>d__6::seconds
	float ___seconds_2;
	// Outfrost.Callback Outfrost.Util/<DelayCoroutine>d__6::callback
	Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* ___callback_3;
};

// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Single> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::modifiedCharScale
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___modifiedCharScale_0;
	// System.Comparison`1<System.Int32> TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<>9__0
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___U3CU3E9__0_1;
};

// TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10
struct U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.VertexZoom TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>4__this
	VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* ___U3CU3E4__this_2;
	// TMPro.Examples.VertexZoom/<>c__DisplayClass10_0 TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<>8__1
	U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* ___U3CU3E8__1_3;
	// TMPro.TMP_TextInfo TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<textInfo>5__2
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___U3CtextInfoU3E5__2_4;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<cachedMeshInfoVertexData>5__3
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___U3CcachedMeshInfoVertexDataU3E5__3_5;
	// System.Collections.Generic.List`1<System.Int32> TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::<scaleSortingOrder>5__4
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CscaleSortingOrderU3E5__4_6;
};

// TMPro.Examples.WarpTextExample/<WarpText>d__8
struct U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample/<WarpText>d__8::<>4__this
	WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* ___U3CU3E4__this_2;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_CurveScale>5__2
	float ___U3Cold_CurveScaleU3E5__2_3;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample/<WarpText>d__8::<old_curve>5__3
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___U3Cold_curveU3E5__3_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Outfrost.GoogleSheets.ExtendedValue
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C 
{
	// System.Double Outfrost.GoogleSheets.ExtendedValue::numberValue
	double ___numberValue_0;
	// System.String Outfrost.GoogleSheets.ExtendedValue::stringValue
	String_t* ___stringValue_1;
	// System.Boolean Outfrost.GoogleSheets.ExtendedValue::boolValue
	bool ___boolValue_2;
	// System.String Outfrost.GoogleSheets.ExtendedValue::formulaValue
	String_t* ___formulaValue_3;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.ExtendedValue
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke
{
	double ___numberValue_0;
	char* ___stringValue_1;
	int32_t ___boolValue_2;
	char* ___formulaValue_3;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.ExtendedValue
struct ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com
{
	double ___numberValue_0;
	Il2CppChar* ___stringValue_1;
	int32_t ___boolValue_2;
	Il2CppChar* ___formulaValue_3;
};

// Outfrost.GoogleSheets.GridData
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C 
{
	// System.Int32 Outfrost.GoogleSheets.GridData::startRow
	int32_t ___startRow_0;
	// System.Int32 Outfrost.GoogleSheets.GridData::startColumn
	int32_t ___startColumn_1;
	// Outfrost.GoogleSheets.RowData[] Outfrost.GoogleSheets.GridData::rowData
	RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4* ___rowData_2;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.GridData
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke
{
	int32_t ___startRow_0;
	int32_t ___startColumn_1;
	RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke* ___rowData_2;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.GridData
struct GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com
{
	int32_t ___startRow_0;
	int32_t ___startColumn_1;
	RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com* ___rowData_2;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Outfrost.GoogleSheets.RowData
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED 
{
	// Outfrost.GoogleSheets.CellData[] Outfrost.GoogleSheets.RowData::values
	CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2* ___values_0;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.RowData
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke
{
	CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke* ___values_0;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.RowData
struct RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com
{
	CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com* ___values_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Outfrost.GoogleSheets.SheetProperties
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038 
{
	// System.String Outfrost.GoogleSheets.SheetProperties::title
	String_t* ___title_0;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.SheetProperties
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke
{
	char* ___title_0;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.SheetProperties
struct SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com
{
	Il2CppChar* ___title_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Outfrost.GoogleSheets.Spreadsheet
struct Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF 
{
	// System.String Outfrost.GoogleSheets.Spreadsheet::spreadsheetId
	String_t* ___spreadsheetId_0;
	// Outfrost.GoogleSheets.Sheet[] Outfrost.GoogleSheets.Spreadsheet::sheets
	SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD* ___sheets_1;
	// System.String Outfrost.GoogleSheets.Spreadsheet::spreadsheetUrl
	String_t* ___spreadsheetUrl_2;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.Spreadsheet
struct Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_pinvoke
{
	char* ___spreadsheetId_0;
	Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke* ___sheets_1;
	char* ___spreadsheetUrl_2;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.Spreadsheet
struct Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_com
{
	Il2CppChar* ___spreadsheetId_0;
	Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com* ___sheets_1;
	Il2CppChar* ___spreadsheetUrl_2;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// Outfrost.GoogleSheets.CellData
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 
{
	// Outfrost.GoogleSheets.ExtendedValue Outfrost.GoogleSheets.CellData::userEnteredValue
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C ___userEnteredValue_0;
	// Outfrost.GoogleSheets.ExtendedValue Outfrost.GoogleSheets.CellData::effectiveValue
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C ___effectiveValue_1;
	// System.String Outfrost.GoogleSheets.CellData::formattedValue
	String_t* ___formattedValue_2;
	// System.String Outfrost.GoogleSheets.CellData::hyperlink
	String_t* ___hyperlink_3;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.CellData
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke ___userEnteredValue_0;
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke ___effectiveValue_1;
	char* ___formattedValue_2;
	char* ___hyperlink_3;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.CellData
struct CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com ___userEnteredValue_0;
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com ___effectiveValue_1;
	Il2CppChar* ___formattedValue_2;
	Il2CppChar* ___hyperlink_3;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Outfrost.GoogleSheets.Sheet
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 
{
	// Outfrost.GoogleSheets.SheetProperties Outfrost.GoogleSheets.Sheet::properties
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038 ___properties_0;
	// Outfrost.GoogleSheets.GridData[] Outfrost.GoogleSheets.Sheet::data
	GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286* ___data_1;
};
// Native definition for P/Invoke marshalling of Outfrost.GoogleSheets.Sheet
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke
{
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke ___properties_0;
	GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke* ___data_1;
};
// Native definition for COM marshalling of Outfrost.GoogleSheets.Sheet
struct Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com
{
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com ___properties_0;
	GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com* ___data_1;
};

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A_StaticFields
{
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___k_Zero_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};

// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A  : public MulticastDelegate_t
{
};

// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
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

// Outfrost.Callback
struct Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Outfrost.Debug.VersionText
struct VersionText_t18B1BCE0D2D11E33DB7534B27E9491E5D9137732  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TMPro.Examples.VertexZoom
struct VertexZoom_t51F05EB153497034D27896F07590D790A73981A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPro.Examples.VertexZoom::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.VertexZoom::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.VertexZoom::CurveScale
	float ___CurveScale_6;
	// TMPro.TMP_Text TMPro.Examples.VertexZoom::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_7;
	// System.Boolean TMPro.Examples.VertexZoom::hasTextChanged
	bool ___hasTextChanged_8;
};

// TMPro.Examples.WarpTextExample
struct WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_4;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___VertexCurve_5;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_6;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_7;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_8;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B m_Items[1];

	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Outfrost.GoogleSheets.RowData[]
struct RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4  : public RuntimeArray
{
	ALIGN_FIELD (8) RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED m_Items[1];

	inline RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___values_0), (void*)NULL);
	}
	inline RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___values_0), (void*)NULL);
	}
};
// Outfrost.GoogleSheets.CellData[]
struct CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2  : public RuntimeArray
{
	ALIGN_FIELD (8) CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 m_Items[1];

	inline CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___userEnteredValue_0))->___stringValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___userEnteredValue_0))->___formulaValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___effectiveValue_1))->___stringValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___effectiveValue_1))->___formulaValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___formattedValue_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___hyperlink_3), (void*)NULL);
		#endif
	}
	inline CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___userEnteredValue_0))->___stringValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___userEnteredValue_0))->___formulaValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___effectiveValue_1))->___stringValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___effectiveValue_1))->___formulaValue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___formattedValue_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___hyperlink_3), (void*)NULL);
		#endif
	}
};
// Outfrost.GoogleSheets.GridData[]
struct GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286  : public RuntimeArray
{
	ALIGN_FIELD (8) GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C m_Items[1];

	inline GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rowData_2), (void*)NULL);
	}
	inline GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rowData_2), (void*)NULL);
	}
};
// Outfrost.GoogleSheets.Sheet[]
struct SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD  : public RuntimeArray
{
	ALIGN_FIELD (8) Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 m_Items[1];

	inline Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___properties_0))->___title_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_1), (void*)NULL);
		#endif
	}
	inline Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___properties_0))->___title_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_1), (void*)NULL);
		#endif
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};

IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_back(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke& marshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled);
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_cleanup(ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_back(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com& marshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled);
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_cleanup(ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke_back(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke& marshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled);
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke_cleanup(RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com_back(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com& marshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled);
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com_cleanup(RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke_back(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke& marshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled);
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke_cleanup(CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com_back(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com& marshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled);
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com_cleanup(CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke_back(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke& marshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled);
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke_cleanup(SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke_back(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke& marshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled);
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke_cleanup(GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com_back(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com& marshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled);
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com_cleanup(SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com_back(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com& marshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled);
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com_cleanup(GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke_back(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke& marshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled);
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke_cleanup(Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com_back(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com& marshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled);
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com_cleanup(Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com& marshaled);

// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Add_mC02AC544AAF7A9FADBC0FB90589DAD6F7781DC1C_gshared (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___rhs0, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Remove_m01C59262AAA66732DF720BEF8EF8AE89CC8CDFB8_gshared (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___rhs0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___comparison0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m95478636F075134CA2998E22B214611472600983 (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Add(System.Action`1<A>)
inline void FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6 (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, const RuntimeMethod*))FastAction_1_Add_mC02AC544AAF7A9FADBC0FB90589DAD6F7781DC1C_gshared)((FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*)__this, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)___rhs0, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Remove(System.Action`1<A>)
inline void FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, const RuntimeMethod*))FastAction_1_Remove_m01C59262AAA66732DF720BEF8EF8AE89CC8CDFB8_gshared)((FastAction_1_t449603D5CCA25927CA5C5D0B777AE3451CB1859E*)__this, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)___rhs0, method);
}
// System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, const RuntimeMethod* method) ;
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::CopyMeshInfoVertexData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA (TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared)((Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*)__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*)___comparison0, method);
}
// System.Void TMPro.TMP_MeshInfo::SortGeometry(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_MeshInfo_SortGeometry_m74ED0FE2065414A659EE9A9C809E1B0B4A8A7734 (TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B* __this, RuntimeObject* ___sortingOrder0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_havePropertiesChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_havePropertiesChanged_mA38D7BC9E260BF29450738B827F2220A05662B31 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_Text::get_havePropertiesChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds TMPro.TMP_Text::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean Outfrost.Util::IsFacingCamera(UnityEngine.GameObject,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsFacingCamera_mE3EE6F5D3E1526669B58E8FC2520A625BB9C1BC3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void Outfrost.Util/<DelayCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__6__ctor_m7F57F079D2284CB5AA65F13C7A7E8B1A31CB848F (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Outfrost.Callback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_inline (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method) ;
// System.Int32 Outfrost.GoogleSheets.CellData::get_IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CellData_get_IntValue_m841D16F6CF1312F7CA6A43BA5C0E21381A24D891 (CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* __this, const RuntimeMethod* method) ;
// System.String Outfrost.GoogleSheets.CellData::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CellData_get_StringValue_m0B7C8276F3755F68E06D288DB6DBC51AECDBD441 (CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* __this, const RuntimeMethod* method) ;
// System.String Outfrost.GoogleSheets.CellData::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CellData_GetStringValue_m9A76A75C5828D0ED364A93F045EE02FA2919DABA (CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* __this, String_t* ___defaultValue0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String UnityEngine.Application::get_productName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_productName_m9314FB94C4DE1F1731084FF30B9555F44BA477EB (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_buildGUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.Examples.VertexZoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_Awake_m29C1DE789B968D726EDD69F605321A223D47C1A0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___m_TextComponent_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_OnEnable_mE3719F01B6A8590066988F425F8A63103B5A7B47 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var), NULL);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_0, L_1, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_OnDisable_mBB91C9EFA049395743D27358A427BB2B05850B47 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(ON_TEXT_CHANGED);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_0 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_1 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_1, __this, (intptr_t)((void*)VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7_RuntimeMethod_var), NULL);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_0, L_1, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_Start_mB03D03148C98EBC9117D69510D24F21978546FCB (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateVertexColors());
		RuntimeObject* L_0;
		L_0 = VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom::ON_TEXT_CHANGED(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom_ON_TEXT_CHANGED_mFF049D0455A7DD19D6BDACBEEB737B4AAE32DDA7 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == m_TextComponent)
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___obj0;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TextComponent_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// hasTextChanged = true;
		__this->___hasTextChanged_8 = (bool)1;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPro.Examples.VertexZoom::AnimateVertexColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VertexZoom_AnimateVertexColors_m632BD9DC8FB193AF2D5B540524B11AF139FDF5F0 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* L_0 = (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123*)il2cpp_codegen_object_new(U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123_il2cpp_TypeInfo_var);
		U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6(L_0, 0, NULL);
		U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.VertexZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexZoom__ctor_m454AF80ACB5C555BCB4B5E658A22B5A4FCC39422 (VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* __this, const RuntimeMethod* method) 
{
	{
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_4 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_5 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_6 = (1.0f);
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
// System.Void TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 TMPro.Examples.VertexZoom/<>c__DisplayClass10_0::<AnimateVertexColors>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___modifiedCharScale_0;
		int32_t L_1 = ___a0;
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = __this->___modifiedCharScale_0;
		int32_t L_4 = ___b1;
		float L_5;
		L_5 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_3, L_4, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_5, NULL);
		return L_6;
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
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10__ctor_m7A5B8E07B89E628DB7119F7F61311165A2DBC4D6 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_IDisposable_Dispose_m974E92A444C6343E94C76BB6CC6508F7AE4FD36E (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateVertexColorsU3Ed__10_MoveNext_m6DBC52A95A92A54A1801DC4CEE548FA568251D5E (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_7 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_9 = NULL;
	float V_10 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_11 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_12 = NULL;
	int32_t V_13 = 0;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* V_14 = NULL;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* G_B16_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B16_1 = NULL;
	Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* G_B15_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* G_B15_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_05b2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_3 = (U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_m8C69A89B34AA3D16243E69F1E0015856C791CC8A(L_3, NULL);
		__this->___U3CU3E8__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
		// m_TextComponent.ForceMeshUpdate();
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_4 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = L_4->___m_TextComponent_7;
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_5, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_6 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = L_6->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_8;
		L_8 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_7, NULL);
		__this->___U3CtextInfoU3E5__2_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextInfoU3E5__2_4), (void*)L_8);
		// TMP_MeshInfo[] cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_9 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_10;
		L_10 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_9, NULL);
		__this->___U3CcachedMeshInfoVertexDataU3E5__3_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoVertexDataU3E5__3_5), (void*)L_10);
		// List<float> modifiedCharScale = new List<float>();
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_11 = __this->___U3CU3E8__1_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_12 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_12, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		L_11->___modifiedCharScale_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___modifiedCharScale_0), (void*)L_12);
		// List<int> scaleSortingOrder = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_13, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___U3CscaleSortingOrderU3E5__4_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscaleSortingOrderU3E5__4_6), (void*)L_13);
		// hasTextChanged = true;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_14 = V_1;
		L_14->___hasTextChanged_8 = (bool)1;
	}

IL_0085:
	{
		// if (hasTextChanged)
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_15 = V_1;
		bool L_16 = L_15->___hasTextChanged_8;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// cachedMeshInfoVertexData = textInfo.CopyMeshInfoVertexData();
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_17 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_18;
		L_18 = TMP_TextInfo_CopyMeshInfoVertexData_mF66E2F8821470E68D95FEB53D456CFA86241C0CA(L_17, NULL);
		__this->___U3CcachedMeshInfoVertexDataU3E5__3_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedMeshInfoVertexDataU3E5__3_5), (void*)L_18);
		// hasTextChanged = false;
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_19 = V_1;
		L_19->___hasTextChanged_8 = (bool)0;
	}

IL_00a5:
	{
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_20 = __this->___U3CtextInfoU3E5__2_4;
		int32_t L_21 = L_20->___characterCount_3;
		V_3 = L_21;
		// if (characterCount == 0)
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00cd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_0085;
	}

IL_00d6:
	{
		// modifiedCharScale.Clear();
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_24 = __this->___U3CU3E8__1_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25 = L_24->___modifiedCharScale_0;
		List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline(L_25, List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		// scaleSortingOrder.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = __this->___U3CscaleSortingOrderU3E5__4_6;
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_26, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// for (int i = 0; i < characterCount; i++)
		V_4 = 0;
		goto IL_045a;
	}

IL_00f9:
	{
		// TMP_CharacterInfo charInfo = textInfo.characterInfo[i];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_27 = __this->___U3CtextInfoU3E5__2_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_28 = L_27->___characterInfo_11;
		int32_t L_29 = V_4;
		int32_t L_30 = L_29;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		// if (!charInfo.isVisible)
		bool L_32 = L_31.___isVisible_40;
		if (!L_32)
		{
			goto IL_0454;
		}
	}
	{
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_33 = __this->___U3CtextInfoU3E5__2_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_34 = L_33->___characterInfo_11;
		int32_t L_35 = V_4;
		int32_t L_36 = ((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___materialReferenceIndex_9;
		V_5 = L_36;
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_37 = __this->___U3CtextInfoU3E5__2_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_38 = L_37->___characterInfo_11;
		int32_t L_39 = V_4;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___vertexIndex_14;
		V_6 = L_40;
		// Vector3[] sourceVertices = cachedMeshInfoVertexData[materialIndex].vertices;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_41 = __this->___U3CcachedMeshInfoVertexDataU3E5__3_5;
		int32_t L_42 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___vertices_6;
		V_7 = L_43;
		// Vector2 charMidBasline = (sourceVertices[vertexIndex + 0] + sourceVertices[vertexIndex + 2]) / 2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = V_7;
		int32_t L_45 = V_6;
		int32_t L_46 = L_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = V_7;
		int32_t L_49 = V_6;
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_52, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_53, NULL);
		// Vector3 offset = charMidBasline;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_54, NULL);
		V_8 = L_55;
		// Vector3[] destinationVertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_56 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_57 = L_56->___meshInfo_16;
		int32_t L_58 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = ((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___vertices_6;
		V_9 = L_59;
		// destinationVertices[vertexIndex + 0] = sourceVertices[vertexIndex + 0] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = V_9;
		int32_t L_61 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = V_7;
		int32_t L_63 = V_6;
		int32_t L_64 = L_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_65, L_66, NULL);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_67);
		// destinationVertices[vertexIndex + 1] = sourceVertices[vertexIndex + 1] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_9;
		int32_t L_69 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = V_7;
		int32_t L_71 = V_6;
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_73, L_74, NULL);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_75);
		// destinationVertices[vertexIndex + 2] = sourceVertices[vertexIndex + 2] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = V_9;
		int32_t L_77 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = V_7;
		int32_t L_79 = V_6;
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_81, L_82, NULL);
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_83);
		// destinationVertices[vertexIndex + 3] = sourceVertices[vertexIndex + 3] - offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = V_9;
		int32_t L_85 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = V_7;
		int32_t L_87 = V_6;
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_89, L_90, NULL);
		(L_84)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_85, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_91);
		// float randomScale = Random.Range(1f, 1.5f);
		float L_92;
		L_92 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (1.5f), NULL);
		V_10 = L_92;
		// modifiedCharScale.Add(randomScale);
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_93 = __this->___U3CU3E8__1_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_94 = L_93->___modifiedCharScale_0;
		float L_95 = V_10;
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_94, L_95, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// scaleSortingOrder.Add(modifiedCharScale.Count - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_96 = __this->___U3CscaleSortingOrderU3E5__4_6;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_97 = __this->___U3CU3E8__1_3;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_98 = L_97->___modifiedCharScale_0;
		int32_t L_99;
		L_99 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_98, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_96, ((int32_t)il2cpp_codegen_subtract(L_99, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, Vector3.one * randomScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_100), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101;
		L_101 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_103 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_102, L_103, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_105;
		L_105 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_100, L_101, L_104, NULL);
		V_2 = L_105;
		// destinationVertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = V_9;
		int32_t L_107 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_108 = V_9;
		int32_t L_109 = V_6;
		int32_t L_110 = L_109;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_111, NULL);
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_112);
		// destinationVertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = V_9;
		int32_t L_114 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_115 = V_9;
		int32_t L_116 = V_6;
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_118, NULL);
		(L_113)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_114, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_119);
		// destinationVertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_120 = V_9;
		int32_t L_121 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_122 = V_9;
		int32_t L_123 = V_6;
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_123, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_124));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_125, NULL);
		(L_120)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_121, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_126);
		// destinationVertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(destinationVertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_127 = V_9;
		int32_t L_128 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = V_9;
		int32_t L_130 = V_6;
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_132, NULL);
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_128, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_133);
		// destinationVertices[vertexIndex + 0] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_134 = V_9;
		int32_t L_135 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_136 = ((L_134)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_135)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_136);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_137, L_138, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_136 = L_139;
		// destinationVertices[vertexIndex + 1] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_140 = V_9;
		int32_t L_141 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_142 = ((L_140)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_141, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_142);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_143, L_144, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_142 = L_145;
		// destinationVertices[vertexIndex + 2] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_146 = V_9;
		int32_t L_147 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = ((L_146)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_147, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_148);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_149, L_150, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_148 = L_151;
		// destinationVertices[vertexIndex + 3] += offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_152 = V_9;
		int32_t L_153 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_154 = ((L_152)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_153, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_154);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_155, L_156, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_154 = L_157;
		// Vector2[] sourceUVs0 = cachedMeshInfoVertexData[materialIndex].uvs0;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_158 = __this->___U3CcachedMeshInfoVertexDataU3E5__3_5;
		int32_t L_159 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_160 = ((L_158)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_159)))->___uvs0_9;
		V_11 = L_160;
		// Vector2[] destinationUVs0 = textInfo.meshInfo[materialIndex].uvs0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_161 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_162 = L_161->___meshInfo_16;
		int32_t L_163 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_164 = ((L_162)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_163)))->___uvs0_9;
		// destinationUVs0[vertexIndex + 0] = sourceUVs0[vertexIndex + 0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_165 = L_164;
		int32_t L_166 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_167 = V_11;
		int32_t L_168 = V_6;
		int32_t L_169 = L_168;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_170 = (L_167)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		(L_165)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_166), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_170);
		// destinationUVs0[vertexIndex + 1] = sourceUVs0[vertexIndex + 1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_171 = L_165;
		int32_t L_172 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_173 = V_11;
		int32_t L_174 = V_6;
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_175));
		(L_171)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_176);
		// destinationUVs0[vertexIndex + 2] = sourceUVs0[vertexIndex + 2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_177 = L_171;
		int32_t L_178 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_179 = V_11;
		int32_t L_180 = V_6;
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_182 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_182);
		// destinationUVs0[vertexIndex + 3] = sourceUVs0[vertexIndex + 3];
		int32_t L_183 = V_6;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_184 = V_11;
		int32_t L_185 = V_6;
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_187 = (L_184)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_186));
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_183, 3))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_187);
		// Color32[] sourceColors32 = cachedMeshInfoVertexData[materialIndex].colors32;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_188 = __this->___U3CcachedMeshInfoVertexDataU3E5__3_5;
		int32_t L_189 = V_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_190 = ((L_188)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_189)))->___colors32_11;
		V_12 = L_190;
		// Color32[] destinationColors32 = textInfo.meshInfo[materialIndex].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_191 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_192 = L_191->___meshInfo_16;
		int32_t L_193 = V_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_194 = ((L_192)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_193)))->___colors32_11;
		// destinationColors32[vertexIndex + 0] = sourceColors32[vertexIndex + 0];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_195 = L_194;
		int32_t L_196 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_197 = V_12;
		int32_t L_198 = V_6;
		int32_t L_199 = L_198;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_200 = (L_197)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		(L_195)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_196), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_200);
		// destinationColors32[vertexIndex + 1] = sourceColors32[vertexIndex + 1];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_201 = L_195;
		int32_t L_202 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_203 = V_12;
		int32_t L_204 = V_6;
		int32_t L_205 = ((int32_t)il2cpp_codegen_add(L_204, 1));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_206 = (L_203)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_205));
		(L_201)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_202, 1))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_206);
		// destinationColors32[vertexIndex + 2] = sourceColors32[vertexIndex + 2];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_207 = L_201;
		int32_t L_208 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_209 = V_12;
		int32_t L_210 = V_6;
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(L_210, 2));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_212 = (L_209)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_211));
		(L_207)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_208, 2))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_212);
		// destinationColors32[vertexIndex + 3] = sourceColors32[vertexIndex + 3];
		int32_t L_213 = V_6;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_214 = V_12;
		int32_t L_215 = V_6;
		int32_t L_216 = ((int32_t)il2cpp_codegen_add(L_215, 3));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_217 = (L_214)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_216));
		(L_207)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_213, 3))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_217);
	}

IL_0454:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_218 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_218, 1));
	}

IL_045a:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_219 = V_4;
		int32_t L_220 = V_3;
		if ((((int32_t)L_219) < ((int32_t)L_220)))
		{
			goto IL_00f9;
		}
	}
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		V_13 = 0;
		goto IL_0585;
	}

IL_046a:
	{
		// scaleSortingOrder.Sort((a, b) => modifiedCharScale[a].CompareTo(modifiedCharScale[b]));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_221 = __this->___U3CscaleSortingOrderU3E5__4_6;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_222 = __this->___U3CU3E8__1_3;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_223 = L_222->___U3CU3E9__0_1;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_224 = L_223;
		G_B15_0 = L_224;
		G_B15_1 = L_221;
		if (L_224)
		{
			G_B16_0 = L_224;
			G_B16_1 = L_221;
			goto IL_04a0;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_225 = __this->___U3CU3E8__1_3;
		U3CU3Ec__DisplayClass10_0_t62C0E1CEED92DDFC3DD4C58EC8806FC7D82A7FB7* L_226 = __this->___U3CU3E8__1_3;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_227 = (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*)il2cpp_codegen_object_new(Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C(L_227, L_226, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CAnimateVertexColorsU3Eb__0_m8E51A05E012CCFA439DCF10A8B5C4FA196E4344A_RuntimeMethod_var), NULL);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_228 = L_227;
		V_14 = L_228;
		L_225->___U3CU3E9__0_1 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&L_225->___U3CU3E9__0_1), (void*)L_228);
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_229 = V_14;
		G_B16_0 = L_229;
		G_B16_1 = G_B15_1;
	}

IL_04a0:
	{
		List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4(G_B16_1, G_B16_0, List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_RuntimeMethod_var);
		// textInfo.meshInfo[i].SortGeometry(scaleSortingOrder);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_230 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_231 = L_230->___meshInfo_16;
		int32_t L_232 = V_13;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_233 = __this->___U3CscaleSortingOrderU3E5__4_6;
		TMP_MeshInfo_SortGeometry_m74ED0FE2065414A659EE9A9C809E1B0B4A8A7734(((L_231)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_232))), L_233, NULL);
		// textInfo.meshInfo[i].mesh.vertices = textInfo.meshInfo[i].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_234 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_235 = L_234->___meshInfo_16;
		int32_t L_236 = V_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_237 = ((L_235)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_236)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_238 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_239 = L_238->___meshInfo_16;
		int32_t L_240 = V_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_241 = ((L_239)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_240)))->___vertices_6;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_237, L_241, NULL);
		// textInfo.meshInfo[i].mesh.uv = textInfo.meshInfo[i].uvs0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_242 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_243 = L_242->___meshInfo_16;
		int32_t L_244 = V_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_245 = ((L_243)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_244)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_246 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_247 = L_246->___meshInfo_16;
		int32_t L_248 = V_13;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_249 = ((L_247)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_248)))->___uvs0_9;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_245, L_249, NULL);
		// textInfo.meshInfo[i].mesh.colors32 = textInfo.meshInfo[i].colors32;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_250 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_251 = L_250->___meshInfo_16;
		int32_t L_252 = V_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_253 = ((L_251)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_252)))->___mesh_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_254 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_255 = L_254->___meshInfo_16;
		int32_t L_256 = V_13;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_257 = ((L_255)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_256)))->___colors32_11;
		Mesh_set_colors32_m0E4462B7A1D613E6FB15DD7584BCE5491C17820F(L_253, L_257, NULL);
		// m_TextComponent.UpdateGeometry(textInfo.meshInfo[i].mesh, i);
		VertexZoom_t51F05EB153497034D27896F07590D790A73981A6* L_258 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_259 = L_258->___m_TextComponent_7;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_260 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_261 = L_260->___meshInfo_16;
		int32_t L_262 = V_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_263 = ((L_261)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_262)))->___mesh_4;
		int32_t L_264 = V_13;
		VirtualActionInvoker2< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t >::Invoke(107 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_259, L_263, L_264);
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_265 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0585:
	{
		// for (int i = 0; i < textInfo.meshInfo.Length; i++)
		int32_t L_266 = V_13;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_267 = __this->___U3CtextInfoU3E5__2_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_268 = L_267->___meshInfo_16;
		if ((((int32_t)L_266) < ((int32_t)((int32_t)(((RuntimeArray*)L_268)->max_length)))))
		{
			goto IL_046a;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_269 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_269, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_269;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_269);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_05b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0085;
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m110CD16E89E725B1484D24FFB1753768F78A988B (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821 (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_Reset_mDE5E71C88F5096FD70EB061287ADF0B847732821_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateVertexColorsU3Ed__10_System_Collections_IEnumerator_get_Current_m14B89756695EE73AEBB6F3A613F65E1343A8CC2C (U3CAnimateVertexColorsU3Ed__10_t2EB585545BBB614E711BE1D5C7BF139053486123* __this, const RuntimeMethod* method) 
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
// System.Void TMPro.Examples.WarpTextExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Awake_m92842E51B4DBB2E4341ACB179468049FAB23949F (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TextComponent = gameObject.GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_0, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___m_TextComponent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextComponent_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample_Start_m3339EDC03B6FC498916520CBCCDB5F9FA090F809 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WarpText());
		RuntimeObject* L_0;
		L_0 = WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::CopyAnimationCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimationCurve newCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_0, NULL);
		// newCurve.keys = curve.keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = L_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = ___curve0;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3;
		L_3 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_2, NULL);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_1, L_3, NULL);
		// return newCurve;
		return L_1;
	}
}
// System.Collections.IEnumerator TMPro.Examples.WarpTextExample::WarpText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WarpTextExample_WarpText_mBE4B6E5B6D8AAE9340CD59B1FA9DFE9A34665E98 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* L_0 = (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E*)il2cpp_codegen_object_new(U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E_il2cpp_TypeInfo_var);
		U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB(L_0, 0, NULL);
		U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TMPro.Examples.WarpTextExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarpTextExample__ctor_mBD48A5403123F25C45B5E60C19E1EA397FBA1795 (WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve VertexCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.25f, 2.0f), new Keyframe(0.5f, 0), new Keyframe(0.75f, 2.0f), new Keyframe(1, 0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.25f), (2.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (0.5f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_8), (0.75f), (2.0f), /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_8);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_11, L_9, NULL);
		__this->___VertexCurve_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VertexCurve_5), (void*)L_11);
		// public float AngleMultiplier = 1.0f;
		__this->___AngleMultiplier_6 = (1.0f);
		// public float SpeedMultiplier = 1.0f;
		__this->___SpeedMultiplier_7 = (1.0f);
		// public float CurveScale = 1.0f;
		__this->___CurveScale_8 = (1.0f);
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
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8__ctor_m1943C34BBEAF121203BA8C5D725E991283A4A3BB (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_IDisposable_Dispose_m145D2DA1026419984AD79D5D62FBC38C9441AB53 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPro.Examples.WarpTextExample/<WarpText>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWarpTextU3Ed__8_MoveNext_mCE7A826C5E4854C2C509C77BD18F5A9B6D691B02 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_0473;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// VertexCurve.preWrapMode = WrapMode.Clamp;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_3 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = L_3->___VertexCurve_5;
		AnimationCurve_set_preWrapMode_mA618E67F536483FA5F3507A2D97C045E089D1B2D(L_4, 1, NULL);
		// VertexCurve.postWrapMode = WrapMode.Clamp;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_5 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = L_5->___VertexCurve_5;
		AnimationCurve_set_postWrapMode_m39A4758ABD5D2AEE475940829352792FE7E9CBA9(L_6, 1, NULL);
		// m_TextComponent.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_7 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = L_7->___m_TextComponent_4;
		TMP_Text_set_havePropertiesChanged_mA38D7BC9E260BF29450738B827F2220A05662B31(L_8, (bool)1, NULL);
		// CurveScale *= 10;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_9 = V_1;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_10 = V_1;
		float L_11 = L_10->___CurveScale_8;
		L_9->___CurveScale_8 = ((float)il2cpp_codegen_multiply(L_11, (10.0f)));
		// float old_CurveScale = CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_12 = V_1;
		float L_13 = L_12->___CurveScale_8;
		__this->___U3Cold_CurveScaleU3E5__2_3 = L_13;
		// AnimationCurve old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_14 = V_1;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_15 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = L_15->___VertexCurve_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17;
		L_17 = WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF(L_14, L_16, NULL);
		__this->___U3Cold_curveU3E5__3_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cold_curveU3E5__3_4), (void*)L_17);
	}

IL_007d:
	{
		// if (!m_TextComponent.havePropertiesChanged && old_CurveScale == CurveScale && old_curve.keys[1].value == VertexCurve.keys[1].value)
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_18 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = L_18->___m_TextComponent_4;
		bool L_20;
		L_20 = TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF_inline(L_19, NULL);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		float L_21 = __this->___U3Cold_CurveScaleU3E5__2_3;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_22 = V_1;
		float L_23 = L_22->___CurveScale_8;
		if ((!(((float)L_21) == ((float)L_23))))
		{
			goto IL_00df;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = __this->___U3Cold_curveU3E5__3_4;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_25;
		L_25 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_24, NULL);
		float L_26;
		L_26 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_27 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_28 = L_27->___VertexCurve_5;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_29;
		L_29 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_28, NULL);
		float L_30;
		L_30 = Keyframe_get_value_m53E6B7609086AAAA46E24BAF734EF08E16A3FD6C(((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))), NULL);
		if ((!(((float)L_26) == ((float)L_30))))
		{
			goto IL_00df;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_007d;
	}

IL_00df:
	{
		// old_CurveScale = CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_31 = V_1;
		float L_32 = L_31->___CurveScale_8;
		__this->___U3Cold_CurveScaleU3E5__2_3 = L_32;
		// old_curve = CopyAnimationCurve(VertexCurve);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_33 = V_1;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_34 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_35 = L_34->___VertexCurve_5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_36;
		L_36 = WarpTextExample_CopyAnimationCurve_m65A93388CC2CF58CD2E08CC8EF682A2C97C558FF(L_33, L_35, NULL);
		__this->___U3Cold_curveU3E5__3_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cold_curveU3E5__3_4), (void*)L_36);
		// m_TextComponent.ForceMeshUpdate(); // Generate the mesh and populate the textInfo with data we can use and manipulate.
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_37 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_38 = L_37->___m_TextComponent_4;
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_38, (bool)0, (bool)0);
		// TMP_TextInfo textInfo = m_TextComponent.textInfo;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_39 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40 = L_39->___m_TextComponent_4;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_41;
		L_41 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline(L_40, NULL);
		V_4 = L_41;
		// int characterCount = textInfo.characterCount;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_42 = V_4;
		int32_t L_43 = L_42->___characterCount_3;
		V_5 = L_43;
		// if (characterCount == 0) continue;
		int32_t L_44 = V_5;
		if (!L_44)
		{
			goto IL_007d;
		}
	}
	{
		// float boundsMinX = m_TextComponent.bounds.min.x;  //textInfo.meshInfo[0].mesh.bounds.min.x;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_45 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46 = L_45->___m_TextComponent_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_47;
		L_47 = TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189(L_46, NULL);
		V_8 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_8), NULL);
		float L_49 = L_48.___x_2;
		V_6 = L_49;
		// float boundsMaxX = m_TextComponent.bounds.max.x;  //textInfo.meshInfo[0].mesh.bounds.max.x;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_50 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_51 = L_50->___m_TextComponent_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_52;
		L_52 = TMP_Text_get_bounds_mAEE407DE6CA2E1D1180868C03A3F0A3B6E455189(L_51, NULL);
		V_8 = L_52;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_8), NULL);
		float L_54 = L_53.___x_2;
		V_7 = L_54;
		// for (int i = 0; i < characterCount; i++)
		V_9 = 0;
		goto IL_0446;
	}

IL_0165:
	{
		// if (!textInfo.characterInfo[i].isVisible)
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_55 = V_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_56 = L_55->___characterInfo_11;
		int32_t L_57 = V_9;
		bool L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___isVisible_40;
		if (!L_58)
		{
			goto IL_0440;
		}
	}
	{
		// int vertexIndex = textInfo.characterInfo[i].vertexIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_59 = V_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_60 = L_59->___characterInfo_11;
		int32_t L_61 = V_9;
		int32_t L_62 = ((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_61)))->___vertexIndex_14;
		V_10 = L_62;
		// int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_63 = V_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_64 = L_63->___characterInfo_11;
		int32_t L_65 = V_9;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___materialReferenceIndex_9;
		V_11 = L_66;
		// vertices = textInfo.meshInfo[materialIndex].vertices;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_67 = V_4;
		TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* L_68 = L_67->___meshInfo_16;
		int32_t L_69 = V_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = ((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)))->___vertices_6;
		V_2 = L_70;
		// Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = V_2;
		int32_t L_72 = V_10;
		float L_73 = ((L_71)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_72)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = V_2;
		int32_t L_75 = V_10;
		float L_76 = ((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 2)))))->___x_2;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_77 = V_4;
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_78 = L_77->___characterInfo_11;
		int32_t L_79 = V_9;
		float L_80 = ((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_79)))->___baseLine_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_81), ((float)(((float)il2cpp_codegen_add(L_73, L_76))/(2.0f))), L_80, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_81, NULL);
		V_12 = L_82;
		// vertices[vertexIndex + 0] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = V_2;
		int32_t L_84 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = ((L_83)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_84)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_86, L_88, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_85 = L_89;
		// vertices[vertexIndex + 1] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = V_2;
		int32_t L_91 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = ((L_90)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_95, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92 = L_96;
		// vertices[vertexIndex + 2] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_97 = V_2;
		int32_t L_98 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = ((L_97)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_98, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_99);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_100, L_102, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_99 = L_103;
		// vertices[vertexIndex + 3] += -offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_104 = V_2;
		int32_t L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = ((L_104)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_105, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_107, L_109, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_106 = L_110;
		// float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_12;
		float L_112 = L_111.___x_2;
		float L_113 = V_6;
		float L_114 = V_7;
		float L_115 = V_6;
		V_13 = ((float)(((float)il2cpp_codegen_subtract(L_112, L_113))/((float)il2cpp_codegen_subtract(L_114, L_115))));
		// float x1 = x0 + 0.0001f;
		float L_116 = V_13;
		V_14 = ((float)il2cpp_codegen_add(L_116, (9.99999975E-05f)));
		// float y0 = VertexCurve.Evaluate(x0) * CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_117 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_118 = L_117->___VertexCurve_5;
		float L_119 = V_13;
		float L_120;
		L_120 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_118, L_119, NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_121 = V_1;
		float L_122 = L_121->___CurveScale_8;
		V_15 = ((float)il2cpp_codegen_multiply(L_120, L_122));
		// float y1 = VertexCurve.Evaluate(x1) * CurveScale;
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_123 = V_1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_124 = L_123->___VertexCurve_5;
		float L_125 = V_14;
		float L_126;
		L_126 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_124, L_125, NULL);
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_127 = V_1;
		float L_128 = L_127->___CurveScale_8;
		V_16 = ((float)il2cpp_codegen_multiply(L_126, L_128));
		// Vector3 horizontal = new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_129), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);
		float L_130 = V_14;
		float L_131 = V_7;
		float L_132 = V_6;
		float L_133 = V_6;
		float L_134 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_135), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_130, ((float)il2cpp_codegen_subtract(L_131, L_132)))), L_133)), L_134, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_12;
		float L_137 = L_136.___x_2;
		float L_138 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_139), L_137, L_138, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_135, L_139, NULL);
		V_17 = L_140;
		// float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = L_129;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_17), NULL);
		float L_143;
		L_143 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_141, L_142, NULL);
		float L_144;
		L_144 = acosf(L_143);
		V_18 = ((float)il2cpp_codegen_multiply(L_144, (57.2957802f)));
		// Vector3 cross = Vector3.Cross(horizontal, tangent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_141, L_145, NULL);
		// float angle = cross.z > 0 ? dot : 360 - dot;
		float L_147 = L_146.___z_4;
		if ((((float)L_147) > ((float)(0.0f))))
		{
			goto IL_0339;
		}
	}
	{
		float L_148 = V_18;
		G_B14_0 = ((float)il2cpp_codegen_subtract((360.0f), L_148));
		goto IL_033b;
	}

IL_0339:
	{
		float L_149 = V_18;
		G_B14_0 = L_149;
	}

IL_033b:
	{
		V_19 = G_B14_0;
		// matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
		float L_150 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_151), (0.0f), L_150, (0.0f), /*hidden argument*/NULL);
		float L_152 = V_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_153;
		L_153 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_152, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_155;
		L_155 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_151, L_153, L_154, NULL);
		V_3 = L_155;
		// vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_156 = V_2;
		int32_t L_157 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_158 = V_2;
		int32_t L_159 = V_10;
		int32_t L_160 = L_159;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_161, NULL);
		(L_156)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_162);
		// vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_163 = V_2;
		int32_t L_164 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = V_2;
		int32_t L_166 = V_10;
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168 = (L_165)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_167));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_168, NULL);
		(L_163)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_164, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_169);
		// vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_170 = V_2;
		int32_t L_171 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_172 = V_2;
		int32_t L_173 = V_10;
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(L_173, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_175, NULL);
		(L_170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_171, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_176);
		// vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = V_2;
		int32_t L_178 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_179 = V_2;
		int32_t L_180 = V_10;
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_182, NULL);
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_178, 3))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_183);
		// vertices[vertexIndex + 0] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_184 = V_2;
		int32_t L_185 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_186 = ((L_184)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_185)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_186);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_187, L_188, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_186 = L_189;
		// vertices[vertexIndex + 1] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_190 = V_2;
		int32_t L_191 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_192 = ((L_190)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_191, 1)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_192);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195;
		L_195 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_193, L_194, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_192 = L_195;
		// vertices[vertexIndex + 2] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_196 = V_2;
		int32_t L_197 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_198 = ((L_196)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_197, 2)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_198);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		L_201 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_199, L_200, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_198 = L_201;
		// vertices[vertexIndex + 3] += offsetToMidBaseline;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_202 = V_2;
		int32_t L_203 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_204 = ((L_202)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_203, 3)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_204);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		L_207 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_205, L_206, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_204 = L_207;
	}

IL_0440:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_208 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_208, 1));
	}

IL_0446:
	{
		// for (int i = 0; i < characterCount; i++)
		int32_t L_209 = V_9;
		int32_t L_210 = V_5;
		if ((((int32_t)L_209) < ((int32_t)L_210)))
		{
			goto IL_0165;
		}
	}
	{
		// m_TextComponent.UpdateVertexData();
		WarpTextExample_tB54C406E58B9D90FC49CD73B5FBF7FAFCCD3CD7E* L_211 = V_1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_212 = L_211->___m_TextComponent_4;
		VirtualActionInvoker0::Invoke(109 /* System.Void TMPro.TMP_Text::UpdateVertexData() */, L_212);
		// yield return new WaitForSeconds(0.025f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_213 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_213, (0.0250000004f), NULL);
		__this->___U3CU3E2__current_1 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_213);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0473:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_007d;
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWarpTextU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD80368E9B7E259311C03E406B75161ED6F7618E3 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWarpTextU3Ed__8_System_Collections_IEnumerator_Reset_m07746C332D2D8CE5DEA59873C26F2FAD4B369B42_RuntimeMethod_var)));
	}
}
// System.Object TMPro.Examples.WarpTextExample/<WarpText>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWarpTextU3Ed__8_System_Collections_IEnumerator_get_Current_m71D7F84D9DEF63BEC6B44866515DDCF35B142A19 (U3CWarpTextU3Ed__8_tF1A14DF86D48AE9144155D4BF8E31E63471F358E* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_Multicast(Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* currentDelegate = reinterpret_cast<Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_OpenInst(Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_OpenStatic(Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_OpenStaticInvoker(Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_ClosedStaticInvoker(Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Outfrost.Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_m3B31763C395371AD905EE18DD7D8DA1A8EA0AD91 (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_Multicast;
}
// System.Void Outfrost.Callback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809 (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Outfrost.Callback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_mFFFBA6BBF61BAF04D0DF2D31A13DAEE2F2027CD9 (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Outfrost.Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_mFE367BC112CEB23DCEFBF799113439623670AD44 (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Boolean Outfrost.Util::IsPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsPrefab_m9E4DD8902B05C7316475B8152A209B6ACC3615C2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return gameObject.scene.rootCount == 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Outfrost.Util::OrthoCameraWorldDiagonalSize(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Util_OrthoCameraWorldDiagonalSize_mB47ACB976E2BD50E4DF5AB3F190C7B38B0E15A4F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float height = camera.orthographicSize * 2.0f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (2.0f)));
		// float width = height * camera.aspect;
		float L_2 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___camera0;
		float L_4;
		L_4 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_3, NULL);
		// return Mathf.Sqrt(width * width + height * height);
		float L_5 = ((float)il2cpp_codegen_multiply(L_2, L_4));
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)))));
		return L_8;
	}
}
// System.Void Outfrost.Util::SetTextAlpha(TMPro.TextMeshPro,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util_SetTextAlpha_m8158CA92D638B26947FF0452D83661B4075ADF10 (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text0, float ___alpha1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color textColor = text.color;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = ___text0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		V_0 = L_1;
		// textColor.a = Mathf.Clamp01(alpha);
		float L_2 = ___alpha1;
		float L_3;
		L_3 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_2, NULL);
		(&V_0)->___a_3 = L_3;
		// text.color = textColor;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_4 = ___text0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Boolean Outfrost.Util::IsFacingCamera(UnityEngine.GameObject,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsFacingCamera_mE3EE6F5D3E1526669B58E8FC2520A625BB9C1BC3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) 
{
	{
		// return Vector3.Dot(gameObject.transform.forward, camera.transform.forward) > 0.0f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___camera1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6;
		L_6 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_2, L_5, NULL);
		return (bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Boolean Outfrost.Util::IsFacingCamera(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsFacingCamera_mA23FFDD3AC575670F81E833AA152F0904A7BFDE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	{
		// return IsFacingCamera(gameObject, Camera.main);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		bool L_2;
		L_2 = Util_IsFacingCamera_mE3EE6F5D3E1526669B58E8FC2520A625BB9C1BC3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] Outfrost.Util::BytesFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Util_BytesFromStream_mAB12581C459724C571B3B8B68F9F317DF67F5886 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// byte[] buffer = new byte[16 * 1024];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16384));
		V_0 = L_0;
		// using (MemoryStream memoryStream = new MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_1;
					if (!L_2)
					{
						goto IL_003e;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_0013_1:
			{
				// memoryStream.Write(buffer, 0, bytesRead);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
				int32_t L_6 = V_2;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
			}

IL_001c_1:
			{
				// while ((bytesRead = input.Read(buffer, 0, buffer.Length)) > 0)
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___input0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
				int32_t L_10;
				L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
				int32_t L_11 = L_10;
				V_2 = L_11;
				if ((((int32_t)L_11) > ((int32_t)0)))
				{
					goto IL_0013_1;
				}
			}
			{
				// return memoryStream.ToArray();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_12);
				V_3 = L_13;
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		return L_14;
	}
}
// System.Collections.IEnumerator Outfrost.Util::DelayCoroutine(Outfrost.Callback,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Util_DelayCoroutine_mC60F561C2EF39A9F630B72477E1C9949690FA214 (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* ___callback0, float ___seconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* L_0 = (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E*)il2cpp_codegen_object_new(U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E_il2cpp_TypeInfo_var);
		U3CDelayCoroutineU3Ed__6__ctor_m7F57F079D2284CB5AA65F13C7A7E8B1A31CB848F(L_0, 0, NULL);
		U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* L_1 = L_0;
		Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* L_2 = ___callback0;
		L_1->___callback_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_3), (void*)L_2);
		U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* L_3 = L_1;
		float L_4 = ___seconds1;
		L_3->___seconds_2 = L_4;
		return L_3;
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
// System.Void Outfrost.Util/<DelayCoroutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__6__ctor_m7F57F079D2284CB5AA65F13C7A7E8B1A31CB848F (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Outfrost.Util/<DelayCoroutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__6_System_IDisposable_Dispose_m7C6E2940CBA539BCDDF353B8C7928DBECEDFD736 (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Outfrost.Util/<DelayCoroutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayCoroutineU3Ed__6_MoveNext_m704D1CDA3E040CBE74E17E97F32EBA5F6790C0EC (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, const RuntimeMethod* method) 
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
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(seconds);
		float L_3 = __this->___seconds_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// callback();
		Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* L_5 = __this->___callback_3;
		Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_inline(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Outfrost.Util/<DelayCoroutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayCoroutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m123D0A88B9E65ADE4719DC7C6127AED57C9F3E44 (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Outfrost.Util/<DelayCoroutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m2EA6E8546AE6B4DDEF772A09A3A6825E1E58CC01 (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayCoroutineU3Ed__6_System_Collections_IEnumerator_Reset_m2EA6E8546AE6B4DDEF772A09A3A6825E1E58CC01_RuntimeMethod_var)));
	}
}
// System.Object Outfrost.Util/<DelayCoroutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayCoroutineU3Ed__6_System_Collections_IEnumerator_get_Current_mE04FD3372A75013D88A4355B07B54D03E24F560E (U3CDelayCoroutineU3Ed__6_tA3826C3B0839D37208A8B191B4D96D27827E611E* __this, const RuntimeMethod* method) 
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




// Conversion methods for marshalling of: Outfrost.GoogleSheets.CellData
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke& marshaled)
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke(unmarshaled.___userEnteredValue_0, marshaled.___userEnteredValue_0);
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke(unmarshaled.___effectiveValue_1, marshaled.___effectiveValue_1);
	marshaled.___formattedValue_2 = il2cpp_codegen_marshal_string(unmarshaled.___formattedValue_2);
	marshaled.___hyperlink_3 = il2cpp_codegen_marshal_string(unmarshaled.___hyperlink_3);
}
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke_back(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke& marshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled)
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C unmarshaleduserEnteredValue_temp_0;
	memset((&unmarshaleduserEnteredValue_temp_0), 0, sizeof(unmarshaleduserEnteredValue_temp_0));
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_back(marshaled.___userEnteredValue_0, unmarshaleduserEnteredValue_temp_0);
	unmarshaled.___userEnteredValue_0 = unmarshaleduserEnteredValue_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___userEnteredValue_0))->___stringValue_1), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___userEnteredValue_0))->___formulaValue_3), (void*)NULL);
	#endif
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C unmarshaledeffectiveValue_temp_1;
	memset((&unmarshaledeffectiveValue_temp_1), 0, sizeof(unmarshaledeffectiveValue_temp_1));
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_back(marshaled.___effectiveValue_1, unmarshaledeffectiveValue_temp_1);
	unmarshaled.___effectiveValue_1 = unmarshaledeffectiveValue_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___effectiveValue_1))->___stringValue_1), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___effectiveValue_1))->___formulaValue_3), (void*)NULL);
	#endif
	unmarshaled.___formattedValue_2 = il2cpp_codegen_marshal_string_result(marshaled.___formattedValue_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___formattedValue_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___formattedValue_2));
	unmarshaled.___hyperlink_3 = il2cpp_codegen_marshal_string_result(marshaled.___hyperlink_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___hyperlink_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___hyperlink_3));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.CellData
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke_cleanup(CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke& marshaled)
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_cleanup(marshaled.___userEnteredValue_0);
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_cleanup(marshaled.___effectiveValue_1);
	il2cpp_codegen_marshal_free(marshaled.___formattedValue_2);
	marshaled.___formattedValue_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___hyperlink_3);
	marshaled.___hyperlink_3 = NULL;
}




// Conversion methods for marshalling of: Outfrost.GoogleSheets.CellData
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com& marshaled)
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com(unmarshaled.___userEnteredValue_0, marshaled.___userEnteredValue_0);
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com(unmarshaled.___effectiveValue_1, marshaled.___effectiveValue_1);
	marshaled.___formattedValue_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___formattedValue_2);
	marshaled.___hyperlink_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___hyperlink_3);
}
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com_back(const CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com& marshaled, CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543& unmarshaled)
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C unmarshaleduserEnteredValue_temp_0;
	memset((&unmarshaleduserEnteredValue_temp_0), 0, sizeof(unmarshaleduserEnteredValue_temp_0));
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_back(marshaled.___userEnteredValue_0, unmarshaleduserEnteredValue_temp_0);
	unmarshaled.___userEnteredValue_0 = unmarshaleduserEnteredValue_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___userEnteredValue_0))->___stringValue_1), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___userEnteredValue_0))->___formulaValue_3), (void*)NULL);
	#endif
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C unmarshaledeffectiveValue_temp_1;
	memset((&unmarshaledeffectiveValue_temp_1), 0, sizeof(unmarshaledeffectiveValue_temp_1));
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_back(marshaled.___effectiveValue_1, unmarshaledeffectiveValue_temp_1);
	unmarshaled.___effectiveValue_1 = unmarshaledeffectiveValue_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___effectiveValue_1))->___stringValue_1), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___effectiveValue_1))->___formulaValue_3), (void*)NULL);
	#endif
	unmarshaled.___formattedValue_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___formattedValue_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___formattedValue_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___formattedValue_2));
	unmarshaled.___hyperlink_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___hyperlink_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___hyperlink_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___hyperlink_3));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.CellData
IL2CPP_EXTERN_C void CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com_cleanup(CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com& marshaled)
{
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_cleanup(marshaled.___userEnteredValue_0);
	ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_cleanup(marshaled.___effectiveValue_1);
	il2cpp_codegen_marshal_free_bstring(marshaled.___formattedValue_2);
	marshaled.___formattedValue_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___hyperlink_3);
	marshaled.___hyperlink_3 = NULL;
}
// System.Int32 Outfrost.GoogleSheets.CellData::get_IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CellData_get_IntValue_m841D16F6CF1312F7CA6A43BA5C0E21381A24D891 (CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* __this, const RuntimeMethod* method) 
{
	{
		// get { return (int) effectiveValue.numberValue; }
		ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C* L_0 = (&__this->___effectiveValue_1);
		double L_1 = L_0->___numberValue_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
	}
}
IL2CPP_EXTERN_C  int32_t CellData_get_IntValue_m841D16F6CF1312F7CA6A43BA5C0E21381A24D891_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CellData_get_IntValue_m841D16F6CF1312F7CA6A43BA5C0E21381A24D891(_thisAdjusted, method);
	return _returnValue;
}
// System.String Outfrost.GoogleSheets.CellData::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CellData_get_StringValue_m0B7C8276F3755F68E06D288DB6DBC51AECDBD441 (CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* __this, const RuntimeMethod* method) 
{
	{
		// get { return effectiveValue.stringValue; }
		ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C* L_0 = (&__this->___effectiveValue_1);
		String_t* L_1 = L_0->___stringValue_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* CellData_get_StringValue_m0B7C8276F3755F68E06D288DB6DBC51AECDBD441_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CellData_get_StringValue_m0B7C8276F3755F68E06D288DB6DBC51AECDBD441(_thisAdjusted, method);
	return _returnValue;
}
// System.String Outfrost.GoogleSheets.CellData::GetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CellData_GetStringValue_m9A76A75C5828D0ED364A93F045EE02FA2919DABA (CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* __this, String_t* ___defaultValue0, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// return StringValue ?? defaultValue;
		String_t* L_0;
		L_0 = CellData_get_StringValue_m0B7C8276F3755F68E06D288DB6DBC51AECDBD441(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ___defaultValue0;
		G_B2_0 = L_2;
	}

IL_000b:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* CellData_GetStringValue_m9A76A75C5828D0ED364A93F045EE02FA2919DABA_AdjustorThunk (RuntimeObject* __this, String_t* ___defaultValue0, const RuntimeMethod* method)
{
	CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CellData_GetStringValue_m9A76A75C5828D0ED364A93F045EE02FA2919DABA(_thisAdjusted, ___defaultValue0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Outfrost.GoogleSheets.ExtendedValue
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke& marshaled)
{
	marshaled.___numberValue_0 = unmarshaled.___numberValue_0;
	marshaled.___stringValue_1 = il2cpp_codegen_marshal_string(unmarshaled.___stringValue_1);
	marshaled.___boolValue_2 = static_cast<int32_t>(unmarshaled.___boolValue_2);
	marshaled.___formulaValue_3 = il2cpp_codegen_marshal_string(unmarshaled.___formulaValue_3);
}
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_back(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke& marshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled)
{
	double unmarshalednumberValue_temp_0 = 0.0;
	unmarshalednumberValue_temp_0 = marshaled.___numberValue_0;
	unmarshaled.___numberValue_0 = unmarshalednumberValue_temp_0;
	unmarshaled.___stringValue_1 = il2cpp_codegen_marshal_string_result(marshaled.___stringValue_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___stringValue_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___stringValue_1));
	bool unmarshaledboolValue_temp_2 = false;
	unmarshaledboolValue_temp_2 = static_cast<bool>(marshaled.___boolValue_2);
	unmarshaled.___boolValue_2 = unmarshaledboolValue_temp_2;
	unmarshaled.___formulaValue_3 = il2cpp_codegen_marshal_string_result(marshaled.___formulaValue_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___formulaValue_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___formulaValue_3));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.ExtendedValue
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_pinvoke_cleanup(ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___stringValue_1);
	marshaled.___stringValue_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___formulaValue_3);
	marshaled.___formulaValue_3 = NULL;
}
// Conversion methods for marshalling of: Outfrost.GoogleSheets.ExtendedValue
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com& marshaled)
{
	marshaled.___numberValue_0 = unmarshaled.___numberValue_0;
	marshaled.___stringValue_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___stringValue_1);
	marshaled.___boolValue_2 = static_cast<int32_t>(unmarshaled.___boolValue_2);
	marshaled.___formulaValue_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___formulaValue_3);
}
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_back(const ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com& marshaled, ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C& unmarshaled)
{
	double unmarshalednumberValue_temp_0 = 0.0;
	unmarshalednumberValue_temp_0 = marshaled.___numberValue_0;
	unmarshaled.___numberValue_0 = unmarshalednumberValue_temp_0;
	unmarshaled.___stringValue_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___stringValue_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___stringValue_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___stringValue_1));
	bool unmarshaledboolValue_temp_2 = false;
	unmarshaledboolValue_temp_2 = static_cast<bool>(marshaled.___boolValue_2);
	unmarshaled.___boolValue_2 = unmarshaledboolValue_temp_2;
	unmarshaled.___formulaValue_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___formulaValue_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___formulaValue_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___formulaValue_3));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.ExtendedValue
IL2CPP_EXTERN_C void ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshal_com_cleanup(ExtendedValue_tEE3120DA92F32AB320B140A1478F9EC4241F9E9C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___stringValue_1);
	marshaled.___stringValue_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___formulaValue_3);
	marshaled.___formulaValue_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Outfrost.GoogleSheets.GridData
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke& marshaled)
{
	marshaled.___startRow_0 = unmarshaled.___startRow_0;
	marshaled.___startColumn_1 = unmarshaled.___startColumn_1;
	if (unmarshaled.___rowData_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledrowData_Length = (unmarshaled.___rowData_2)->max_length;
		marshaled.___rowData_2 = il2cpp_codegen_marshal_allocate_array<RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke>(_unmarshaledrowData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledrowData_Length); i++)
		{
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke((unmarshaled.___rowData_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___rowData_2)[i]);
		}
	}
	else
	{
		marshaled.___rowData_2 = NULL;
	}
}
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke_back(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke& marshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledstartRow_temp_0 = 0;
	unmarshaledstartRow_temp_0 = marshaled.___startRow_0;
	unmarshaled.___startRow_0 = unmarshaledstartRow_temp_0;
	int32_t unmarshaledstartColumn_temp_1 = 0;
	unmarshaledstartColumn_temp_1 = marshaled.___startColumn_1;
	unmarshaled.___startColumn_1 = unmarshaledstartColumn_temp_1;
	if (marshaled.___rowData_2 != NULL)
	{
		if (unmarshaled.___rowData_2 == NULL)
		{
			unmarshaled.___rowData_2 = reinterpret_cast<RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*>((RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*)SZArrayNew(RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___rowData_2), (void*)reinterpret_cast<RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*>((RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*)SZArrayNew(RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___rowData_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED _marshaled____rowData_2_i__unmarshaled;
			memset((&_marshaled____rowData_2_i__unmarshaled), 0, sizeof(_marshaled____rowData_2_i__unmarshaled));
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke_back((marshaled.___rowData_2)[i], _marshaled____rowData_2_i__unmarshaled);
			(unmarshaled.___rowData_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____rowData_2_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.GridData
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke_cleanup(GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke& marshaled)
{
	if (marshaled.___rowData_2 != NULL)
	{
		const il2cpp_array_size_t marshaled____rowData_2_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____rowData_2_CleanupLoopCount); i++)
		{
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke_cleanup((marshaled.___rowData_2)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___rowData_2);
		marshaled.___rowData_2 = NULL;
	}
}


// Conversion methods for marshalling of: Outfrost.GoogleSheets.GridData
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com& marshaled)
{
	marshaled.___startRow_0 = unmarshaled.___startRow_0;
	marshaled.___startColumn_1 = unmarshaled.___startColumn_1;
	if (unmarshaled.___rowData_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledrowData_Length = (unmarshaled.___rowData_2)->max_length;
		marshaled.___rowData_2 = il2cpp_codegen_marshal_allocate_array<RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com>(_unmarshaledrowData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledrowData_Length); i++)
		{
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com((unmarshaled.___rowData_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___rowData_2)[i]);
		}
	}
	else
	{
		marshaled.___rowData_2 = NULL;
	}
}
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com_back(const GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com& marshaled, GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledstartRow_temp_0 = 0;
	unmarshaledstartRow_temp_0 = marshaled.___startRow_0;
	unmarshaled.___startRow_0 = unmarshaledstartRow_temp_0;
	int32_t unmarshaledstartColumn_temp_1 = 0;
	unmarshaledstartColumn_temp_1 = marshaled.___startColumn_1;
	unmarshaled.___startColumn_1 = unmarshaledstartColumn_temp_1;
	if (marshaled.___rowData_2 != NULL)
	{
		if (unmarshaled.___rowData_2 == NULL)
		{
			unmarshaled.___rowData_2 = reinterpret_cast<RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*>((RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*)SZArrayNew(RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___rowData_2), (void*)reinterpret_cast<RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*>((RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4*)SZArrayNew(RowDataU5BU5D_t37B41AB07D0A6E8A60FE50368FDDB87360ECAFD4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___rowData_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED _marshaled____rowData_2_i__unmarshaled;
			memset((&_marshaled____rowData_2_i__unmarshaled), 0, sizeof(_marshaled____rowData_2_i__unmarshaled));
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com_back((marshaled.___rowData_2)[i], _marshaled____rowData_2_i__unmarshaled);
			(unmarshaled.___rowData_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____rowData_2_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.GridData
IL2CPP_EXTERN_C void GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com_cleanup(GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com& marshaled)
{
	if (marshaled.___rowData_2 != NULL)
	{
		const il2cpp_array_size_t marshaled____rowData_2_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____rowData_2_CleanupLoopCount); i++)
		{
			RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com_cleanup((marshaled.___rowData_2)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___rowData_2);
		marshaled.___rowData_2 = NULL;
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


// Conversion methods for marshalling of: Outfrost.GoogleSheets.RowData
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___values_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledvalues_Length = (unmarshaled.___values_0)->max_length;
		marshaled.___values_0 = il2cpp_codegen_marshal_allocate_array<CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_pinvoke>(_unmarshaledvalues_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledvalues_Length); i++)
		{
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke((unmarshaled.___values_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___values_0)[i]);
		}
	}
	else
	{
		marshaled.___values_0 = NULL;
	}
}
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke_back(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke& marshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___values_0 != NULL)
	{
		if (unmarshaled.___values_0 == NULL)
		{
			unmarshaled.___values_0 = reinterpret_cast<CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*>((CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*)SZArrayNew(CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___values_0), (void*)reinterpret_cast<CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*>((CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*)SZArrayNew(CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___values_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 _marshaled____values_0_i__unmarshaled;
			memset((&_marshaled____values_0_i__unmarshaled), 0, sizeof(_marshaled____values_0_i__unmarshaled));
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke_back((marshaled.___values_0)[i], _marshaled____values_0_i__unmarshaled);
			(unmarshaled.___values_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____values_0_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.RowData
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_pinvoke_cleanup(RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_pinvoke& marshaled)
{
	if (marshaled.___values_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____values_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____values_0_CleanupLoopCount); i++)
		{
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_pinvoke_cleanup((marshaled.___values_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___values_0);
		marshaled.___values_0 = NULL;
	}
}


// Conversion methods for marshalling of: Outfrost.GoogleSheets.RowData
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com& marshaled)
{
	if (unmarshaled.___values_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledvalues_Length = (unmarshaled.___values_0)->max_length;
		marshaled.___values_0 = il2cpp_codegen_marshal_allocate_array<CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshaled_com>(_unmarshaledvalues_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledvalues_Length); i++)
		{
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com((unmarshaled.___values_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___values_0)[i]);
		}
	}
	else
	{
		marshaled.___values_0 = NULL;
	}
}
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com_back(const RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com& marshaled, RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___values_0 != NULL)
	{
		if (unmarshaled.___values_0 == NULL)
		{
			unmarshaled.___values_0 = reinterpret_cast<CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*>((CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*)SZArrayNew(CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___values_0), (void*)reinterpret_cast<CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*>((CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2*)SZArrayNew(CellDataU5BU5D_t62E08D2473F33239D843B505CC0BB4C0F64AF5B2_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___values_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543 _marshaled____values_0_i__unmarshaled;
			memset((&_marshaled____values_0_i__unmarshaled), 0, sizeof(_marshaled____values_0_i__unmarshaled));
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com_back((marshaled.___values_0)[i], _marshaled____values_0_i__unmarshaled);
			(unmarshaled.___values_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____values_0_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.RowData
IL2CPP_EXTERN_C void RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshal_com_cleanup(RowData_t640EE0993A65C23AE115C776FF6DF81E706411ED_marshaled_com& marshaled)
{
	if (marshaled.___values_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____values_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____values_0_CleanupLoopCount); i++)
		{
			CellData_tB9A75FEB0360FC0AB12228613C6881892A1F5543_marshal_com_cleanup((marshaled.___values_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___values_0);
		marshaled.___values_0 = NULL;
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




// Conversion methods for marshalling of: Outfrost.GoogleSheets.Sheet
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke& marshaled)
{
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke(unmarshaled.___properties_0, marshaled.___properties_0);
	if (unmarshaled.___data_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaleddata_Length = (unmarshaled.___data_1)->max_length;
		marshaled.___data_1 = il2cpp_codegen_marshal_allocate_array<GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_pinvoke>(_unmarshaleddata_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaleddata_Length); i++)
		{
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke((unmarshaled.___data_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___data_1)[i]);
		}
	}
	else
	{
		marshaled.___data_1 = NULL;
	}
}
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke_back(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke& marshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038 unmarshaledproperties_temp_0;
	memset((&unmarshaledproperties_temp_0), 0, sizeof(unmarshaledproperties_temp_0));
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke_back(marshaled.___properties_0, unmarshaledproperties_temp_0);
	unmarshaled.___properties_0 = unmarshaledproperties_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___properties_0))->___title_0), (void*)NULL);
	if (marshaled.___data_1 != NULL)
	{
		if (unmarshaled.___data_1 == NULL)
		{
			unmarshaled.___data_1 = reinterpret_cast<GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*>((GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*)SZArrayNew(GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_1), (void*)reinterpret_cast<GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*>((GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*)SZArrayNew(GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___data_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C _marshaled____data_1_i__unmarshaled;
			memset((&_marshaled____data_1_i__unmarshaled), 0, sizeof(_marshaled____data_1_i__unmarshaled));
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke_back((marshaled.___data_1)[i], _marshaled____data_1_i__unmarshaled);
			(unmarshaled.___data_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____data_1_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.Sheet
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke_cleanup(Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke& marshaled)
{
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke_cleanup(marshaled.___properties_0);
	if (marshaled.___data_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____data_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____data_1_CleanupLoopCount); i++)
		{
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_pinvoke_cleanup((marshaled.___data_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___data_1);
		marshaled.___data_1 = NULL;
	}
}




// Conversion methods for marshalling of: Outfrost.GoogleSheets.Sheet
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com& marshaled)
{
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com(unmarshaled.___properties_0, marshaled.___properties_0);
	if (unmarshaled.___data_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaleddata_Length = (unmarshaled.___data_1)->max_length;
		marshaled.___data_1 = il2cpp_codegen_marshal_allocate_array<GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshaled_com>(_unmarshaleddata_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaleddata_Length); i++)
		{
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com((unmarshaled.___data_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___data_1)[i]);
		}
	}
	else
	{
		marshaled.___data_1 = NULL;
	}
}
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com_back(const Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com& marshaled, Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038 unmarshaledproperties_temp_0;
	memset((&unmarshaledproperties_temp_0), 0, sizeof(unmarshaledproperties_temp_0));
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com_back(marshaled.___properties_0, unmarshaledproperties_temp_0);
	unmarshaled.___properties_0 = unmarshaledproperties_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___properties_0))->___title_0), (void*)NULL);
	if (marshaled.___data_1 != NULL)
	{
		if (unmarshaled.___data_1 == NULL)
		{
			unmarshaled.___data_1 = reinterpret_cast<GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*>((GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*)SZArrayNew(GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_1), (void*)reinterpret_cast<GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*>((GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286*)SZArrayNew(GridDataU5BU5D_tCB47BF8259D53556F9084A05F379E267C7AEF286_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___data_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C _marshaled____data_1_i__unmarshaled;
			memset((&_marshaled____data_1_i__unmarshaled), 0, sizeof(_marshaled____data_1_i__unmarshaled));
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com_back((marshaled.___data_1)[i], _marshaled____data_1_i__unmarshaled);
			(unmarshaled.___data_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____data_1_i__unmarshaled);
		}
	}
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.Sheet
IL2CPP_EXTERN_C void Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com_cleanup(Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com& marshaled)
{
	SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com_cleanup(marshaled.___properties_0);
	if (marshaled.___data_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____data_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____data_1_CleanupLoopCount); i++)
		{
			GridData_t520C1440F789B9D72CCDBD2732B98DBA2569149C_marshal_com_cleanup((marshaled.___data_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___data_1);
		marshaled.___data_1 = NULL;
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
// Conversion methods for marshalling of: Outfrost.GoogleSheets.SheetProperties
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke& marshaled)
{
	marshaled.___title_0 = il2cpp_codegen_marshal_string(unmarshaled.___title_0);
}
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke_back(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke& marshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled)
{
	unmarshaled.___title_0 = il2cpp_codegen_marshal_string_result(marshaled.___title_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___title_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___title_0));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.SheetProperties
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_pinvoke_cleanup(SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___title_0);
	marshaled.___title_0 = NULL;
}
// Conversion methods for marshalling of: Outfrost.GoogleSheets.SheetProperties
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com& marshaled)
{
	marshaled.___title_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___title_0);
}
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com_back(const SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com& marshaled, SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038& unmarshaled)
{
	unmarshaled.___title_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___title_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___title_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___title_0));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.SheetProperties
IL2CPP_EXTERN_C void SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshal_com_cleanup(SheetProperties_tC21ADB155AE9B6A9A5C12F3A0A9587505C824038_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_0);
	marshaled.___title_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Outfrost.GoogleSheets.Spreadsheet
IL2CPP_EXTERN_C void Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshal_pinvoke(const Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF& unmarshaled, Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_pinvoke& marshaled)
{
	marshaled.___spreadsheetId_0 = il2cpp_codegen_marshal_string(unmarshaled.___spreadsheetId_0);
	if (unmarshaled.___sheets_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledsheets_Length = (unmarshaled.___sheets_1)->max_length;
		marshaled.___sheets_1 = il2cpp_codegen_marshal_allocate_array<Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_pinvoke>(_unmarshaledsheets_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledsheets_Length); i++)
		{
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke((unmarshaled.___sheets_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___sheets_1)[i]);
		}
	}
	else
	{
		marshaled.___sheets_1 = NULL;
	}
	marshaled.___spreadsheetUrl_2 = il2cpp_codegen_marshal_string(unmarshaled.___spreadsheetUrl_2);
}
IL2CPP_EXTERN_C void Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshal_pinvoke_back(const Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_pinvoke& marshaled, Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___spreadsheetId_0 = il2cpp_codegen_marshal_string_result(marshaled.___spreadsheetId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___spreadsheetId_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___spreadsheetId_0));
	if (marshaled.___sheets_1 != NULL)
	{
		if (unmarshaled.___sheets_1 == NULL)
		{
			unmarshaled.___sheets_1 = reinterpret_cast<SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*>((SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*)SZArrayNew(SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sheets_1), (void*)reinterpret_cast<SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*>((SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*)SZArrayNew(SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___sheets_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 _marshaled____sheets_1_i__unmarshaled;
			memset((&_marshaled____sheets_1_i__unmarshaled), 0, sizeof(_marshaled____sheets_1_i__unmarshaled));
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke_back((marshaled.___sheets_1)[i], _marshaled____sheets_1_i__unmarshaled);
			(unmarshaled.___sheets_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____sheets_1_i__unmarshaled);
		}
	}
	unmarshaled.___spreadsheetUrl_2 = il2cpp_codegen_marshal_string_result(marshaled.___spreadsheetUrl_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___spreadsheetUrl_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___spreadsheetUrl_2));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.Spreadsheet
IL2CPP_EXTERN_C void Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshal_pinvoke_cleanup(Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___spreadsheetId_0);
	marshaled.___spreadsheetId_0 = NULL;
	if (marshaled.___sheets_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____sheets_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____sheets_1_CleanupLoopCount); i++)
		{
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_pinvoke_cleanup((marshaled.___sheets_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___sheets_1);
		marshaled.___sheets_1 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___spreadsheetUrl_2);
	marshaled.___spreadsheetUrl_2 = NULL;
}


// Conversion methods for marshalling of: Outfrost.GoogleSheets.Spreadsheet
IL2CPP_EXTERN_C void Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshal_com(const Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF& unmarshaled, Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_com& marshaled)
{
	marshaled.___spreadsheetId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___spreadsheetId_0);
	if (unmarshaled.___sheets_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledsheets_Length = (unmarshaled.___sheets_1)->max_length;
		marshaled.___sheets_1 = il2cpp_codegen_marshal_allocate_array<Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshaled_com>(_unmarshaledsheets_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledsheets_Length); i++)
		{
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com((unmarshaled.___sheets_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___sheets_1)[i]);
		}
	}
	else
	{
		marshaled.___sheets_1 = NULL;
	}
	marshaled.___spreadsheetUrl_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___spreadsheetUrl_2);
}
IL2CPP_EXTERN_C void Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshal_com_back(const Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_com& marshaled, Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___spreadsheetId_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___spreadsheetId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___spreadsheetId_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___spreadsheetId_0));
	if (marshaled.___sheets_1 != NULL)
	{
		if (unmarshaled.___sheets_1 == NULL)
		{
			unmarshaled.___sheets_1 = reinterpret_cast<SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*>((SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*)SZArrayNew(SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sheets_1), (void*)reinterpret_cast<SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*>((SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD*)SZArrayNew(SheetU5BU5D_t02F402BE2C8F48664A851F717A490236DC56F5BD_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___sheets_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88 _marshaled____sheets_1_i__unmarshaled;
			memset((&_marshaled____sheets_1_i__unmarshaled), 0, sizeof(_marshaled____sheets_1_i__unmarshaled));
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com_back((marshaled.___sheets_1)[i], _marshaled____sheets_1_i__unmarshaled);
			(unmarshaled.___sheets_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____sheets_1_i__unmarshaled);
		}
	}
	unmarshaled.___spreadsheetUrl_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___spreadsheetUrl_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___spreadsheetUrl_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___spreadsheetUrl_2));
}
// Conversion method for clean up from marshalling of: Outfrost.GoogleSheets.Spreadsheet
IL2CPP_EXTERN_C void Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshal_com_cleanup(Spreadsheet_t8C779A45485E186B98958ED6EBB1B12BB91553DF_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___spreadsheetId_0);
	marshaled.___spreadsheetId_0 = NULL;
	if (marshaled.___sheets_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____sheets_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____sheets_1_CleanupLoopCount); i++)
		{
			Sheet_t354FCBD30AEDCBAE0CBD650C6CCA9C035D329D88_marshal_com_cleanup((marshaled.___sheets_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___sheets_1);
		marshaled.___sheets_1 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___spreadsheetUrl_2);
	marshaled.___spreadsheetUrl_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Outfrost.Debug.VersionText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionText_Start_m92644B6B2BD5311BB948AC63D5467E08B76B379D (VersionText_t18B1BCE0D2D11E33DB7534B27E9491E5D9137732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A9E1C0E43ED1481365320B45FC4321BE6701D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_3 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B3_4 = NULL;
	{
		// GetComponent<TextMeshProUGUI>().SetText(Application.productName
		//                                         + " "
		//                                         + Application.version
		//                                         + (Application.buildGUID != ""
		//                                                 ? ", build " + Application.buildGUID
		//                                                 : ""));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		String_t* L_1;
		L_1 = Application_get_productName_m9314FB94C4DE1F1731084FF30B9555F44BA477EB(NULL);
		String_t* L_2;
		L_2 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		String_t* L_3;
		L_3 = Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68(NULL);
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_4)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_002d;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_003c;
	}

IL_002d:
	{
		String_t* L_5;
		L_5 = Application_get_buildGUID_m088DE63ABF3F3022B8A65F19F882C126AD6FBE68(NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC8A9E1C0E43ED1481365320B45FC4321BE6701D0, L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_003c:
	{
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(G_B3_4, L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Outfrost.Debug.VersionText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionText__ctor_m1FD98C4CE482417543AC3D2ED8986F223E47ABEB (VersionText_t18B1BCE0D2D11E33DB7534B27E9491E5D9137732* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_0 = __this->___m_textInfo_152;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_Text_get_havePropertiesChanged_m42ECC7D1CA0DF6E59ACF761EB20635E81FCB8EFF_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_havePropertiesChanged; }
		bool L_0 = __this->___m_havePropertiesChanged_153;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_Invoke_mEC6E0078D9B508FFDB00A1CB7E4A923C847A2809_inline (Callback_tF2755BAB9F0466B97D4E3FFEA8DAC17CC7BFBD3A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
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
