extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class Joint2D; template <> void RegisterUnityClass<Joint2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 83 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//2. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//3. Animation
	RegisterUnityClass<Animation>("Animation");
	//4. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//5. Animator
	RegisterUnityClass<Animator>("Animation");
	//6. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//7. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//8. Motion
	RegisterUnityClass<Motion>("Animation");
	//9. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//10. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//11. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//12. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//13. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//14. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//15. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//16. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//17. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//18. Camera
	RegisterUnityClass<Camera>("Core");
	//19. Component
	RegisterUnityClass<Unity::Component>("Core");
	//20. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//21. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//22. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//23. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//24. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//25. GameManager
	RegisterUnityClass<GameManager>("Core");
	//26. GameObject
	RegisterUnityClass<GameObject>("Core");
	//27. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//28. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//29. InputManager
	RegisterUnityClass<InputManager>("Core");
	//30. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//31. Light
	RegisterUnityClass<Light>("Core");
	//32. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//33. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//34. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//35. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//36. Material
	RegisterUnityClass<Material>("Core");
	//37. Mesh
	RegisterUnityClass<Mesh>("Core");
	//38. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//39. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//40. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//41. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//42. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//43. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//44. Object
	//Skipping Object
	//45. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//46. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//47. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//48. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//49. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//50. Renderer
	RegisterUnityClass<Renderer>("Core");
	//51. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//52. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//53. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//54. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//55. Shader
	RegisterUnityClass<Shader>("Core");
	//56. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//57. Sprite
	RegisterUnityClass<Sprite>("Core");
	//58. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//59. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//60. TagManager
	RegisterUnityClass<TagManager>("Core");
	//61. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//62. Texture
	RegisterUnityClass<Texture>("Core");
	//63. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//64. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//65. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//66. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//67. Transform
	RegisterUnityClass<Transform>("Core");
	//68. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//69. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//70. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//71. Collider
	RegisterUnityClass<Collider>("Physics");
	//72. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//73. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//74. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//75. Joint2D
	RegisterUnityClass<Joint2D>("Physics2D");
	//76. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//77. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//78. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//79. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//80. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//81. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//82. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");

}
