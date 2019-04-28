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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// AccountPage
struct AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55;
// Camera_Move
struct Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071;
// SwitchScene
struct SwitchScene_tECCF2D511CD5D1BEADBBA384EB6CF917B478408F;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t64BA96BFC713F221050385E91C868CE455C245D6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Nullable`1<UnityEngine.Vector2>[]
struct Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TouchCamera
struct TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14;
// Tutorial_Switch
struct Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.InputField
struct InputField_t533609195B110760BCFF00B746C87D81969CB005;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WWW
struct WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664;
// UnityEngine.WWWForm
struct WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// apple
struct apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D;
// button_tree_plant
struct button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8;
// client.Program
struct Program_tC12BD346B887DCAF9A5734C20CA3278EC249ECAB;
// connectGreen
struct connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13;
// fruit_grow_up
struct fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2;
// gold
struct gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA;
// gold/<SavePlayerData>d__9
struct U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24;
// grassShadow
struct grassShadow_tCCB262471E86CC8A78495EE4B3AF668282B6B28A;
// image_click
struct image_click_t481199DFDE345717D1A9D1B9E1A29F3CF72F57D7;
// login
struct login_t308222CA8470981C94C60680938EF6C2069F6C06;
// login/<LoginPlayer>d__4
struct U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945;
// mainMenu
struct mainMenu_t05B31125BCD96D8299A069AC15A51A42A2242110;
// plantTree
struct plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2;
// plant_button
struct plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251;
// registration
struct registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2;
// registration/<Register>d__4
struct U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1;
// server.Program
struct Program_tDC44296BCF55585FFFAFC541FBCB4166E545527F;
// shadow_colider
struct shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C;
// tree_grow_up
struct tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01647521805A3C7D0BBA2055DCE0946E04689D80;
IL2CPP_EXTERN_C String_t* _stringLiteral09FEF5D8D9A3C86B2523FEF60D512606E7FE0003;
IL2CPP_EXTERN_C String_t* _stringLiteral0B19F53BD3BD55536A83179D6C429E92E812CF3F;
IL2CPP_EXTERN_C String_t* _stringLiteral161E59B56F8098AEB2B270171BB64C873FECBDFE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C5B34D687C0BE518AE261EEC3B2E928D3071B99;
IL2CPP_EXTERN_C String_t* _stringLiteral20B8B49A857CDE4AA6B7826F43D20AAC2588D158;
IL2CPP_EXTERN_C String_t* _stringLiteral3B950036685ECA5891FF3DACD052030D79C26458;
IL2CPP_EXTERN_C String_t* _stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5;
IL2CPP_EXTERN_C String_t* _stringLiteral40831ABC962ADE18EDD4A869B5707059AF468B77;
IL2CPP_EXTERN_C String_t* _stringLiteral42A8F651D79FD005EEAC0612DF6442B983A01184;
IL2CPP_EXTERN_C String_t* _stringLiteral4B84B15BFF6EE5796152495A230E45E3D7E947D9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A68B465BAEA8CC88145DD524918A4F49CEFFD7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAA61E4C9B93F3F0682250B6CF8331B7EE68FD8;
IL2CPP_EXTERN_C String_t* _stringLiteral6435F683AB44DC5A30AFA7A4523115585991EB42;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral75EBCB361C656225206BB0191DF63CB1D38CBBAB;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4AF2BA8646456D5CF9458867F57FC4A6087D96;
IL2CPP_EXTERN_C String_t* _stringLiteral9D989E8D27DC9E0EC3389FC855F142C3D40F0C50;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E8C571C2A202E786C86758D544A4FB00D7DA51;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAFD185932FB2BA5D1AEEB99A9007F5067FDDF4;
IL2CPP_EXTERN_C String_t* _stringLiteralB45FB5D465D9658ACE86D943547C3926F43AE19A;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC29B76C59B382ACA12201C44929002EF1778AE;
IL2CPP_EXTERN_C String_t* _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA9CE49BA6FD3DE11BA67AF891088524F2A66BB5;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4B536E048B21E77853BB2B2397506AAFA45D68;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tutorial_Switch_switchPic_m4688B742A657971EEF06482D07C80837D7F4BC4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoginPlayerU3Ed__4_System_Collections_IEnumerator_Reset_mC61C9A07DB4B8B1A7D98F6B90EF2E0604468B214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterU3Ed__4_System_Collections_IEnumerator_Reset_mC089D7A8EC96A76625276189086C3A5161F6995C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSavePlayerDataU3Ed__9_System_Collections_IEnumerator_Reset_m9516B449358C40CB0FA6D400D1A7E6B582CFD726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* apple_lis_mE52F4C84B1A13CD064984B0134759C838833A34F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* button_tree_plant_ButtonClicked_m214A992158EB86CBDD584C47C935A983ABD8CE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AccountPage_Start_mBB0931E3DBAA8794A8B03AC1B216734FAAD761A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Camera_Move_Update_m28802AF15283884C490F51D81EBD9DC90897D2AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DBManager_LogOut_m6A67DD7E16E81147306FC3D27913200C5C122D8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DBManager_get_LoggedIN_m1A7464E05F82C737201D56AE8A7F47E881395193_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Program_Main_m122EF45C80994A7021725F2F211935A8A6427DF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Program_Main_m49115DB7226F5FCC7C495B57CDC165AA269B0197_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchCamera_Update_m2CEE620CEB308CE0480CF0D4173C50E84EF0CF98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchCamera__ctor_m9D8C2BBA532E73120FC4C8E448823394D3360801_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tutorial_Switch_OnEnable_m92BBE4763EDBD7CCA3570DBCF53D2EECD8BF8B17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tutorial_Switch_switchPic_m4688B742A657971EEF06482D07C80837D7F4BC4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoginPlayerU3Ed__4_MoveNext_m1C2F9A58EC6C97B4A15A4A3C97E06C3CE4543C2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoginPlayerU3Ed__4_System_Collections_IEnumerator_Reset_mC61C9A07DB4B8B1A7D98F6B90EF2E0604468B214_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRegisterU3Ed__4_MoveNext_m00EE228CA98DEFF1EBAB6F6FD5208A846F54D83E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRegisterU3Ed__4_System_Collections_IEnumerator_Reset_mC089D7A8EC96A76625276189086C3A5161F6995C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSavePlayerDataU3Ed__9_MoveNext_m638878217BD6B4FA044737FFBD15C44C10E87C92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSavePlayerDataU3Ed__9_System_Collections_IEnumerator_Reset_m9516B449358C40CB0FA6D400D1A7E6B582CFD726_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t apple_Start_m399C9DC8176E33E37288384605DA04DCBC5D0EC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t apple_lis_mE52F4C84B1A13CD064984B0134759C838833A34F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t button_tree_plant_ButtonClicked_m214A992158EB86CBDD584C47C935A983ABD8CE5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t button_tree_plant_Start_m68F9A4F9AC9CF590C3B3BC8E4FE6218614992C39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t connectGreen_OnTriggerEnter_m70A943AAAE5D08D04C185CBA72EC60309FD84B9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t fruit_grow_up_Start_mE4F054E64F58363A5C4A36D78E1BCE61404ECB27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t fruit_grow_up_Update_m0EC2BB6089F93C8095FEDDC36DDE7B1A75ECCD63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t gold_Awake_mC598E182D8BDA730BD59056E551C4C7B42F003C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t gold_SavePlayerData_mC01CE6EE771668527A50EAD0B37D23DF903AEF8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t gold_Start_m7C869646F8611D02E4C130E6B91E6FFB305EC6DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t gold_Update_mD624F0092CAF6D5ADAF507B31D0DF7562D4703D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t gold__cctor_mCA7874E5B05860563CDA33FE1C8C583E929902F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t login_LoginPlayer_m792F35B365809F2AF3E819C3C6889D96B018E6D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t mainMenu_GototheShop_m083862B58FB76516C5D7CF33365FBDAE1366F3C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t plant_button_Update_mBD2B81DDA08713182B03832BF76CB151A62AB74E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t registration_Register_m727F62F40C4D23D3ED3B6275392AC492BB080120_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t shadow_colider_OnEnable_mEA4F51CDF34A98C2D8276B4C439469B9E1BA3B57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t shadow_colider_OnTriggerEnter_mB61563E0B68897689250B93853DF3EA76055722A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t tree_grow_up_Start_m6585183FA338E2D4284AE7F86D38ED01DECF1FBA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// DBManager
struct  DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8  : public RuntimeObject
{
public:

public:
};

struct DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields
{
public:
	// System.String DBManager::username
	String_t* ___username_0;
	// System.Int32 DBManager::score
	int32_t ___score_1;

public:
	inline static int32_t get_offset_of_username_0() { return static_cast<int32_t>(offsetof(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields, ___username_0)); }
	inline String_t* get_username_0() const { return ___username_0; }
	inline String_t** get_address_of_username_0() { return &___username_0; }
	inline void set_username_0(String_t* value)
	{
		___username_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_0), (void*)value);
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.WWWForm
struct  WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___formData_0)); }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * get_formData_0() const { return ___formData_0; }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___fieldNames_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___fileNames_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___types_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_types_3() const { return ___types_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___boundary_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// client.Program
struct  Program_tC12BD346B887DCAF9A5734C20CA3278EC249ECAB  : public RuntimeObject
{
public:

public:
};


// gold_<SavePlayerData>d__9
struct  U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24  : public RuntimeObject
{
public:
	// System.Int32 gold_<SavePlayerData>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object gold_<SavePlayerData>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.WWW gold_<SavePlayerData>d__9::<www>5__2
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CwwwU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24, ___U3CwwwU3E5__2_2)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CwwwU3E5__2_2() const { return ___U3CwwwU3E5__2_2; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CwwwU3E5__2_2() { return &___U3CwwwU3E5__2_2; }
	inline void set_U3CwwwU3E5__2_2(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CwwwU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_2), (void*)value);
	}
};


// login_<LoginPlayer>d__4
struct  U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945  : public RuntimeObject
{
public:
	// System.Int32 login_<LoginPlayer>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object login_<LoginPlayer>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// login login_<LoginPlayer>d__4::<>4__this
	login_t308222CA8470981C94C60680938EF6C2069F6C06 * ___U3CU3E4__this_2;
	// UnityEngine.WWW login_<LoginPlayer>d__4::<www>5__2
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945, ___U3CU3E4__this_2)); }
	inline login_t308222CA8470981C94C60680938EF6C2069F6C06 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline login_t308222CA8470981C94C60680938EF6C2069F6C06 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(login_t308222CA8470981C94C60680938EF6C2069F6C06 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945, ___U3CwwwU3E5__2_3)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// registration_<Register>d__4
struct  U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1  : public RuntimeObject
{
public:
	// System.Int32 registration_<Register>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object registration_<Register>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// registration registration_<Register>d__4::<>4__this
	registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * ___U3CU3E4__this_2;
	// UnityEngine.WWW registration_<Register>d__4::<www>5__2
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1, ___U3CU3E4__this_2)); }
	inline registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1, ___U3CwwwU3E5__2_3)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// server.Program
struct  Program_tDC44296BCF55585FFFAFC541FBCB4166E545527F  : public RuntimeObject
{
public:

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_2)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
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


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
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


// UnityEngine.WWW
struct  WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664, ____uwr_0)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
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

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Nullable`1<UnityEngine.Vector2>
struct  Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF 
{
public:
	// T System.Nullable`1::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF, ___value_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_0() const { return ___value_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.TouchPhase
struct  TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.InputField_CharacterValidation
struct  CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E 
{
public:
	// System.Int32 UnityEngine.UI.InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_ContentType
struct  ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048 
{
public:
	// System.Int32 UnityEngine.UI.InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_InputType
struct  InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A 
{
public:
	// System.Int32 UnityEngine.UI.InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_LineType
struct  LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6 
{
public:
	// System.Int32 UnityEngine.UI.InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_13)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_14)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_15)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_16)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_36), (void*)value);
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


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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

// UnityEngine.Touch
struct  Touch_t806752C775BA713A91B6588A07CA98417CABC003 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
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


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
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


// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
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


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// grassShadow
struct  grassShadow_tCCB262471E86CC8A78495EE4B3AF668282B6B28A  : public StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C
{
public:

public:
};


// AccountPage
struct  AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text AccountPage::playerDisplay
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___playerDisplay_4;

public:
	inline static int32_t get_offset_of_playerDisplay_4() { return static_cast<int32_t>(offsetof(AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55, ___playerDisplay_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_playerDisplay_4() const { return ___playerDisplay_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_playerDisplay_4() { return &___playerDisplay_4; }
	inline void set_playerDisplay_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___playerDisplay_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDisplay_4), (void*)value);
	}
};


// Camera_Move
struct  Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Camera_Move::width
	float ___width_4;
	// System.Single Camera_Move::height
	float ___height_5;
	// UnityEngine.Touch Camera_Move::initTouch
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  ___initTouch_6;

public:
	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071, ___width_4)); }
	inline float get_width_4() const { return ___width_4; }
	inline float* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(float value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_initTouch_6() { return static_cast<int32_t>(offsetof(Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071, ___initTouch_6)); }
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003  get_initTouch_6() const { return ___initTouch_6; }
	inline Touch_t806752C775BA713A91B6588A07CA98417CABC003 * get_address_of_initTouch_6() { return &___initTouch_6; }
	inline void set_initTouch_6(Touch_t806752C775BA713A91B6588A07CA98417CABC003  value)
	{
		___initTouch_6 = value;
	}
};


// SwitchScene
struct  SwitchScene_tECCF2D511CD5D1BEADBBA384EB6CF917B478408F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// TouchCamera
struct  TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Nullable`1<UnityEngine.Vector2>[] TouchCamera::oldTouchPositions
	Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* ___oldTouchPositions_4;
	// UnityEngine.Vector2 TouchCamera::oldTouchVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oldTouchVector_5;
	// System.Single TouchCamera::oldTouchDistance
	float ___oldTouchDistance_6;

public:
	inline static int32_t get_offset_of_oldTouchPositions_4() { return static_cast<int32_t>(offsetof(TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14, ___oldTouchPositions_4)); }
	inline Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* get_oldTouchPositions_4() const { return ___oldTouchPositions_4; }
	inline Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14** get_address_of_oldTouchPositions_4() { return &___oldTouchPositions_4; }
	inline void set_oldTouchPositions_4(Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* value)
	{
		___oldTouchPositions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldTouchPositions_4), (void*)value);
	}

	inline static int32_t get_offset_of_oldTouchVector_5() { return static_cast<int32_t>(offsetof(TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14, ___oldTouchVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oldTouchVector_5() const { return ___oldTouchVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oldTouchVector_5() { return &___oldTouchVector_5; }
	inline void set_oldTouchVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oldTouchVector_5 = value;
	}

	inline static int32_t get_offset_of_oldTouchDistance_6() { return static_cast<int32_t>(offsetof(TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14, ___oldTouchDistance_6)); }
	inline float get_oldTouchDistance_6() const { return ___oldTouchDistance_6; }
	inline float* get_address_of_oldTouchDistance_6() { return &___oldTouchDistance_6; }
	inline void set_oldTouchDistance_6(float value)
	{
		___oldTouchDistance_6 = value;
	}
};


// Tutorial_Switch
struct  Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Button Tutorial_Switch::button
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button_4;
	// UnityEngine.UI.Button Tutorial_Switch::button2
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button2_5;
	// System.Int32 Tutorial_Switch::counter
	int32_t ___counter_6;

public:
	inline static int32_t get_offset_of_button_4() { return static_cast<int32_t>(offsetof(Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815, ___button_4)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button_4() const { return ___button_4; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button_4() { return &___button_4; }
	inline void set_button_4(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_4), (void*)value);
	}

	inline static int32_t get_offset_of_button2_5() { return static_cast<int32_t>(offsetof(Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815, ___button2_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button2_5() const { return ___button2_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button2_5() { return &___button2_5; }
	inline void set_button2_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button2_5), (void*)value);
	}

	inline static int32_t get_offset_of_counter_6() { return static_cast<int32_t>(offsetof(Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815, ___counter_6)); }
	inline int32_t get_counter_6() const { return ___counter_6; }
	inline int32_t* get_address_of_counter_6() { return &___counter_6; }
	inline void set_counter_6(int32_t value)
	{
		___counter_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// apple
struct  apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Canvas apple::can
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___can_4;
	// System.Int32 apple::value
	int32_t ___value_5;
	// UnityEngine.GameObject apple::butterfuly
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___butterfuly_6;

public:
	inline static int32_t get_offset_of_can_4() { return static_cast<int32_t>(offsetof(apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D, ___can_4)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_can_4() const { return ___can_4; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_can_4() { return &___can_4; }
	inline void set_can_4(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___can_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___can_4), (void*)value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D, ___value_5)); }
	inline int32_t get_value_5() const { return ___value_5; }
	inline int32_t* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(int32_t value)
	{
		___value_5 = value;
	}

	inline static int32_t get_offset_of_butterfuly_6() { return static_cast<int32_t>(offsetof(apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D, ___butterfuly_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_butterfuly_6() const { return ___butterfuly_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_butterfuly_6() { return &___butterfuly_6; }
	inline void set_butterfuly_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___butterfuly_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___butterfuly_6), (void*)value);
	}
};


// button_tree_plant
struct  button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject button_tree_plant::can_go
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___can_go_4;
	// UnityEngine.UI.Button button_tree_plant::button
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button_5;
	// UnityEngine.GameObject button_tree_plant::tree
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___tree_6;
	// UnityEngine.GameObject button_tree_plant::shadow
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___shadow_7;

public:
	inline static int32_t get_offset_of_can_go_4() { return static_cast<int32_t>(offsetof(button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8, ___can_go_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_can_go_4() const { return ___can_go_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_can_go_4() { return &___can_go_4; }
	inline void set_can_go_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___can_go_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___can_go_4), (void*)value);
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8, ___button_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button_5() const { return ___button_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_5), (void*)value);
	}

	inline static int32_t get_offset_of_tree_6() { return static_cast<int32_t>(offsetof(button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8, ___tree_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_tree_6() const { return ___tree_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_tree_6() { return &___tree_6; }
	inline void set_tree_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___tree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree_6), (void*)value);
	}

	inline static int32_t get_offset_of_shadow_7() { return static_cast<int32_t>(offsetof(button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8, ___shadow_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_shadow_7() const { return ___shadow_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_shadow_7() { return &___shadow_7; }
	inline void set_shadow_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___shadow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shadow_7), (void*)value);
	}
};


// connectGreen
struct  connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject connectGreen::greenfloor
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___greenfloor_4;

public:
	inline static int32_t get_offset_of_greenfloor_4() { return static_cast<int32_t>(offsetof(connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13, ___greenfloor_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_greenfloor_4() const { return ___greenfloor_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_greenfloor_4() { return &___greenfloor_4; }
	inline void set_greenfloor_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___greenfloor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greenfloor_4), (void*)value);
	}
};


// fruit_grow_up
struct  fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Canvas fruit_grow_up::apple_can
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___apple_can_4;
	// UnityEngine.UI.Button fruit_grow_up::apple
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___apple_5;
	// UnityEngine.GameObject fruit_grow_up::apple_tree
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___apple_tree_6;
	// System.Single fruit_grow_up::timeLeft
	float ___timeLeft_7;

public:
	inline static int32_t get_offset_of_apple_can_4() { return static_cast<int32_t>(offsetof(fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2, ___apple_can_4)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_apple_can_4() const { return ___apple_can_4; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_apple_can_4() { return &___apple_can_4; }
	inline void set_apple_can_4(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___apple_can_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apple_can_4), (void*)value);
	}

	inline static int32_t get_offset_of_apple_5() { return static_cast<int32_t>(offsetof(fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2, ___apple_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_apple_5() const { return ___apple_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_apple_5() { return &___apple_5; }
	inline void set_apple_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___apple_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apple_5), (void*)value);
	}

	inline static int32_t get_offset_of_apple_tree_6() { return static_cast<int32_t>(offsetof(fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2, ___apple_tree_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_apple_tree_6() const { return ___apple_tree_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_apple_tree_6() { return &___apple_tree_6; }
	inline void set_apple_tree_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___apple_tree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apple_tree_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeLeft_7() { return static_cast<int32_t>(offsetof(fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2, ___timeLeft_7)); }
	inline float get_timeLeft_7() const { return ___timeLeft_7; }
	inline float* get_address_of_timeLeft_7() { return &___timeLeft_7; }
	inline void set_timeLeft_7(float value)
	{
		___timeLeft_7 = value;
	}
};


// gold
struct  gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text gold::playerDisplay
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___playerDisplay_7;
	// UnityEngine.UI.Text gold::scoreDisplay
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreDisplay_8;

public:
	inline static int32_t get_offset_of_playerDisplay_7() { return static_cast<int32_t>(offsetof(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA, ___playerDisplay_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_playerDisplay_7() const { return ___playerDisplay_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_playerDisplay_7() { return &___playerDisplay_7; }
	inline void set_playerDisplay_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___playerDisplay_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDisplay_7), (void*)value);
	}

	inline static int32_t get_offset_of_scoreDisplay_8() { return static_cast<int32_t>(offsetof(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA, ___scoreDisplay_8)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreDisplay_8() const { return ___scoreDisplay_8; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreDisplay_8() { return &___scoreDisplay_8; }
	inline void set_scoreDisplay_8(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreDisplay_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreDisplay_8), (void*)value);
	}
};

struct gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields
{
public:
	// System.Int32 gold::golds
	int32_t ___golds_4;
	// UnityEngine.Vector3 gold::MyCamPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___MyCamPos_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> gold::obj
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___obj_6;

public:
	inline static int32_t get_offset_of_golds_4() { return static_cast<int32_t>(offsetof(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields, ___golds_4)); }
	inline int32_t get_golds_4() const { return ___golds_4; }
	inline int32_t* get_address_of_golds_4() { return &___golds_4; }
	inline void set_golds_4(int32_t value)
	{
		___golds_4 = value;
	}

	inline static int32_t get_offset_of_MyCamPos_5() { return static_cast<int32_t>(offsetof(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields, ___MyCamPos_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_MyCamPos_5() const { return ___MyCamPos_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_MyCamPos_5() { return &___MyCamPos_5; }
	inline void set_MyCamPos_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___MyCamPos_5 = value;
	}

	inline static int32_t get_offset_of_obj_6() { return static_cast<int32_t>(offsetof(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields, ___obj_6)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_obj_6() const { return ___obj_6; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_obj_6() { return &___obj_6; }
	inline void set_obj_6(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___obj_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_6), (void*)value);
	}
};


// image_click
struct  image_click_t481199DFDE345717D1A9D1B9E1A29F3CF72F57D7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// login
struct  login_t308222CA8470981C94C60680938EF6C2069F6C06  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.InputField login::nameField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___nameField_4;
	// UnityEngine.UI.InputField login::passwordField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___passwordField_5;
	// UnityEngine.UI.Button login::submitButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___submitButton_6;

public:
	inline static int32_t get_offset_of_nameField_4() { return static_cast<int32_t>(offsetof(login_t308222CA8470981C94C60680938EF6C2069F6C06, ___nameField_4)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_nameField_4() const { return ___nameField_4; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_nameField_4() { return &___nameField_4; }
	inline void set_nameField_4(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___nameField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameField_4), (void*)value);
	}

	inline static int32_t get_offset_of_passwordField_5() { return static_cast<int32_t>(offsetof(login_t308222CA8470981C94C60680938EF6C2069F6C06, ___passwordField_5)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_passwordField_5() const { return ___passwordField_5; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_passwordField_5() { return &___passwordField_5; }
	inline void set_passwordField_5(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___passwordField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passwordField_5), (void*)value);
	}

	inline static int32_t get_offset_of_submitButton_6() { return static_cast<int32_t>(offsetof(login_t308222CA8470981C94C60680938EF6C2069F6C06, ___submitButton_6)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_submitButton_6() const { return ___submitButton_6; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_submitButton_6() { return &___submitButton_6; }
	inline void set_submitButton_6(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___submitButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___submitButton_6), (void*)value);
	}
};


// mainMenu
struct  mainMenu_t05B31125BCD96D8299A069AC15A51A42A2242110  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// plantTree
struct  plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject plantTree::tree1
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___tree1_4;
	// UnityEngine.GameObject plantTree::sakura
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sakura_5;
	// UnityEngine.GameObject plantTree::sprout
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sprout_6;
	// UnityEngine.GameObject plantTree::shadow
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___shadow_7;

public:
	inline static int32_t get_offset_of_tree1_4() { return static_cast<int32_t>(offsetof(plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2, ___tree1_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_tree1_4() const { return ___tree1_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_tree1_4() { return &___tree1_4; }
	inline void set_tree1_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___tree1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree1_4), (void*)value);
	}

	inline static int32_t get_offset_of_sakura_5() { return static_cast<int32_t>(offsetof(plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2, ___sakura_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sakura_5() const { return ___sakura_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sakura_5() { return &___sakura_5; }
	inline void set_sakura_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sakura_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sakura_5), (void*)value);
	}

	inline static int32_t get_offset_of_sprout_6() { return static_cast<int32_t>(offsetof(plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2, ___sprout_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sprout_6() const { return ___sprout_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sprout_6() { return &___sprout_6; }
	inline void set_sprout_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sprout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprout_6), (void*)value);
	}

	inline static int32_t get_offset_of_shadow_7() { return static_cast<int32_t>(offsetof(plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2, ___shadow_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_shadow_7() const { return ___shadow_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_shadow_7() { return &___shadow_7; }
	inline void set_shadow_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___shadow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shadow_7), (void*)value);
	}
};


// plant_button
struct  plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject plant_button::can
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___can_4;
	// UnityEngine.Vector3 plant_button::camPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___camPos_5;
	// UnityEngine.UI.Text plant_button::gold_text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___gold_text_6;

public:
	inline static int32_t get_offset_of_can_4() { return static_cast<int32_t>(offsetof(plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251, ___can_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_can_4() const { return ___can_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_can_4() { return &___can_4; }
	inline void set_can_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___can_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___can_4), (void*)value);
	}

	inline static int32_t get_offset_of_camPos_5() { return static_cast<int32_t>(offsetof(plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251, ___camPos_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_camPos_5() const { return ___camPos_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_camPos_5() { return &___camPos_5; }
	inline void set_camPos_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___camPos_5 = value;
	}

	inline static int32_t get_offset_of_gold_text_6() { return static_cast<int32_t>(offsetof(plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251, ___gold_text_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_gold_text_6() const { return ___gold_text_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_gold_text_6() { return &___gold_text_6; }
	inline void set_gold_text_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___gold_text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gold_text_6), (void*)value);
	}
};


// registration
struct  registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.InputField registration::nameField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___nameField_4;
	// UnityEngine.UI.InputField registration::passwordField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___passwordField_5;
	// UnityEngine.UI.Button registration::submitButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___submitButton_6;

public:
	inline static int32_t get_offset_of_nameField_4() { return static_cast<int32_t>(offsetof(registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2, ___nameField_4)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_nameField_4() const { return ___nameField_4; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_nameField_4() { return &___nameField_4; }
	inline void set_nameField_4(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___nameField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameField_4), (void*)value);
	}

	inline static int32_t get_offset_of_passwordField_5() { return static_cast<int32_t>(offsetof(registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2, ___passwordField_5)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_passwordField_5() const { return ___passwordField_5; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_passwordField_5() { return &___passwordField_5; }
	inline void set_passwordField_5(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___passwordField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passwordField_5), (void*)value);
	}

	inline static int32_t get_offset_of_submitButton_6() { return static_cast<int32_t>(offsetof(registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2, ___submitButton_6)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_submitButton_6() const { return ___submitButton_6; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_submitButton_6() { return &___submitButton_6; }
	inline void set_submitButton_6(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___submitButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___submitButton_6), (void*)value);
	}
};


// shadow_colider
struct  shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Canvas shadow_colider::van
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___van_4;

public:
	inline static int32_t get_offset_of_van_4() { return static_cast<int32_t>(offsetof(shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C, ___van_4)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_van_4() const { return ___van_4; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_van_4() { return &___van_4; }
	inline void set_van_4(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___van_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___van_4), (void*)value);
	}
};


// tree_grow_up
struct  tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject tree_grow_up::sprout
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sprout_4;
	// UnityEngine.GameObject tree_grow_up::tree
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___tree_5;
	// System.Single tree_grow_up::timeLeft
	float ___timeLeft_6;

public:
	inline static int32_t get_offset_of_sprout_4() { return static_cast<int32_t>(offsetof(tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7, ___sprout_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sprout_4() const { return ___sprout_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sprout_4() { return &___sprout_4; }
	inline void set_sprout_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sprout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprout_4), (void*)value);
	}

	inline static int32_t get_offset_of_tree_5() { return static_cast<int32_t>(offsetof(tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7, ___tree_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_tree_5() const { return ___tree_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_tree_5() { return &___tree_5; }
	inline void set_tree_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___tree_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeLeft_6() { return static_cast<int32_t>(offsetof(tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7, ___timeLeft_6)); }
	inline float get_timeLeft_6() const { return ___timeLeft_6; }
	inline float* get_address_of_timeLeft_6() { return &___timeLeft_6; }
	inline void set_timeLeft_6(float value)
	{
		___timeLeft_6 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct  InputField_t533609195B110760BCFF00B746C87D81969CB005  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField_ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField_InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField_LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField_CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField_SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField_OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField_OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_43;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_44;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_45;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_InputTextCache_46;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_47;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_48;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_49;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_50;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_51;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_52;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_53;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_57;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_58;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_61;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_62;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_63;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_64;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_65;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_66;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_68;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TextComponent_22)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Placeholder_23)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnEndEdit_32)); }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretColor_35)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_SelectionColor_37)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_42() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretPosition_42)); }
	inline int32_t get_m_CaretPosition_42() const { return ___m_CaretPosition_42; }
	inline int32_t* get_address_of_m_CaretPosition_42() { return &___m_CaretPosition_42; }
	inline void set_m_CaretPosition_42(int32_t value)
	{
		___m_CaretPosition_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_43() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretSelectPosition_43)); }
	inline int32_t get_m_CaretSelectPosition_43() const { return ___m_CaretSelectPosition_43; }
	inline int32_t* get_address_of_m_CaretSelectPosition_43() { return &___m_CaretSelectPosition_43; }
	inline void set_m_CaretSelectPosition_43(int32_t value)
	{
		___m_CaretSelectPosition_43 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_44() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___caretRectTrans_44)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_44() const { return ___caretRectTrans_44; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_44() { return &___caretRectTrans_44; }
	inline void set_caretRectTrans_44(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_45() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CursorVerts_45)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_45() const { return ___m_CursorVerts_45; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_45() { return &___m_CursorVerts_45; }
	inline void set_m_CursorVerts_45(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_46() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputTextCache_46)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_InputTextCache_46() const { return ___m_InputTextCache_46; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_InputTextCache_46() { return &___m_InputTextCache_46; }
	inline void set_m_InputTextCache_46(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_InputTextCache_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_47() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CachedInputRenderer_47)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_47() const { return ___m_CachedInputRenderer_47; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_47() { return &___m_CachedInputRenderer_47; }
	inline void set_m_CachedInputRenderer_47(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_48() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_PreventFontCallback_48)); }
	inline bool get_m_PreventFontCallback_48() const { return ___m_PreventFontCallback_48; }
	inline bool* get_address_of_m_PreventFontCallback_48() { return &___m_PreventFontCallback_48; }
	inline void set_m_PreventFontCallback_48(bool value)
	{
		___m_PreventFontCallback_48 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_49() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Mesh_49)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_49() const { return ___m_Mesh_49; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_49() { return &___m_Mesh_49; }
	inline void set_m_Mesh_49(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_50() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AllowInput_50)); }
	inline bool get_m_AllowInput_50() const { return ___m_AllowInput_50; }
	inline bool* get_address_of_m_AllowInput_50() { return &___m_AllowInput_50; }
	inline void set_m_AllowInput_50(bool value)
	{
		___m_AllowInput_50 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_51() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ShouldActivateNextUpdate_51)); }
	inline bool get_m_ShouldActivateNextUpdate_51() const { return ___m_ShouldActivateNextUpdate_51; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_51() { return &___m_ShouldActivateNextUpdate_51; }
	inline void set_m_ShouldActivateNextUpdate_51(bool value)
	{
		___m_ShouldActivateNextUpdate_51 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_52() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_UpdateDrag_52)); }
	inline bool get_m_UpdateDrag_52() const { return ___m_UpdateDrag_52; }
	inline bool* get_address_of_m_UpdateDrag_52() { return &___m_UpdateDrag_52; }
	inline void set_m_UpdateDrag_52(bool value)
	{
		___m_UpdateDrag_52 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_53() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragPositionOutOfBounds_53)); }
	inline bool get_m_DragPositionOutOfBounds_53() const { return ___m_DragPositionOutOfBounds_53; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_53() { return &___m_DragPositionOutOfBounds_53; }
	inline void set_m_DragPositionOutOfBounds_53(bool value)
	{
		___m_DragPositionOutOfBounds_53 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_56() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretVisible_56)); }
	inline bool get_m_CaretVisible_56() const { return ___m_CaretVisible_56; }
	inline bool* get_address_of_m_CaretVisible_56() { return &___m_CaretVisible_56; }
	inline void set_m_CaretVisible_56(bool value)
	{
		___m_CaretVisible_56 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkCoroutine_57)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_57() const { return ___m_BlinkCoroutine_57; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_57() { return &___m_BlinkCoroutine_57; }
	inline void set_m_BlinkCoroutine_57(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_58() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkStartTime_58)); }
	inline float get_m_BlinkStartTime_58() const { return ___m_BlinkStartTime_58; }
	inline float* get_address_of_m_BlinkStartTime_58() { return &___m_BlinkStartTime_58; }
	inline void set_m_BlinkStartTime_58(float value)
	{
		___m_BlinkStartTime_58 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_59() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawStart_59)); }
	inline int32_t get_m_DrawStart_59() const { return ___m_DrawStart_59; }
	inline int32_t* get_address_of_m_DrawStart_59() { return &___m_DrawStart_59; }
	inline void set_m_DrawStart_59(int32_t value)
	{
		___m_DrawStart_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_60() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawEnd_60)); }
	inline int32_t get_m_DrawEnd_60() const { return ___m_DrawEnd_60; }
	inline int32_t* get_address_of_m_DrawEnd_60() { return &___m_DrawEnd_60; }
	inline void set_m_DrawEnd_60(int32_t value)
	{
		___m_DrawEnd_60 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_61() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragCoroutine_61)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_61() const { return ___m_DragCoroutine_61; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_61() { return &___m_DragCoroutine_61; }
	inline void set_m_DragCoroutine_61(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_62() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OriginalText_62)); }
	inline String_t* get_m_OriginalText_62() const { return ___m_OriginalText_62; }
	inline String_t** get_address_of_m_OriginalText_62() { return &___m_OriginalText_62; }
	inline void set_m_OriginalText_62(String_t* value)
	{
		___m_OriginalText_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_63() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WasCanceled_63)); }
	inline bool get_m_WasCanceled_63() const { return ___m_WasCanceled_63; }
	inline bool* get_address_of_m_WasCanceled_63() { return &___m_WasCanceled_63; }
	inline void set_m_WasCanceled_63(bool value)
	{
		___m_WasCanceled_63 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_64() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HasDoneFocusTransition_64)); }
	inline bool get_m_HasDoneFocusTransition_64() const { return ___m_HasDoneFocusTransition_64; }
	inline bool* get_address_of_m_HasDoneFocusTransition_64() { return &___m_HasDoneFocusTransition_64; }
	inline void set_m_HasDoneFocusTransition_64(bool value)
	{
		___m_HasDoneFocusTransition_64 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_65() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WaitForSecondsRealtime_65)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_65() const { return ___m_WaitForSecondsRealtime_65; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_65() { return &___m_WaitForSecondsRealtime_65; }
	inline void set_m_WaitForSecondsRealtime_65(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TouchKeyboardAllowsInPlaceEditing_66)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_66() const { return ___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return &___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_66(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_66 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_68() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ProcessingEvent_68)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_68() const { return ___m_ProcessingEvent_68; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_68() { return &___m_ProcessingEvent_68; }
	inline void set_m_ProcessingEvent_68(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_68), (void*)value);
	}
};

struct InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.Nullable`1<UnityEngine.Vector2>[]
struct Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  m_Items[1];

public:
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_gshared (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_gshared (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector2>::GetValueOrDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_gshared (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_gshared (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Boolean DBManager::get_LoggedIN()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBManager_get_LoggedIN_m1A7464E05F82C737201D56AE8A7F47E881395193 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t806752C775BA713A91B6588A07CA98417CABC003  Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313 (int32_t p0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9 (Touch_t806752C775BA713A91B6588A07CA98417CABC003 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToViewportPoint_m52ABFA35ADAA0B4FF3A7EE675F92F8F483E821FD (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m667014ED67F37A6EB459FB904D2041E270995419 (Touch_t806752C775BA713A91B6588A07CA98417CABC003 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, const RuntimeMethod*))Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_gshared)(__this, method);
}
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
inline void Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4 (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<UnityEngine.Vector2>::GetValueOrDefault()
inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m38879ACBA6B21C25E83AB07FA37A8E5EB7A51B05 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *, const RuntimeMethod*))Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m67EC53853580E35527F32D6EA002FE21C234172E (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817 (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared)(p0, p1, p2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m3D3BE0D486BFCB947CAF7C7D83ABD4153040FF00 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2 (const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_mA269050501DC895502B1DD4254789F335B55B328 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mD8D9A2358E66B15A2291E7DF76441E9D445C366C (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void System.Console::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_Write_m0C677E5FEFD48F57BC409D7C992748DD72BC6FC2 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Int32 System.Console::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Console_Read_m75C49593D6C9876A8A6AA0B9B457E45DC6060372 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m33DD50ED293AA672FDAD862B4A4865666B5FEBAF (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_sortingOrder_m4387540EBDF2716DFAE26F27074DBF15F32382E7 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.IEnumerator gold::SavePlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gold_SavePlayerData_mC01CE6EE771668527A50EAD0B37D23DF903AEF8F (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void gold/<SavePlayerData>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSavePlayerDataU3Ed__9__ctor_m89E0A6114F701BFC8E35C651E81BCB617A4CACB1 (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695 (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8 (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_mB26D9AEFB61E1FBEF6BC57B36A54DB059ECE9248 (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mCD26DA4AF4D023C128F1E031AC85A0557B98E6BF (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, String_t* p0, WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * p1, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1 (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.Void DBManager::LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBManager_LogOut_m6A67DD7E16E81147306FC3D27913200C5C122D8D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator login::LoginPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* login_LoginPlayer_m792F35B365809F2AF3E819C3C6889D96B018E6D7 (login_t308222CA8470981C94C60680938EF6C2069F6C06 * __this, const RuntimeMethod* method);
// System.Void login/<LoginPlayer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginPlayerU3Ed__4__ctor_mB9C3811979C1FAE16E1D10905C22D81578D384D2 (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7 (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mD5096017CC3058D280066EB9ABDDF5062983A94F (Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * __this, bool p0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.Collections.IEnumerator registration::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* registration_Register_m727F62F40C4D23D3ED3B6275392AC492BB080120 (registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * __this, const RuntimeMethod* method);
// System.Void registration/<Register>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__4__ctor_mE9433C0C1B2DEF2DA0D299026AAC52123874C6BE (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820 (String_t* p0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_m0729526C86891ADD11611CD13A7A18B851355580 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_m02FE30D766DA2B308BEDEABD70F4A5574D124C1A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
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
// System.Void AccountPage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountPage_Start_mBB0931E3DBAA8794A8B03AC1B216734FAAD761A1 (AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AccountPage_Start_mBB0931E3DBAA8794A8B03AC1B216734FAAD761A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = DBManager_get_LoggedIN_m1A7464E05F82C737201D56AE8A7F47E881395193(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_playerDisplay_4();
		String_t* L_2 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_username_0();
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1C5B34D687C0BE518AE261EEC3B2E928D3071B99, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
	}

IL_0021:
	{
		return;
	}
}
// System.Void AccountPage::GoToRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountPage_GoToRegister_mFB37D06EB1312CC10910A18F7A10FE176388F213 (AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AccountPage::GoToLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountPage_GoToLogin_m0BFF2C2DD744B76E1045E975161092A2680E8157 (AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AccountPage::GoToGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountPage_GoToGame_m7FFB2100396FE982203E8C28FBFC54A5C60AC753 (AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AccountPage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountPage__ctor_mF3AD506933858EB57494A95289DC1921B2EFCC79 (AccountPage_t25ABE70F74F1A4367AC255D157341C5C1D630D55 * __this, const RuntimeMethod* method)
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
// System.Void Camera_Move::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Move_Awake_mB3E368C6D6228156D533B7626F049B5EA3B7F3CC (Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		__this->set_width_4(((float)((float)(((float)((float)L_0)))/(float)(2.0f))));
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		__this->set_height_5(((float)((float)(((float)((float)L_1)))/(float)(2.0f))));
		return;
	}
}
// System.Void Camera_Move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Move_Start_m4FCB3EC193725CD386D5AA872EF6A2A9D6B120D0 (Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Camera_Move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Move_Update_m28802AF15283884C490F51D81EBD9DC90897D2AC (Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera_Move_Update_m28802AF15283884C490F51D81EBD9DC90897D2AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		int32_t L_0 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_011b;
		}
	}
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_1 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Camera_ScreenToViewportPoint_m52ABFA35ADAA0B4FF3A7EE675F92F8F483E821FD(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		(&V_1)->set_z_4((-40.0f));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = Touch_get_phase_m667014ED67F37A6EB459FB904D2041E270995419((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = L_10;
		RuntimeObject * L_12 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		Touch_t806752C775BA713A91B6588A07CA98417CABC003 * L_13 = __this->get_address_of_initTouch_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = L_14;
		RuntimeObject * L_16 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_15);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = L_17;
		RuntimeObject * L_19 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_18);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_19, /*hidden argument*/NULL);
		Touch_t806752C775BA713A91B6588A07CA98417CABC003 * L_20 = __this->get_address_of_initTouch_6();
		il2cpp_codegen_initobj(L_20, sizeof(Touch_t806752C775BA713A91B6588A07CA98417CABC003 ));
		Touch_t806752C775BA713A91B6588A07CA98417CABC003 * L_21 = __this->get_address_of_initTouch_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		float L_25 = L_24.get_x_0();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_23, (float)L_25));
		Touch_t806752C775BA713A91B6588A07CA98417CABC003 * L_26 = __this->get_address_of_initTouch_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		float L_30 = L_29.get_y_1();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_28, (float)L_30));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_2;
		float L_33 = L_32.get_x_2();
		float L_34 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_2;
		float L_36 = L_35.get_y_3();
		float L_37 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_38), ((float)il2cpp_codegen_add((float)L_33, (float)((float)((float)L_34/(float)(100.0f))))), ((float)il2cpp_codegen_add((float)L_36, (float)((float)((float)L_37/(float)(100.0f))))), (-40.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_31, L_38, /*hidden argument*/NULL);
		return;
	}

IL_0105:
	{
		int32_t L_39 = Touch_get_phase_m667014ED67F37A6EB459FB904D2041E270995419((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_011b;
		}
	}
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003 * L_40 = __this->get_address_of_initTouch_6();
		il2cpp_codegen_initobj(L_40, sizeof(Touch_t806752C775BA713A91B6588A07CA98417CABC003 ));
	}

IL_011b:
	{
		return;
	}
}
// System.Void Camera_Move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Move__ctor_m17CB5D3766F3CD35CE7966B4E433395F46E8238B (Camera_Move_tDFB060D6EBADCD02CD73F7C69D8F246E14273071 * __this, const RuntimeMethod* method)
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
// System.Boolean DBManager::get_LoggedIN()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DBManager_get_LoggedIN_m1A7464E05F82C737201D56AE8A7F47E881395193 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DBManager_get_LoggedIN_m1A7464E05F82C737201D56AE8A7F47E881395193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_username_0();
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void DBManager::LogOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DBManager_LogOut_m6A67DD7E16E81147306FC3D27913200C5C122D8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DBManager_LogOut_m6A67DD7E16E81147306FC3D27913200C5C122D8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->set_username_0((String_t*)NULL);
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
// System.Void SwitchScene::SceneLoader(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchScene_SceneLoader_m0B4AC98A354A672C000D4AD94611DBEC2B5D1F6A (SwitchScene_tECCF2D511CD5D1BEADBBA384EB6CF917B478408F * __this, int32_t ___SceneIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___SceneIndex0;
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwitchScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchScene__ctor_m9DF77E6C3F0A6662FAB23DDB7A953D88AAC18695 (SwitchScene_tECCF2D511CD5D1BEADBBA384EB6CF917B478408F * __this, const RuntimeMethod* method)
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
// System.Void TouchCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera_Update_m2CEE620CEB308CE0480CF0D4173C50E84EF0CF98 (TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchCamera_Update_m2CEE620CEB308CE0480CF0D4173C50E84EF0CF98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_10 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B16_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B16_1;
	memset((&G_B16_1), 0, sizeof(G_B16_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B16_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B15_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B15_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B17_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B17_2;
	memset((&G_B17_2), 0, sizeof(G_B17_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B17_3 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B19_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B19_1;
	memset((&G_B19_1), 0, sizeof(G_B19_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B19_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B18_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B18_1;
	memset((&G_B18_1), 0, sizeof(G_B18_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B18_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B20_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B20_2;
	memset((&G_B20_2), 0, sizeof(G_B20_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B20_3 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B22_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B22_1;
	memset((&G_B22_1), 0, sizeof(G_B22_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B22_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B21_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B21_1;
	memset((&G_B21_1), 0, sizeof(G_B21_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B21_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B23_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B23_2;
	memset((&G_B23_2), 0, sizeof(G_B23_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B23_3 = NULL;
	TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14 * G_B27_0 = NULL;
	TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14 * G_B26_0 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14 * G_B28_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B31_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B31_1;
	memset((&G_B31_1), 0, sizeof(G_B31_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B31_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B30_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B30_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B32_0;
	memset((&G_B32_0), 0, sizeof(G_B32_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B32_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B32_2;
	memset((&G_B32_2), 0, sizeof(G_B32_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B32_3 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B34_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B34_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B33_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B33_1;
	memset((&G_B33_1), 0, sizeof(G_B33_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B33_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B35_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B35_2;
	memset((&G_B35_2), 0, sizeof(G_B35_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B35_3 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B37_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B37_1;
	memset((&G_B37_1), 0, sizeof(G_B37_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B37_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B36_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B36_1;
	memset((&G_B36_1), 0, sizeof(G_B36_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B36_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B38_0;
	memset((&G_B38_0), 0, sizeof(G_B38_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B38_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B38_2;
	memset((&G_B38_2), 0, sizeof(G_B38_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B38_3 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B40_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B40_1;
	memset((&G_B40_1), 0, sizeof(G_B40_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B40_2 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B39_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B39_1;
	memset((&G_B39_1), 0, sizeof(G_B39_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B39_2 = NULL;
	Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  G_B41_0;
	memset((&G_B41_0), 0, sizeof(G_B41_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B41_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B41_2;
	memset((&G_B41_2), 0, sizeof(G_B41_2));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B41_3 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		if ((!(((float)L_2) > ((float)(21.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (21.0f), L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_10, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_0051:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		if ((!(((float)L_13) < ((float)(-21.0f)))))
		{
			goto IL_00a2;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), (-21.0f), L_17, L_20, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_14, L_21, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00a2:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		if ((!(((double)(((double)((double)L_24)))) > ((double)(17.5)))))
		{
			goto IL_00f5;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_32), L_28, (17.5f), L_31, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_25, L_32, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00f5:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		if ((!(((double)(((double)((double)L_35)))) < ((double)(-17.5)))))
		{
			goto IL_0146;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_43), L_39, (-17.5f), L_42, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_36, L_43, /*hidden argument*/NULL);
	}

IL_0146:
	{
		int32_t L_44 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0172;
		}
	}
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_45 = __this->get_oldTouchPositions_4();
		NullCheck(L_45);
		il2cpp_codegen_initobj(((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_46 = __this->get_oldTouchPositions_4();
		NullCheck(L_46);
		il2cpp_codegen_initobj(((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		return;
	}

IL_0172:
	{
		int32_t L_47 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_48 = __this->get_oldTouchPositions_4();
		NullCheck(L_48);
		bool L_49 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_01a3;
		}
	}
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_50 = __this->get_oldTouchPositions_4();
		NullCheck(L_50);
		bool L_51 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		if (!L_51)
		{
			goto IL_01d5;
		}
	}

IL_01a3:
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_52 = __this->get_oldTouchPositions_4();
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_53 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_53;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_54 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_55), L_54, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )L_55);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_56 = __this->get_oldTouchPositions_4();
		NullCheck(L_56);
		il2cpp_codegen_initobj(((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		return;
	}

IL_01d5:
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_57 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_57;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_58 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_58;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_60 = L_59;
		NullCheck(L_60);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_60, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_63 = __this->get_oldTouchPositions_4();
		NullCheck(L_63);
		int32_t L_64 = 0;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_65 = (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_6 = L_65;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_66 = V_1;
		V_7 = L_66;
		bool L_67 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B15_0 = L_62;
		G_B15_1 = L_61;
		G_B15_2 = L_60;
		if (L_67)
		{
			G_B16_0 = L_62;
			G_B16_1 = L_61;
			G_B16_2 = L_60;
			goto IL_021c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_68 = V_8;
		G_B17_0 = L_68;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_022f;
	}

IL_021c:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_69 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_70 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_71 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_69, L_70, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_72), L_71, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B17_0 = L_72;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_022f:
	{
		V_4 = G_B17_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_73 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_73);
		float L_74 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_73, /*hidden argument*/NULL);
		V_5 = L_74;
		bool L_75 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B18_0 = G_B17_1;
		G_B18_1 = G_B17_2;
		G_B18_2 = G_B17_3;
		if (L_75)
		{
			G_B19_0 = G_B17_1;
			G_B19_1 = G_B17_2;
			G_B19_2 = G_B17_3;
			goto IL_0253;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_76 = V_6;
		G_B20_0 = L_76;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_0266;
	}

IL_0253:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_77 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		float L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_79 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_77, L_78, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_80;
		memset((&L_80), 0, sizeof(L_80));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_80), L_79, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B20_0 = L_80;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_0266:
	{
		V_2 = G_B20_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_81 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_81);
		int32_t L_82 = Camera_get_pixelHeight_m38879ACBA6B21C25E83AB07FA37A8E5EB7A51B05(L_81, /*hidden argument*/NULL);
		V_3 = (((float)((float)L_82)));
		bool L_83 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B21_0 = G_B20_1;
		G_B21_1 = G_B20_2;
		G_B21_2 = G_B20_3;
		if (L_83)
		{
			G_B22_0 = G_B20_1;
			G_B22_1 = G_B20_2;
			G_B22_2 = G_B20_3;
			goto IL_0289;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_84 = V_4;
		G_B23_0 = L_84;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_02a5;
	}

IL_0289:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_85 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		float L_86 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_87 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_85, L_86, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_88 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_87, (2.0f), /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_89), L_88, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B23_0 = L_89;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_02a5:
	{
		V_4 = G_B23_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_90 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_90, /*hidden argument*/NULL);
		NullCheck(G_B23_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(G_B23_1, L_91, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(G_B23_2, L_92, /*hidden argument*/NULL);
		NullCheck(G_B23_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(G_B23_3, L_93, /*hidden argument*/NULL);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_94 = __this->get_oldTouchPositions_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_95 = V_1;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_96;
		memset((&L_96), 0, sizeof(L_96));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_96), L_95, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )L_96);
		return;
	}

IL_02d5:
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_97 = __this->get_oldTouchPositions_4();
		NullCheck(L_97);
		bool L_98 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		if (L_98)
		{
			goto IL_039a;
		}
	}
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_99 = __this->get_oldTouchPositions_4();
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_100 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_100;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_101 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_102;
		memset((&L_102), 0, sizeof(L_102));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_102), L_101, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )L_102);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_103 = __this->get_oldTouchPositions_4();
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_104 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(1, /*hidden argument*/NULL);
		V_0 = L_104;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_105 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_106;
		memset((&L_106), 0, sizeof(L_106));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_106), L_105, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )L_106);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_107 = __this->get_oldTouchPositions_4();
		NullCheck(L_107);
		int32_t L_108 = 0;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_109 = (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_2 = L_109;
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_110 = __this->get_oldTouchPositions_4();
		NullCheck(L_110);
		int32_t L_111 = 1;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_112 = (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_4 = L_112;
		bool L_113 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		bool L_114 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B26_0 = __this;
		if (((int32_t)((int32_t)L_113&(int32_t)L_114)))
		{
			G_B27_0 = __this;
			goto IL_0362;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_115 = V_6;
		G_B28_0 = L_115;
		G_B28_1 = G_B26_0;
		goto IL_037a;
	}

IL_0362:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_116 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_117 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_118 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_116, L_117, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_119), L_118, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B28_0 = L_119;
		G_B28_1 = G_B27_0;
	}

IL_037a:
	{
		V_6 = G_B28_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_120 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_6), /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		NullCheck(G_B28_1);
		G_B28_1->set_oldTouchVector_5(L_120);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_121 = __this->get_address_of_oldTouchVector_5();
		float L_122 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_121, /*hidden argument*/NULL);
		__this->set_oldTouchDistance_6(L_122);
		return;
	}

IL_039a:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_123 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_123);
		int32_t L_124 = Camera_get_pixelWidth_m67EC53853580E35527F32D6EA002FE21C234172E(L_123, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_125 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_125);
		int32_t L_126 = Camera_get_pixelHeight_m38879ACBA6B21C25E83AB07FA37A8E5EB7A51B05(L_125, /*hidden argument*/NULL);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_9), (((float)((float)L_124))), (((float)((float)L_126))), /*hidden argument*/NULL);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_127 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_128 = L_127;
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_129 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_129;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_130 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_130);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_131 = L_128;
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_132 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(1, /*hidden argument*/NULL);
		V_0 = L_132;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_133 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_133);
		V_10 = L_131;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_134 = V_10;
		NullCheck(L_134);
		int32_t L_135 = 0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_137 = V_10;
		NullCheck(L_137);
		int32_t L_138 = 1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_140 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_136, L_139, /*hidden argument*/NULL);
		V_11 = L_140;
		float L_141 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_11), /*hidden argument*/NULL);
		V_12 = L_141;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_142 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_143 = L_142;
		NullCheck(L_143);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_143, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_145 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_146 = __this->get_oldTouchPositions_4();
		NullCheck(L_146);
		int32_t L_147 = 0;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_148 = (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )(L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		V_8 = L_148;
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_149 = __this->get_oldTouchPositions_4();
		NullCheck(L_149);
		int32_t L_150 = 1;
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_151 = (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )(L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		V_13 = L_151;
		bool L_152 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		bool L_153 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_13), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B30_0 = L_145;
		G_B30_1 = L_144;
		G_B30_2 = L_143;
		if (((int32_t)((int32_t)L_152&(int32_t)L_153)))
		{
			G_B31_0 = L_145;
			G_B31_1 = L_144;
			G_B31_2 = L_143;
			goto IL_0456;
		}
	}
	{
		il2cpp_codegen_initobj((&V_14), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_154 = V_14;
		G_B32_0 = L_154;
		G_B32_1 = G_B30_0;
		G_B32_2 = G_B30_1;
		G_B32_3 = G_B30_2;
		goto IL_046e;
	}

IL_0456:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_155 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_156 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_13), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_157 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_155, L_156, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_158;
		memset((&L_158), 0, sizeof(L_158));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_158), L_157, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B32_0 = L_158;
		G_B32_1 = G_B31_0;
		G_B32_2 = G_B31_1;
		G_B32_3 = G_B31_2;
	}

IL_046e:
	{
		V_6 = G_B32_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_159 = V_9;
		V_7 = L_159;
		bool L_160 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B33_0 = G_B32_1;
		G_B33_1 = G_B32_2;
		G_B33_2 = G_B32_3;
		if (L_160)
		{
			G_B34_0 = G_B32_1;
			G_B34_1 = G_B32_2;
			G_B34_2 = G_B32_3;
			goto IL_0489;
		}
	}
	{
		il2cpp_codegen_initobj((&V_13), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_161 = V_13;
		G_B35_0 = L_161;
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		G_B35_3 = G_B33_2;
		goto IL_049c;
	}

IL_0489:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_162 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_163 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_164 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_162, L_163, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_165;
		memset((&L_165), 0, sizeof(L_165));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_165), L_164, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B35_0 = L_165;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
		G_B35_3 = G_B34_2;
	}

IL_049c:
	{
		V_4 = G_B35_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_166 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_166);
		float L_167 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_166, /*hidden argument*/NULL);
		V_5 = L_167;
		bool L_168 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B36_0 = G_B35_1;
		G_B36_1 = G_B35_2;
		G_B36_2 = G_B35_3;
		if (L_168)
		{
			G_B37_0 = G_B35_1;
			G_B37_1 = G_B35_2;
			G_B37_2 = G_B35_3;
			goto IL_04c0;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_169 = V_6;
		G_B38_0 = L_169;
		G_B38_1 = G_B36_0;
		G_B38_2 = G_B36_1;
		G_B38_3 = G_B36_2;
		goto IL_04d3;
	}

IL_04c0:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_170 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		float L_171 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_172 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_170, L_171, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_173;
		memset((&L_173), 0, sizeof(L_173));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_173), L_172, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B38_0 = L_173;
		G_B38_1 = G_B37_0;
		G_B38_2 = G_B37_1;
		G_B38_3 = G_B37_2;
	}

IL_04d3:
	{
		V_2 = G_B38_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_174 = V_9;
		float L_175 = L_174.get_y_1();
		V_3 = L_175;
		bool L_176 = Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m3B2215D420E21B4D600BF5481A4F3E1A8A38F7EE_RuntimeMethod_var);
		G_B39_0 = G_B38_1;
		G_B39_1 = G_B38_2;
		G_B39_2 = G_B38_3;
		if (L_176)
		{
			G_B40_0 = G_B38_1;
			G_B40_1 = G_B38_2;
			G_B40_2 = G_B38_3;
			goto IL_04f1;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF ));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_177 = V_4;
		G_B41_0 = L_177;
		G_B41_1 = G_B39_0;
		G_B41_2 = G_B39_1;
		G_B41_3 = G_B39_2;
		goto IL_0503;
	}

IL_04f1:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_178 = Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m735B7B6811311EED9CE00D3EE46FD3689B0A2BCF_RuntimeMethod_var);
		float L_179 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_180 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_178, L_179, /*hidden argument*/NULL);
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_181;
		memset((&L_181), 0, sizeof(L_181));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_181), L_180, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		G_B41_0 = L_181;
		G_B41_1 = G_B40_0;
		G_B41_2 = G_B40_1;
		G_B41_3 = G_B40_2;
	}

IL_0503:
	{
		V_4 = G_B41_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_182 = Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC((Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF *)(&V_4), /*hidden argument*/Nullable_1_get_Value_m9CD200931779B9F29BBBBDE0B3D28D1B734F9AAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_182, /*hidden argument*/NULL);
		NullCheck(G_B41_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_184 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(G_B41_1, L_183, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_185 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(G_B41_2, L_184, /*hidden argument*/NULL);
		NullCheck(G_B41_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(G_B41_3, L_185, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_186 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_186);
		float L_187 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_186, /*hidden argument*/NULL);
		if ((!(((double)(((double)((double)L_187)))) >= ((double)(4.1)))))
		{
			goto IL_0566;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_188 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_188);
		float L_189 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_188, /*hidden argument*/NULL);
		if ((!(((float)L_189) <= ((float)(12.0f)))))
		{
			goto IL_0566;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_190 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_191 = L_190;
		NullCheck(L_191);
		float L_192 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_191, /*hidden argument*/NULL);
		float L_193 = __this->get_oldTouchDistance_6();
		float L_194 = V_12;
		NullCheck(L_191);
		Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428(L_191, ((float)il2cpp_codegen_multiply((float)L_192, (float)((float)((float)L_193/(float)L_194)))), /*hidden argument*/NULL);
		goto IL_05bf;
	}

IL_0566:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_195 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_195);
		float L_196 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_195, /*hidden argument*/NULL);
		if ((!(((double)(((double)((double)L_196)))) < ((double)(4.1)))))
		{
			goto IL_0596;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_197 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_198 = L_197;
		NullCheck(L_198);
		float L_199 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_198, /*hidden argument*/NULL);
		NullCheck(L_198);
		Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428(L_198, ((float)il2cpp_codegen_add((float)L_199, (float)(2.0f))), /*hidden argument*/NULL);
		goto IL_05bf;
	}

IL_0596:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_200 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_200);
		float L_201 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_200, /*hidden argument*/NULL);
		if ((!(((float)L_201) > ((float)(12.0f)))))
		{
			goto IL_05bf;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_202 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_203 = L_202;
		NullCheck(L_203);
		float L_204 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_203, /*hidden argument*/NULL);
		NullCheck(L_203);
		Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428(L_203, ((float)il2cpp_codegen_subtract((float)L_204, (float)(2.0f))), /*hidden argument*/NULL);
	}

IL_05bf:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_205 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_206 = L_205;
		NullCheck(L_206);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_207 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_206, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_208 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_209 = V_10;
		NullCheck(L_209);
		int32_t L_210 = 0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_212 = V_10;
		NullCheck(L_212);
		int32_t L_213 = 1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_215 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_211, L_214, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_216 = V_9;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_217 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_215, L_216, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_218 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		NullCheck(L_218);
		float L_219 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_218, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_220 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_217, L_219, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_221 = V_9;
		float L_222 = L_221.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_223 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_220, L_222, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_224 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_223, /*hidden argument*/NULL);
		NullCheck(L_208);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_225 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_208, L_224, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_226 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_207, L_225, /*hidden argument*/NULL);
		NullCheck(L_206);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_206, L_226, /*hidden argument*/NULL);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_227 = __this->get_oldTouchPositions_4();
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_228 = V_10;
		NullCheck(L_228);
		int32_t L_229 = 0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_231;
		memset((&L_231), 0, sizeof(L_231));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_231), L_230, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )L_231);
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_232 = __this->get_oldTouchPositions_4();
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_233 = V_10;
		NullCheck(L_233);
		int32_t L_234 = 1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF  L_236;
		memset((&L_236), 0, sizeof(L_236));
		Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4((&L_236), L_235, /*hidden argument*/Nullable_1__ctor_m0F37E45681DA751DF5D2214A215A8D1901FDA6B4_RuntimeMethod_var);
		NullCheck(L_232);
		(L_232)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tB1C6E075C826A61C0A490505216275E606423CDF )L_236);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_237 = V_11;
		__this->set_oldTouchVector_5(L_237);
		float L_238 = V_12;
		__this->set_oldTouchDistance_6(L_238);
		return;
	}
}
// System.Void TouchCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchCamera__ctor_m9D8C2BBA532E73120FC4C8E448823394D3360801 (TouchCamera_t5804FE07848FB1046EA19DC751DF6A59C5F5FB14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchCamera__ctor_m9D8C2BBA532E73120FC4C8E448823394D3360801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14* L_0 = (Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14*)(Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14*)SZArrayNew(Nullable_1U5BU5D_tE25469420320FF7D9E17062786FDC13096CACF14_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_oldTouchPositions_4(L_0);
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
// System.Void Tutorial_Switch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Switch_Start_m0FA6BDD4C3AE5067E7B6ADBFFC5228B31DE8914F (Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Tutorial_Switch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Switch_OnEnable_m92BBE4763EDBD7CCA3570DBCF53D2EECD8BF8B17 (Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tutorial_Switch_OnEnable_m92BBE4763EDBD7CCA3570DBCF53D2EECD8BF8B17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_button_4();
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_0, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_2 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_2, __this, (intptr_t)((intptr_t)Tutorial_Switch_switchPic_m4688B742A657971EEF06482D07C80837D7F4BC4D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tutorial_Switch::switchPic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Switch_switchPic_m4688B742A657971EEF06482D07C80837D7F4BC4D (Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tutorial_Switch_switchPic_m4688B742A657971EEF06482D07C80837D7F4BC4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_counter_6();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_counter_6();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (0.0f), (270.0f), (-100.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_4, L_5, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_003c:
	{
		int32_t L_6 = __this->get_counter_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (500.0f), (270.0f), (-100.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_0066:
	{
		int32_t L_9 = __this->get_counter_6();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0090;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (-500.0f), (10.0f), (-100.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_0090:
	{
		int32_t L_12 = __this->get_counter_6();
		if ((!(((uint32_t)L_12) == ((uint32_t)3))))
		{
			goto IL_00da;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), (0.0f), (10.0f), (-100.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_13, L_14, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_15 = __this->get_button_4();
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)0, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_17 = __this->get_button2_5();
		NullCheck(L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)1, /*hidden argument*/NULL);
	}

IL_00da:
	{
		int32_t L_19 = __this->get_counter_6();
		__this->set_counter_6(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		return;
	}
}
// System.Void Tutorial_Switch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Switch__ctor_mE63DB306CC8492F7016C23D5624160D3ADE76F01 (Tutorial_Switch_t46E4BC4282369A847DB6332E1D3CE4C9899BE815 * __this, const RuntimeMethod* method)
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
// System.Void apple::lis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apple_lis_mE52F4C84B1A13CD064984B0134759C838833A34F (apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (apple_lis_mE52F4C84B1A13CD064984B0134759C838833A34F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		int32_t L_1 = __this->get_value_5();
		((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->set_golds_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = __this->get_can_4();
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void apple::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apple_Start_m399C9DC8176E33E37288384605DA04DCBC5D0EC3 (apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (apple_Start_m399C9DC8176E33E37288384605DA04DCBC5D0EC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(__this, /*hidden argument*/NULL);
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)20), ((int32_t)150), /*hidden argument*/NULL);
		__this->set_value_5(L_2);
		int32_t L_3 = __this->get_value_5();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)149)))))
		{
			goto IL_00ba;
		}
	}
	{
		__this->set_value_5(((int32_t)600));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_butterfuly_6();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)1, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_004d:
	{
		String_t* L_5 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(__this, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteralDC4B536E048B21E77853BB2B2397506AAFA45D68, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_7 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)50), ((int32_t)300), /*hidden argument*/NULL);
		__this->set_value_5(L_7);
		int32_t L_8 = __this->get_value_5();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)290))))
		{
			goto IL_00ba;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_butterfuly_6();
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)1, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_008c:
	{
		int32_t L_10 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)300), ((int32_t)600), /*hidden argument*/NULL);
		__this->set_value_5(L_10);
		int32_t L_11 = __this->get_value_5();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)550))))
		{
			goto IL_00ba;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_butterfuly_6();
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_13 = Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C(__this, /*hidden argument*/Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var);
		NullCheck(L_13);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_14 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_13, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_15 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_15, __this, (intptr_t)((intptr_t)apple_lis_mE52F4C84B1A13CD064984B0134759C838833A34F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void apple::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apple_Update_m0E7F27AC607DC734F06AFBBE20C99E9C9C1F8FC3 (apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void apple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void apple__ctor_m2CCB5132D3BA11FA8D3C76B435D9DE729361217A (apple_t97EE95355D479E32E3A83B418F43EBCB03D05E9D * __this, const RuntimeMethod* method)
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
// System.Void button_tree_plant::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void button_tree_plant_Start_m68F9A4F9AC9CF590C3B3BC8E4FE6218614992C39 (button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (button_tree_plant_Start_m68F9A4F9AC9CF590C3B3BC8E4FE6218614992C39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_button_5();
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_1, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = __this->get_button_5();
		NullCheck(L_2);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_3 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_2, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_4 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_4, __this, (intptr_t)((intptr_t)button_tree_plant_ButtonClicked_m214A992158EB86CBDD584C47C935A983ABD8CE5E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void button_tree_plant::ButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void button_tree_plant_ButtonClicked_m214A992158EB86CBDD584C47C935A983ABD8CE5E (button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (button_tree_plant_ButtonClicked_m214A992158EB86CBDD584C47C935A983ABD8CE5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_5 = NULL;
	{
		String_t* L_0 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(__this, /*hidden argument*/NULL);
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_2 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)100))))
		{
			goto IL_0243;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_3 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->set_golds_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)100))));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_can_go_4();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		(&V_0)->set_z_4((0.0f));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_shadow_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_can_go_4();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_7, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_tree_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_can_go_4();
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_16, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_13, L_14, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_1 = L_18;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = V_1;
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = V_1;
		NullCheck(L_20);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_21 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_20, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_1;
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		NullCheck(L_21);
		Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81(L_21, ((int32_t)il2cpp_codegen_add((int32_t)((-(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_25, (float)(10.0f)))))))), (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		return;
	}

IL_00bb:
	{
		String_t* L_26 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(__this, /*hidden argument*/NULL);
		bool L_27 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_26, _stringLiteral6435F683AB44DC5A30AFA7A4523115585991EB42, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_017c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_28 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		if ((((int32_t)L_28) < ((int32_t)((int32_t)200))))
		{
			goto IL_0243;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_29 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->set_golds_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)200))));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_can_go_4();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		(&V_2)->set_z_4((0.0f));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = __this->get_shadow_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = __this->get_can_go_4();
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_33, L_34, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_38);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_38, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get_tree_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = __this->get_can_go_4();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_39, L_40, L_43, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_3 = L_44;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_45 = V_3;
		NullCheck(L_45);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_45, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_46 = V_3;
		NullCheck(L_46);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_47 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_46, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = V_3;
		NullCheck(L_48);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_3();
		NullCheck(L_47);
		Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81(L_47, ((int32_t)il2cpp_codegen_add((int32_t)((-(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_51, (float)(10.0f)))))))), (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		return;
	}

IL_017c:
	{
		String_t* L_52 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(__this, /*hidden argument*/NULL);
		bool L_53 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_52, _stringLiteralDC4B536E048B21E77853BB2B2397506AAFA45D68, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0243;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_54 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		if ((((int32_t)L_54) < ((int32_t)((int32_t)150))))
		{
			goto IL_0243;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_55 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->set_golds_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)((int32_t)150))));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = __this->get_can_go_4();
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		(&V_4)->set_z_4((0.0f));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_59 = __this->get_shadow_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = V_4;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = __this->get_can_go_4();
		NullCheck(L_61);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_63 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_64 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_59, L_60, L_63, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_64);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_64, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_65 = __this->get_tree_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = V_4;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_67 = __this->get_can_go_4();
		NullCheck(L_67);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_68 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_69 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_68, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_70 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_65, L_66, L_69, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_5 = L_70;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_71 = V_5;
		NullCheck(L_71);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_71, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_72 = V_5;
		NullCheck(L_72);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_73 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_72, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_74 = V_5;
		NullCheck(L_74);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_75 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_75, /*hidden argument*/NULL);
		float L_77 = L_76.get_y_3();
		NullCheck(L_73);
		Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81(L_73, ((int32_t)il2cpp_codegen_add((int32_t)((-(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_77, (float)(10.0f)))))))), (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
	}

IL_0243:
	{
		return;
	}
}
// System.Void button_tree_plant::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void button_tree_plant_Update_m7FAEA4D6F7347AA35C183DD64D2EA1E499D774F5 (button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void button_tree_plant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void button_tree_plant__ctor_m3CF22D3EDD329D907284DCB487247E0E648263C1 (button_tree_plant_t0B7106AB6820514642E83553F4DED64EA12E2EA8 * __this, const RuntimeMethod* method)
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
// System.Void client.Program::Main(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_Main_m122EF45C80994A7021725F2F211935A8A6427DF8 (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Program_Main_m122EF45C80994A7021725F2F211935A8A6427DF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
		Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_1, 2, 1, 6, /*hidden argument*/NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = L_1;
		NullCheck(L_2);
		Socket_Connect_m3D3BE0D486BFCB947CAF7C7D83ABD4153040FF00(L_2, _stringLiteral4B84B15BFF6EE5796152495A230E45E3D7E947D9, ((int32_t)1234), /*hidden argument*/NULL);
		V_1 = _stringLiteral9D989E8D27DC9E0EC3389FC855F142C3D40F0C50;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2(/*hidden argument*/NULL);
		String_t* L_4 = V_1;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		V_2 = L_5;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_6 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_2;
		NullCheck(L_6);
		Socket_Send_mA269050501DC895502B1DD4254789F335B55B328(L_6, L_7, /*hidden argument*/NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_8 = L_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = Socket_Receive_mD8D9A2358E66B15A2291E7DF76441E9D445C366C(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_11 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		String_t* L_14 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, L_13);
		V_1 = L_14;
		String_t* L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_Write_m0C677E5FEFD48F57BC409D7C992748DD72BC6FC2(L_15, /*hidden argument*/NULL);
		NullCheck(L_8);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_8, /*hidden argument*/NULL);
		Console_Read_m75C49593D6C9876A8A6AA0B9B457E45DC6060372(/*hidden argument*/NULL);
		return;
	}
}
// System.Void client.Program::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program__ctor_m2FC303BCAB54ECE120CC95A226B78880C2A7B704 (Program_tC12BD346B887DCAF9A5734C20CA3278EC249ECAB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void connectGreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void connectGreen_Start_mF5A15E100F55EBB541FA311C5CFF5B7E9EAAF783 (connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void connectGreen::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void connectGreen_OnTriggerEnter_m70A943AAAE5D08D04C185CBA72EC60309FD84B9A (connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (connectGreen_OnTriggerEnter_m70A943AAAE5D08D04C185CBA72EC60309FD84B9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralBBC29B76C59B382ACA12201C44929002EF1778AE, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0063;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_greenfloor_4();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_4 = ___other0;
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_greenfloor_4();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_9, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_greenfloor_4();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_greenfloor_4();
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_3, L_14, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// System.Void connectGreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void connectGreen_Update_m45D3066EA6A0F3D442BB0BDCFF275CAE4BEAC9FF (connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void connectGreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void connectGreen__ctor_m9155C07B5BFB82C93B138B75E7E5ED0294608423 (connectGreen_tB963A690182E5812300A892FBB89342A1A14BE13 * __this, const RuntimeMethod* method)
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
// System.Void fruit_grow_up::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fruit_grow_up_Start_mE4F054E64F58363A5C4A36D78E1BCE61404ECB27 (fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fruit_grow_up_Start_mE4F054E64F58363A5C4A36D78E1BCE61404ECB27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_apple_5();
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		float L_3 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((100.0f), (140.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_7(L_3);
		goto IL_0071;
	}

IL_002e:
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_4 = __this->get_apple_5();
		NullCheck(L_4);
		String_t* L_5 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteralDC4B536E048B21E77853BB2B2397506AAFA45D68, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		float L_7 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((150.0f), (200.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_7(L_7);
		goto IL_0071;
	}

IL_005c:
	{
		float L_8 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((300.0f), (350.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_7(L_8);
	}

IL_0071:
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_9 = __this->get_apple_5();
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void fruit_grow_up::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fruit_grow_up_Update_m0EC2BB6089F93C8095FEDDC36DDE7B1A75ECCD63 (fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fruit_grow_up_Update_m0EC2BB6089F93C8095FEDDC36DDE7B1A75ECCD63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_apple_5();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_0);
		if (L_1)
		{
			goto IL_00e5;
		}
	}
	{
		float L_2 = __this->get_timeLeft_7();
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeLeft_7(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		float L_4 = __this->get_timeLeft_7();
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_00e5;
		}
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_5 = __this->get_apple_can_4();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_7 = __this->get_apple_5();
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = __this->get_apple_can_4();
		NullCheck(L_9);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_10 = Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD(L_9, /*hidden argument*/Component_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m72658F06C13B44ECAE973DE1E20B4BA8A247DBBD_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_apple_tree_6();
		NullCheck(L_11);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_12 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_11, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = Renderer_get_sortingOrder_m33DD50ED293AA672FDAD862B4A4865666B5FEBAF(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Canvas_set_sortingOrder_m4387540EBDF2716DFAE26F27074DBF15F32382E7(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_14 = __this->get_apple_5();
		NullCheck(L_14);
		String_t* L_15 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_14, /*hidden argument*/NULL);
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		float L_17 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((100.0f), (140.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_7(L_17);
		return;
	}

IL_00a3:
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_18 = __this->get_apple_5();
		NullCheck(L_18);
		String_t* L_19 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_18, /*hidden argument*/NULL);
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteral8D4AF2BA8646456D5CF9458867F57FC4A6087D96, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d0;
		}
	}
	{
		float L_21 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((150.0f), (200.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_7(L_21);
		return;
	}

IL_00d0:
	{
		float L_22 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((300.0f), (400.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_7(L_22);
	}

IL_00e5:
	{
		return;
	}
}
// System.Void fruit_grow_up::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fruit_grow_up__ctor_mD5E6FC341CC916238A0EAF7E66DAE9761E845B56 (fruit_grow_up_t07BDD1E49CA321F86472C3A7FAE9B087C5FF5FD2 * __this, const RuntimeMethod* method)
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
// System.Void gold::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gold_Start_m7C869646F8611D02E4C130E6B91E6FFB305EC6DE (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gold_Start_m7C869646F8611D02E4C130E6B91E6FFB305EC6DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_MyCamPos_5();
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gold::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gold_Update_mD624F0092CAF6D5ADAF507B31D0DF7562D4703D0 (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gold_Update_mD624F0092CAF6D5ADAF507B31D0DF7562D4703D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_golds_4();
		((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->set_score_1(L_0);
		return;
	}
}
// System.Void gold::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gold_Awake_mC598E182D8BDA730BD59056E551C4C7B42F003C0 (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gold_Awake_mC598E182D8BDA730BD59056E551C4C7B42F003C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_username_0();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
	}

IL_000d:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_playerDisplay_7();
		String_t* L_2 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_username_0();
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0B19F53BD3BD55536A83179D6C429E92E812CF3F, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_scoreDisplay_8();
		int32_t L_5 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_score_1();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3CDF2936DA2FC556BFA533AB1EB59CE710AC80E5, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_8);
		return;
	}
}
// System.Void gold::CallSaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gold_CallSaveData_mBBB53EDBC9E67705726AB16506D54A34317C0975 (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = gold_SavePlayerData_mC01CE6EE771668527A50EAD0B37D23DF903AEF8F(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator gold::SavePlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gold_SavePlayerData_mC01CE6EE771668527A50EAD0B37D23DF903AEF8F (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gold_SavePlayerData_mC01CE6EE771668527A50EAD0B37D23DF903AEF8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * L_0 = (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 *)il2cpp_codegen_object_new(U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24_il2cpp_TypeInfo_var);
		U3CSavePlayerDataU3Ed__9__ctor_m89E0A6114F701BFC8E35C651E81BCB617A4CACB1(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void gold::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gold__ctor_mF7C222A7B8121E222F952FC25B9870BEE29C3154 (gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void gold::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gold__cctor_mCA7874E5B05860563CDA33FE1C8C583E929902F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (gold__cctor_mCA7874E5B05860563CDA33FE1C8C583E929902F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->set_golds_4(((int32_t)1000));
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
// System.Void gold_<SavePlayerData>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSavePlayerDataU3Ed__9__ctor_m89E0A6114F701BFC8E35C651E81BCB617A4CACB1 (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void gold_<SavePlayerData>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSavePlayerDataU3Ed__9_System_IDisposable_Dispose_m2DD7FBC59C90316E8FAF9EE1B685C6F9C4D867A9 (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean gold_<SavePlayerData>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSavePlayerDataU3Ed__9_MoveNext_m638878217BD6B4FA044737FFBD15C44C10E87C92 (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSavePlayerDataU3Ed__9_MoveNext_m638878217BD6B4FA044737FFBD15C44C10E87C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0063;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_3 = (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 *)il2cpp_codegen_object_new(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var);
		WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_4 = V_1;
		String_t* L_5 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_username_0();
		NullCheck(L_4);
		WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8(L_4, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, L_5, /*hidden argument*/NULL);
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_6 = V_1;
		int32_t L_7 = ((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->get_score_1();
		NullCheck(L_6);
		WWWForm_AddField_mB26D9AEFB61E1FBEF6BC57B36A54DB059ECE9248(L_6, _stringLiteral75EBCB361C656225206BB0191DF63CB1D38CBBAB, L_7, /*hidden argument*/NULL);
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_8 = V_1;
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_9 = (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)il2cpp_codegen_object_new(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var);
		WWW__ctor_mCD26DA4AF4D023C128F1E031AC85A0557B98E6BF(L_9, _stringLiteralAEAFD185932FB2BA5D1AEEB99A9007F5067FDDF4, L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_2(L_9);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_10 = __this->get_U3CwwwU3E5__2_2();
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_11 = __this->get_U3CwwwU3E5__2_2();
		NullCheck(L_11);
		String_t* L_12 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_11, /*hidden argument*/NULL);
		bool L_13 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralDA9CE49BA6FD3DE11BA67AF891088524F2A66BB5, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_008d:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_14 = __this->get_U3CwwwU3E5__2_2();
		NullCheck(L_14);
		String_t* L_15 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_14, /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral3B950036685ECA5891FF3DACD052030D79C26458, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_16, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		DBManager_LogOut_m6A67DD7E16E81147306FC3D27913200C5C122D8D(/*hidden argument*/NULL);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object gold_<SavePlayerData>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSavePlayerDataU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE0407DFDC288A1B6891D1072F733FAEA43E3641D (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void gold_<SavePlayerData>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSavePlayerDataU3Ed__9_System_Collections_IEnumerator_Reset_m9516B449358C40CB0FA6D400D1A7E6B582CFD726 (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSavePlayerDataU3Ed__9_System_Collections_IEnumerator_Reset_m9516B449358C40CB0FA6D400D1A7E6B582CFD726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSavePlayerDataU3Ed__9_System_Collections_IEnumerator_Reset_m9516B449358C40CB0FA6D400D1A7E6B582CFD726_RuntimeMethod_var);
	}
}
// System.Object gold_<SavePlayerData>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSavePlayerDataU3Ed__9_System_Collections_IEnumerator_get_Current_m4C98065105C8701142BFDDF38AE4AED8219F0757 (U3CSavePlayerDataU3Ed__9_t942BEE10C31539F9327B3F75B9F6FE35F6ADEC24 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void grassShadow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grassShadow__ctor_m9B54A3524CB75E9E59B7461CEC14D07C460FCCD1 (grassShadow_tCCB262471E86CC8A78495EE4B3AF668282B6B28A * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB(__this, /*hidden argument*/NULL);
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
// System.Void image_click::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void image_click_Start_mA044BE58F6E7BA85A8A1CAAF8E347DA726CC9ADF (image_click_t481199DFDE345717D1A9D1B9E1A29F3CF72F57D7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void image_click::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void image_click_Update_m9BC9527E9DA7CF872B4338E0D11A8E17D6F35FE2 (image_click_t481199DFDE345717D1A9D1B9E1A29F3CF72F57D7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void image_click::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void image_click__ctor_mF06345E2ED19181F3A717ACCE5F40FAD0F9001AB (image_click_t481199DFDE345717D1A9D1B9E1A29F3CF72F57D7 * __this, const RuntimeMethod* method)
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
// System.Void login::CallLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void login_CallLogin_mE4910FB2870FD49C80442791AD2CDC9ED2944DD2 (login_t308222CA8470981C94C60680938EF6C2069F6C06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = login_LoginPlayer_m792F35B365809F2AF3E819C3C6889D96B018E6D7(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator login::LoginPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* login_LoginPlayer_m792F35B365809F2AF3E819C3C6889D96B018E6D7 (login_t308222CA8470981C94C60680938EF6C2069F6C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (login_LoginPlayer_m792F35B365809F2AF3E819C3C6889D96B018E6D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * L_0 = (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 *)il2cpp_codegen_object_new(U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945_il2cpp_TypeInfo_var);
		U3CLoginPlayerU3Ed__4__ctor_mB9C3811979C1FAE16E1D10905C22D81578D384D2(L_0, 0, /*hidden argument*/NULL);
		U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void login::VerifyInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void login_VerifyInputs_mD5B4E35C324896408772C13704F254EAFB5C8952 (login_t308222CA8470981C94C60680938EF6C2069F6C06 * __this, const RuntimeMethod* method)
{
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * G_B2_0 = NULL;
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * G_B3_1 = NULL;
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_submitButton_6();
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_1 = __this->get_nameField_4();
		NullCheck(L_1);
		String_t* L_2 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_3) < ((int32_t)2)))
		{
			G_B2_0 = L_0;
			goto IL_0031;
		}
	}
	{
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_4 = __this->get_passwordField_5();
		NullCheck(L_4);
		String_t* L_5 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0032:
	{
		NullCheck(G_B3_1);
		Selectable_set_interactable_mD5096017CC3058D280066EB9ABDDF5062983A94F(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void login::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void login__ctor_mC177A5BF1130894126FE7C8B3FAB4064427A8E71 (login_t308222CA8470981C94C60680938EF6C2069F6C06 * __this, const RuntimeMethod* method)
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
// System.Void login_<LoginPlayer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginPlayerU3Ed__4__ctor_mB9C3811979C1FAE16E1D10905C22D81578D384D2 (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void login_<LoginPlayer>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginPlayerU3Ed__4_System_IDisposable_Dispose_mA863A11E1F3F7C26E5BAAC52CA6B9185E29D03D0 (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean login_<LoginPlayer>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoginPlayerU3Ed__4_MoveNext_m1C2F9A58EC6C97B4A15A4A3C97E06C3CE4543C2B (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoginPlayerU3Ed__4_MoveNext_m1C2F9A58EC6C97B4A15A4A3C97E06C3CE4543C2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	login_t308222CA8470981C94C60680938EF6C2069F6C06 * V_1 = NULL;
	WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		login_t308222CA8470981C94C60680938EF6C2069F6C06 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_4 = (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 *)il2cpp_codegen_object_new(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var);
		WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_5 = V_2;
		login_t308222CA8470981C94C60680938EF6C2069F6C06 * L_6 = V_1;
		NullCheck(L_6);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_7 = L_6->get_nameField_4();
		NullCheck(L_7);
		String_t* L_8 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8(L_5, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, L_8, /*hidden argument*/NULL);
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_9 = V_2;
		login_t308222CA8470981C94C60680938EF6C2069F6C06 * L_10 = V_1;
		NullCheck(L_10);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_11 = L_10->get_passwordField_5();
		NullCheck(L_11);
		String_t* L_12 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8(L_9, _stringLiteral5BAA61E4C9B93F3F0682250B6CF8331B7EE68FD8, L_12, /*hidden argument*/NULL);
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_13 = V_2;
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_14 = (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)il2cpp_codegen_object_new(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var);
		WWW__ctor_mCD26DA4AF4D023C128F1E031AC85A0557B98E6BF(L_14, _stringLiteralA1E8C571C2A202E786C86758D544A4FB00D7DA51, L_13, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_14);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_15 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0076:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Il2CppChar L_18 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_17, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_00d1;
		}
	}
	{
		login_t308222CA8470981C94C60680938EF6C2069F6C06 * L_19 = V_1;
		NullCheck(L_19);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_20 = L_19->get_nameField_4();
		NullCheck(L_20);
		String_t* L_21 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_20, /*hidden argument*/NULL);
		((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->set_username_0(L_21);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_22 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_22);
		String_t* L_23 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_22, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)9));
		NullCheck(L_23);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_23, L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_28, /*hidden argument*/NULL);
		((DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_StaticFields*)il2cpp_codegen_static_fields_for(DBManager_tA8A4BE3C1F5E1D061C7456281CF200D4EE7263F8_il2cpp_TypeInfo_var))->set_score_1(L_29);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		goto IL_00eb;
	}

IL_00d1:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_30 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_30);
		String_t* L_31 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_30, /*hidden argument*/NULL);
		String_t* L_32 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral5A68B465BAEA8CC88145DD524918A4F49CEFFD7F, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_32, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		return (bool)0;
	}
}
// System.Object login_<LoginPlayer>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoginPlayerU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m200797F556756B91AA24AA36B43C7A435EB813CB (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void login_<LoginPlayer>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginPlayerU3Ed__4_System_Collections_IEnumerator_Reset_mC61C9A07DB4B8B1A7D98F6B90EF2E0604468B214 (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoginPlayerU3Ed__4_System_Collections_IEnumerator_Reset_mC61C9A07DB4B8B1A7D98F6B90EF2E0604468B214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoginPlayerU3Ed__4_System_Collections_IEnumerator_Reset_mC61C9A07DB4B8B1A7D98F6B90EF2E0604468B214_RuntimeMethod_var);
	}
}
// System.Object login_<LoginPlayer>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoginPlayerU3Ed__4_System_Collections_IEnumerator_get_Current_mFEF6EEE7E0183FCF345D0CA648C0741FC2C8BF3A (U3CLoginPlayerU3Ed__4_t70D1E3AAB59B01EBA15EC801462CAEA0DE24F945 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void mainMenu::GototheMainSense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenu_GototheMainSense_m0F9A3FE3CF8C742E13ED1CA9C90548FF9BE9342C (mainMenu_t05B31125BCD96D8299A069AC15A51A42A2242110 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mainMenu::GototheGamesense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenu_GototheGamesense_mA2365622BEA3C07795C59EBA1A35EEB6FC59D3AA (mainMenu_t05B31125BCD96D8299A069AC15A51A42A2242110 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mainMenu::GototheShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenu_GototheShop_m083862B58FB76516C5D7CF33365FBDAE1366F3C7 (mainMenu_t05B31125BCD96D8299A069AC15A51A42A2242110 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainMenu_GototheShop_m083862B58FB76516C5D7CF33365FBDAE1366F3C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->set_MyCamPos_5(L_2);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenu__ctor_mD2F581A8C4B051042813CAC2F08AE7D91170D365 (mainMenu_t05B31125BCD96D8299A069AC15A51A42A2242110 * __this, const RuntimeMethod* method)
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
// System.Void plantTree::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void plantTree_Start_m97E6F141564DDB1B4D308539766F08D5782E0D59 (plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void plantTree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void plantTree_Update_m131E2F5C87B00225EC9A9AA6F3B0638E1C5AE284 (plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void plantTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void plantTree__ctor_mC48EABE385895B75CDDE2F22B11EE7A732FFC1AC (plantTree_t77491BF1334B1F4C8D66E29FE8D3BAA52D9618D2 * __this, const RuntimeMethod* method)
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
// System.Void plant_button::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void plant_button_Update_mBD2B81DDA08713182B03832BF76CB151A62AB74E (plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (plant_button_Update_mBD2B81DDA08713182B03832BF76CB151A62AB74E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_gold_text_6();
		NullCheck(L_0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(L_0, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var);
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(((gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_StaticFields*)il2cpp_codegen_static_fields_for(gold_t9537ECB205BA2A6854E03430E2B59DE9A7E9D7FA_il2cpp_TypeInfo_var))->get_address_of_golds_4()), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		int32_t L_3 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0168;
		}
	}
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_4 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_4;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = Touch_get_phase_m667014ED67F37A6EB459FB904D2041E270995419((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0168;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_10 = __this->get_address_of_camPos_5();
		float L_11 = L_10->get_x_2();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_15))) < ((float)(1.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_16 = __this->get_address_of_camPos_5();
		float L_17 = L_16->get_x_2();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_21))) > ((float)(-1.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_22 = __this->get_address_of_camPos_5();
		float L_23 = L_22->get_y_3();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_24 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_23, (float)L_27))) > ((float)(-1.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_28 = __this->get_address_of_camPos_5();
		float L_29 = L_28->get_y_3();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_30 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_29, (float)L_33))) < ((float)(1.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = __this->get_can_4();
		NullCheck(L_34);
		bool L_35 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0147;
		}
	}
	{
		(&V_1)->set_z_4((-1.0f));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_can_4();
		NullCheck(L_36);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_36, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_can_4();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_1;
		NullCheck(L_38);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_38, L_39, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = __this->get_can_4();
		NullCheck(L_40);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_41 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_40, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		NullCheck(L_41);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_42 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_41, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_43 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_42);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_42, L_43, /*hidden argument*/NULL);
		goto IL_0153;
	}

IL_0147:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = __this->get_can_4();
		NullCheck(L_44);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_44, (bool)0, /*hidden argument*/NULL);
	}

IL_0153:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_45 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_46, /*hidden argument*/NULL);
		__this->set_camPos_5(L_47);
	}

IL_0168:
	{
		return;
	}
}
// System.Void plant_button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void plant_button__ctor_mD49CE6D1D5A7E827512BC286D391FBE3471D6A1C (plant_button_tD6C24FDDD5E4DAAAC339D80E494FF66A86A26251 * __this, const RuntimeMethod* method)
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
// System.Void registration::CallRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void registration_CallRegister_mF3D6ED1701680941EF69CA3E63FE39BA4BD31666 (registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = registration_Register_m727F62F40C4D23D3ED3B6275392AC492BB080120(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator registration::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* registration_Register_m727F62F40C4D23D3ED3B6275392AC492BB080120 (registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (registration_Register_m727F62F40C4D23D3ED3B6275392AC492BB080120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * L_0 = (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 *)il2cpp_codegen_object_new(U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1_il2cpp_TypeInfo_var);
		U3CRegisterU3Ed__4__ctor_mE9433C0C1B2DEF2DA0D299026AAC52123874C6BE(L_0, 0, /*hidden argument*/NULL);
		U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void registration::VerifyInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void registration_VerifyInputs_mBF3345898A1E2617B6F0FE5ACDF7527E2B299301 (registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * __this, const RuntimeMethod* method)
{
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * G_B2_0 = NULL;
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * G_B3_1 = NULL;
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_submitButton_6();
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_1 = __this->get_nameField_4();
		NullCheck(L_1);
		String_t* L_2 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_3) < ((int32_t)2)))
		{
			G_B2_0 = L_0;
			goto IL_0031;
		}
	}
	{
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_4 = __this->get_passwordField_5();
		NullCheck(L_4);
		String_t* L_5 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0032:
	{
		NullCheck(G_B3_1);
		Selectable_set_interactable_mD5096017CC3058D280066EB9ABDDF5062983A94F(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void registration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void registration__ctor_m26F58166F5E101A1856BAE0420C05431E66FD0F3 (registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * __this, const RuntimeMethod* method)
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
// System.Void registration_<Register>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__4__ctor_mE9433C0C1B2DEF2DA0D299026AAC52123874C6BE (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void registration_<Register>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__4_System_IDisposable_Dispose_mF0BB59A8827BF047CF01F05C576452676373340E (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean registration_<Register>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegisterU3Ed__4_MoveNext_m00EE228CA98DEFF1EBAB6F6FD5208A846F54D83E (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterU3Ed__4_MoveNext_m00EE228CA98DEFF1EBAB6F6FD5208A846F54D83E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * V_1 = NULL;
	WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_4 = (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 *)il2cpp_codegen_object_new(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var);
		WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_5 = V_2;
		registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * L_6 = V_1;
		NullCheck(L_6);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_7 = L_6->get_nameField_4();
		NullCheck(L_7);
		String_t* L_8 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8(L_5, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, L_8, /*hidden argument*/NULL);
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_9 = V_2;
		registration_t03A4DF92528F7137BB649A28BC6A61A4ABB274E2 * L_10 = V_1;
		NullCheck(L_10);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_11 = L_10->get_passwordField_5();
		NullCheck(L_11);
		String_t* L_12 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8(L_9, _stringLiteral5BAA61E4C9B93F3F0682250B6CF8331B7EE68FD8, L_12, /*hidden argument*/NULL);
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_13 = V_2;
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_14 = (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 *)il2cpp_codegen_object_new(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664_il2cpp_TypeInfo_var);
		WWW__ctor_mCD26DA4AF4D023C128F1E031AC85A0557B98E6BF(L_14, _stringLiteral01647521805A3C7D0BBA2055DCE0946E04689D80, L_13, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_14);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_15 = __this->get_U3CwwwU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0076:
	{
		__this->set_U3CU3E1__state_0((-1));
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_16 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_16);
		String_t* L_17 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_16, /*hidden argument*/NULL);
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral42A8F651D79FD005EEAC0612DF6442B983A01184, /*hidden argument*/NULL);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00a6:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_19 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_19);
		String_t* L_20 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_19, /*hidden argument*/NULL);
		String_t* L_21 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral09FEF5D8D9A3C86B2523FEF60D512606E7FE0003, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_21, /*hidden argument*/NULL);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return (bool)0;
	}
}
// System.Object registration_<Register>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegisterU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5AE6A24B307BFE51F7A1CF46F80DD2E9BBB75EEF (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void registration_<Register>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__4_System_Collections_IEnumerator_Reset_mC089D7A8EC96A76625276189086C3A5161F6995C (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegisterU3Ed__4_System_Collections_IEnumerator_Reset_mC089D7A8EC96A76625276189086C3A5161F6995C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CRegisterU3Ed__4_System_Collections_IEnumerator_Reset_mC089D7A8EC96A76625276189086C3A5161F6995C_RuntimeMethod_var);
	}
}
// System.Object registration_<Register>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegisterU3Ed__4_System_Collections_IEnumerator_get_Current_mC64772CDB629099BF6C72876F9C19241AD5565B6 (U3CRegisterU3Ed__4_t9278CFD4DA65AA1974727DBB893DF7591648C7E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void server.Program::Main(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_Main_m49115DB7226F5FCC7C495B57CDC165AA269B0197 (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Program_Main_m49115DB7226F5FCC7C495B57CDC165AA269B0197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * V_0 = NULL;
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
		Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_0, 2, 1, 6, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273(_stringLiteral4B84B15BFF6EE5796152495A230E45E3D7E947D9, /*hidden argument*/NULL);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_2 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_2, L_1, ((int32_t)1234), /*hidden argument*/NULL);
		V_1 = L_2;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = V_0;
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_4 = V_1;
		NullCheck(L_3);
		Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30(L_3, L_4, /*hidden argument*/NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = V_0;
		NullCheck(L_5);
		Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540(L_5, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteral20B8B49A857CDE4AA6B7826F43D20AAC2588D158, /*hidden argument*/NULL);
	}

IL_0036:
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_6 = V_0;
		NullCheck(L_6);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_7 = Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(_stringLiteralB45FB5D465D9658ACE86D943547C3926F43AE19A, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_2 = L_8;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_9 = L_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = Socket_Receive_mD8D9A2358E66B15A2291E7DF76441E9D445C366C(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_12 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		String_t* L_15 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, L_14);
		V_4 = L_15;
		String_t* L_16 = V_4;
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral40831ABC962ADE18EDD4A869B5707059AF468B77, L_16, /*hidden argument*/NULL);
		Console_WriteLine_mA5F7E391799514350980A0DE16983383542CA820(L_17, /*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_18 = Encoding_get_Default_m625C78C2A9A8504B8BA4141994412513DC470CE2(/*hidden argument*/NULL);
		String_t* L_19 = V_4;
		String_t* L_20 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral161E59B56F8098AEB2B270171BB64C873FECBDFE, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_18, L_20);
		V_5 = L_21;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_5;
		NullCheck(L_9);
		Socket_Send_mA269050501DC895502B1DD4254789F335B55B328(L_9, L_22, /*hidden argument*/NULL);
		goto IL_0036;
	}
}
// System.Void server.Program::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program__ctor_mF032CDBE251E5E0EDA77CC15D09F2888C11C657E (Program_tDC44296BCF55585FFFAFC541FBCB4166E545527F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void shadow_colider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shadow_colider_Start_mFC791FC2201A6F43B9E23B75157D3EEFE5878B9F (shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void shadow_colider::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shadow_colider_OnTriggerEnter_mB61563E0B68897689250B93853DF3EA76055722A (shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadow_colider_OnTriggerEnter_mB61563E0B68897689250B93853DF3EA76055722A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_1, L_2, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = __this->get_van_4();
		NullCheck(L_3);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shadow_colider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shadow_colider_OnEnable_mEA4F51CDF34A98C2D8276B4C439469B9E1BA3B57 (shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadow_colider_OnEnable_mEA4F51CDF34A98C2D8276B4C439469B9E1BA3B57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_0);
		SpriteRenderer_set_color_m0729526C86891ADD11611CD13A7A18B851355580(L_0, L_1, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_2 = __this->get_van_4();
		NullCheck(L_2);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shadow_colider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shadow_colider_Update_mAB6CB68F4E3178CADF93D10D6C9CC46883AADD9E (shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void shadow_colider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shadow_colider__ctor_m370E5D685F8CE97C9BC294D29E1928A737E167C1 (shadow_colider_t7809C966605503E88F78DCE677E9783E0421C51C * __this, const RuntimeMethod* method)
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
// System.Void tree_grow_up::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tree_grow_up_Start_m6585183FA338E2D4284AE7F86D38ED01DECF1FBA (tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (tree_grow_up_Start_m6585183FA338E2D4284AE7F86D38ED01DECF1FBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_tree_5();
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		float L_3 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((15.0f), (20.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_6(L_3);
		goto IL_0071;
	}

IL_002e:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_tree_5();
		NullCheck(L_4);
		String_t* L_5 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteralDC4B536E048B21E77853BB2B2397506AAFA45D68, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		float L_7 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((18.0f), (25.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_6(L_7);
		goto IL_0071;
	}

IL_005c:
	{
		float L_8 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((30.0f), (40.0f), /*hidden argument*/NULL);
		__this->set_timeLeft_6(L_8);
	}

IL_0071:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_tree_5();
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_sprout_4();
		NullCheck(L_10);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_sprout_4();
		NullCheck(L_11);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_12 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_11, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_13 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = Renderer_get_sortingOrder_m33DD50ED293AA672FDAD862B4A4865666B5FEBAF(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81(L_12, L_14, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_tree_5();
		NullCheck(L_15);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_16 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12(L_15, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mBAC50AEEACC94DE12B47C6D6A5227051B1C6DE12_RuntimeMethod_var);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_17 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = Renderer_get_sortingOrder_m33DD50ED293AA672FDAD862B4A4865666B5FEBAF(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81(L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void tree_grow_up::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tree_grow_up_Update_mE4B6B2F5F643DA28D2C74BF6F66658152DF5CC60 (tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_sprout_4();
		NullCheck(L_0);
		bool L_1 = GameObject_get_active_m02FE30D766DA2B308BEDEABD70F4A5574D124C1A(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		float L_2 = __this->get_timeLeft_6();
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeLeft_6(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		float L_4 = __this->get_timeLeft_6();
		if ((!(((float)L_4) < ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_sprout_4();
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_tree_5();
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void tree_grow_up::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tree_grow_up__ctor_m1691E7A8D7CACEF6AC6686C011870E64A3D9DF9D (tree_grow_up_t8AA5D2F11BD588A3111A23374A9A1E2B6A6B9BD7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
