/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_FreeTexNode from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
struct SPLParticle;
struct SPLEmitter;
struct ColorNode;
struct RenderNode;
struct SPLManager;
struct SPLTexture;
struct ScaledVecSource;
struct InterpState;
struct RandomVecSource;
struct VramHeapNode;
struct SplEmitterCfg;
struct RigObject;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef float f32;
typedef volatile f32 vf32;
typedef int BOOL;
typedef u32 uptr;
typedef s32 sptr;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
typedef union MtxFx22 {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
typedef union MtxFx33 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;
typedef union MtxFx43 {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef union MtxFx44 {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef enum {
    SCFG_CPU_SPEED_1X = 0,
    SCFG_CPU_SPEED_2X = 1
} SCFGCpuSpeed;
typedef struct SPLNode {
    struct SPLNode *next;
    struct SPLNode *prev;
} SPLNode;
typedef struct SPLList {
    SPLNode *first;
    int count;
    SPLNode *last;
} SPLList;
struct RandomVecRange {
    s16 x;
    s16 y;
    s16 z;
    u16 interval;
};
struct RandomVecSource {
    char reserved0[0x26];
    u16 frame;
};
struct ScaledVecSource {
    int x;
    int y;
    int z;
    s16 scale;
};
struct RigOffsetPair {
    int reserved0[2];
    int originX;
    int originY;
    int originZ;
    int offsetX;
    int offsetY;
    int offsetZ;
};
struct AxisAngleKey {
    u16 angle;
    u16 axis;
};
struct InterpTargetParam {
    int target;
    s16 speed;
    u16 mode : 2;
    u16 rest : 14;
};
struct InterpState {
    char _00[0x74];
    int target;
};
struct InterpTrack {
    char reserved0[0xc];
    int step;
    char reserved1[8];
    int value;
    char reserved2[8];
    u16 hold;
    u16 state;
    char reserved3[0x14];
    int position;
};
struct LerpSource {
    fx32 x;
    fx32 y;
    fx32 z;
    short w;
};
struct LerpDest {
    fx32 reserved0;
    fx32 reserved1;
    fx32 x;
    fx32 y;
    fx32 z;
};
typedef u16 GXRgb;
typedef struct SPLBehavior {
    void (*applyFunc)(const void *, struct SPLParticle *, VecFx32 *, struct SPLEmitter *);
    const void *object;
} SPLBehavior;
enum SPLDrawType {
    SPL_DRAW_TYPE_BILLBOARD = 0,
    SPL_DRAW_TYPE_DIRECTIONAL_BILLBOARD,
    SPL_DRAW_TYPE_POLYGON,
    SPL_DRAW_TYPE_DIRECTIONAL_POLYGON,
    SPL_DRAW_TYPE_DIRECTIONAL_POLYGON_CENTER,
};
enum SPLCircleAxis {
    SPL_CIRCLE_AXIS_Z = 0,
    SPL_CIRCLE_AXIS_Y,
    SPL_CIRCLE_AXIS_X,
    SPL_CIRCLE_AXIS_EMITTER,
};
enum SPLEmissionType {
    SPL_EMISSION_TYPE_POINT = 0,
    SPL_EMISSION_TYPE_SPHERE_SURFACE,
    SPL_EMISSION_TYPE_CIRCLE_BORDER,
    SPL_EMISSION_TYPE_CIRCLE_BORDER_UNIFORM,
    SPL_EMISSION_TYPE_SPHERE,
    SPL_EMISSION_TYPE_CIRCLE,
    SPL_EMISSION_TYPE_CYLINDER_SURFACE,
    SPL_EMISSION_TYPE_CYLINDER,
    SPL_EMISSION_TYPE_HEMISPHERE_SURFACE,
    SPL_EMISSION_TYPE_HEMISPHERE,
};
enum SPLChildRotationType {
    SPL_CHILD_ROT_NONE = 0,
    SPL_CHILD_ROT_INHERIT_ANGLE,
    SPL_CHILD_ROT_INHERIT_ANGLE_AND_VELOCITY,
};
enum SPLScaleAnimDir {
    SPL_SCALE_ANIM_DIR_XY = 0,
    SPL_SCALE_ANIM_DIR_X,
    SPL_SCALE_ANIM_DIR_Y,
};
enum SPLPolygonRotAxis {
    SPL_POLYGON_ROT_AXIS_Y = 0,
    SPL_POLYGON_ROT_AXIS_XYZ,
};
typedef struct SPLFileHeader {
    u32 magic;
    u32 version;
    u16 resCount;
    u16 texCount;
    u32 reserved0;
    u32 resSize;
    u32 texSize;
    u32 texOffset;
    u32 reserved1;
} SPLFileHeader;
typedef union SPLResourceFlags {
    u32 all;
    struct {
        u32 emissionType : 4;
        u32 drawType : 2;
        u32 circleAxis : 2;
        u32 hasScaleAnim : 1;
        u32 hasColorAnim : 1;
        u32 hasAlphaAnim : 1;
        u32 hasTexAnim : 1;
        u32 hasRotation : 1;
        u32 randomInitAngle : 1;

        u32 selfMaintaining : 1;
        u32 followEmitter : 1;
        u32 hasChildResource : 1;
        u32 polygonRotAxis : 2;
        u32 polygonReferencePlane : 1;
        u32 randomizeLoopedAnim : 1;
        u32 drawChildrenFirst : 1;
        u32 hideParent : 1;
        u32 useViewSpace : 1;
        u32 hasGravityBehavior : 1;
        u32 hasRandomBehavior : 1;
        u32 hasMagnetBehavior : 1;
        u32 hasSpinBehavior : 1;
        u32 hasCollisionPlaneBehavior : 1;
        u32 hasConvergenceBehavior : 1;
        u32 hasFixedPolygonID : 1;
        u32 childHasFixedPolygonID : 1;
    };
} SPLResourceFlags;
typedef union SPLChildResourceFlags {
    u16 all;
    struct {
        u16 usesBehaviors : 1;
        u16 hasScaleAnim : 1;
        u16 hasAlphaAnim : 1;
        u16 rotationType : 2;
        u16 followEmitter : 1;
        u16 useChildColor : 1;
        u16 drawType : 2;
        u16 polygonRotAxis : 2;
        u16 polygonReferencePlane : 1;
        u16 : 4;
    };
} SPLChildResourceFlags;
typedef union SPLCurveInOut {
    u16 all;
    struct {
        u16 in : 8;
        u16 out : 8;
    };
} SPLCurveInOut;
typedef union SPLCurveInPeakOut {
    u32 all;
    struct {
        u32 in : 8;
        u32 peak : 8;
        u32 out : 8;
        u32 : 8;
    };
} SPLCurveInPeakOut;
typedef struct SPLResourceHeader {
    SPLResourceFlags flags;
    VecFx32 emitterBasePos;
    fx32 emissionCount;
    fx32 radius;
    fx32 length;
    VecFx16 axis;
    GXRgb color;
    fx32 initVelPosAmplifier;
    fx32 initVelAxisAmplifier;
    fx32 baseScale;
    fx16 aspectRatio;
    u16 startDelay;
    s16 minRotation;
    s16 maxRotation;
    u16 initAngle;
    u16 reserved;
    u16 emitterLifeTime;
    u16 particleLifeTime;

    struct {
        u32 baseScale : 8;
        u32 lifeTime : 8;
        u32 initVel : 8;
        u32 : 8;
    } randomAttenuation;

    struct {
        u32 emissionInterval : 8;
        u32 baseAlpha : 8;
        u32 airResistance : 8;
        u32 textureIndex : 8;
        u32 loopFrames : 8;
        u32 dbbScale : 16;
        u32 textureTileCountS : 2;
        u32 textureTileCountT : 2;
        u32 scaleAnimDir : 3;
        u32 dpolFaceEmitter : 1;
        u32 flipTextureS : 1;
        u32 flipTextureT : 1;
        u32 : 30;
    } misc;
    fx16 polygonX;
    fx16 polygonY;
    struct {
        u32 flags : 8;
        u32 : 24;
    } userData;
} SPLResourceHeader;
typedef struct SPLScaleAnim {
    fx16 start;
    fx16 mid;
    fx16 end;
    SPLCurveInOut curve;
    struct {
        u16 loop : 1;
        u16 : 15;
    } flags;
    u16 padding;
} SPLScaleAnim;
typedef struct SPLColorAnim {
    GXRgb start;
    GXRgb end;
    SPLCurveInPeakOut curve;
    struct {
        u16 randomStartColor : 1;
        u16 loop : 1;
        u16 interpolate : 1;
        u16 : 13;
    } flags;
    u16 padding;
} SPLColorAnim;
typedef struct SPLAlphaAnim {
    union {
        u16 all;
        struct {
            u16 start : 5;
            u16 mid : 5;
            u16 end : 5;
            u16 : 1;
        };
    } alpha;
    struct {
        u16 randomRange : 8;
        u16 loop : 1;
        u16 : 7;
    } flags;
    SPLCurveInOut curve;
    u16 padding;
} SPLAlphaAnim;
typedef struct SPLTexAnim {
    u8 textures[8];
    struct {
        u32 frameCount : 8;
        u32 step : 8;
        u32 randomizeInit : 1;
        u32 loop : 1;
        u32 : 14;
    } param;
} SPLTexAnim;
typedef struct SPLChildResource {
    SPLChildResourceFlags flags;
    fx16 randomInitVelMag;
    fx16 endScale;
    u16 lifeTime;
    u8 velocityRatio;
    u8 scaleRatio;
    GXRgb color;
    struct {
        u32 emissionCount : 8;
        u32 emissionDelay : 8;
        u32 emissionInterval : 8;
        u32 texture : 8;
        u32 textureTileCountS : 2;
        u32 textureTileCountT : 2;
        u32 flipTextureS : 1;
        u32 flipTextureT : 1;
        u32 dpolFaceEmitter : 1;
        u32 : 25;
    } misc;
} SPLChildResource;
typedef struct SPLResource {
    SPLResourceHeader *header;
    SPLScaleAnim *scaleAnim;
    SPLColorAnim *colorAnim;
    SPLAlphaAnim *alphaAnim;
    SPLTexAnim *texAnim;
    SPLChildResource *childResource;
    SPLBehavior *behaviors;
    u16 behaviorCount;
    u16 reserved;
} SPLResource;
typedef struct SPLParticle {
    struct SPLParticle *next;
    struct SPLParticle *prev;
    VecFx32 position;
    VecFx32 velocity;
    u16 rotation;
    s16 angularVelocity;
    u16 lifeTime;
    u16 age;

    u16 loopTimeFactor;
    u16 lifeTimeFactor;

    u8 texture;

    u8 lifeRateOffset;

    struct {
        u16 baseAlpha : 5;
        u16 animAlpha : 5;
        u16 currentPolygonID : 6;
    } visibility;
    fx32 baseScale;
    fx16 animScale;
    GXRgb color;
    VecFx32 emitterPos;
} SPLParticle;
typedef struct SPLParticleList {
    SPLParticle *first;
    int count;
    SPLParticle *last;
} SPLParticleList;
enum SPLUpdateCallbackType {
    SPL_CALLBACK_PRE_UPDATE  = 0,
    SPL_CALLBACK_POST_UPDATE = 1,
};
typedef void (*SPLEmitterUpdateCallback)(struct SPLEmitter *emitter, enum SPLUpdateCallbackType type);
typedef struct SPLEmitterState {
    union {
        u32 all;
        struct {
            u32 terminate : 1;
            u32 emissionPaused : 1;
            u32 paused : 1;
            u32 renderingDisabled : 1;
            u32 started : 1;
            u32 : 27;
        };
    };
} SPLEmitterState;
typedef struct SPLEmitter {
    struct SPLEmitter *next;
    struct SPLEmitter *prev;
    SPLParticleList particles;
    SPLParticleList childParticles;
    SPLResource *resource;
    SPLEmitterState state;
    VecFx32 position;
    VecFx32 velocity;
    VecFx32 particleInitVelocity;
    u16 age;
    fx16 emissionCountFractional;
    VecFx16 axis;
    u16 initAngle;
    fx32 emissionCount;
    fx32 radius;
    fx32 length;
    fx32 initVelPositionAmplifier;
    fx32 initVelAxisAmplifier;
    fx32 baseScale;
    u16 particleLifeTime;
    GXRgb color;
    fx32 collisionPlaneHeight;
    fx16 textureS;
    fx16 textureT;
    fx16 childTextureS;
    fx16 childTextureT;
    struct {
        u32 emissionInterval : 8;
        u32 baseAlpha : 8;
        u32 updateCycle : 3;
        u32 reserved : 13;
    } misc;
    VecFx16 crossAxis1;
    VecFx16 crossAxis2;
    SPLEmitterUpdateCallback updateCallback;

    void *userDataPtr;
    union {
        u32 u32;
        u16 u16[2];
        u8 u8[4];
    } userData;
} SPLEmitter;
typedef struct SPLEmitterList {
    SPLEmitter *first;
    int count;
    SPLEmitter *last;
} SPLEmitterList;
struct ParticleVisibility {
    u16 b0 : 5;
    u16 b5 : 5;
    u16 b10 : 6;
};
struct ParticleView {
    u8 reserved0[0x08];
    struct VecFx32 pos;
    struct VecFx32 vel;
    u16 rotation;
    s16 angularVelocity;
    u16 lifeTime;
    u16 age;
    u16 loopTimeFactor;
    u16 lifeTimeFactor;
    u8 texture;
    u8 lifeRateOffset;
    struct ParticleVisibility w;
    fx32 baseScale;
    u16 animScale;
    u16 color;
    struct VecFx32 emitterPos;
};
struct ParticleDescFlags {
    u16 b0 : 3;
    u16 sel : 2;
    u16 b5 : 1;
    u16 col : 1;
    u16 rest : 9;
};
struct ParticleDesc {
    struct ParticleDescFlags f;
    s16 velocity;
    u8 reserved0[2];
    u16 lifeTime;
    u8 scale;
    u8 scaleAdd;
    u16 color;
    u8 count;
    u8 reserved1[2];
    u8 texture;
};
struct EmitterParticle {
    u8 reserved0[0x08];
    struct VecFx32 pos;
    struct VecFx32 vel;
    u16 rotation;
    s16 angularVelocity;
    u16 lifeTime;
    u8 reserved1[0x08];
    struct ParticleVisibility w;
    fx32 baseScale;
    s16 animScale;
    u16 color;
    struct VecFx32 emitterPos;
};
struct ParticleDescOwner {
    u8 reserved0[0x14];
    struct ParticleDesc *desc;
};
struct EmitOwner {
    u8 reserved0[0x14];
    SPLList list;
    struct ParticleDescOwner *x;
};
struct SubHwFlags {
    u16 a : 7;
    u16 kind : 2;
    u16 sel2 : 2;
    u16 sel1 : 1;
    u16 b : 4;
};
struct SubSelFlags {
    u32 lo : 6;
    u32 sel : 1;
    u32 hi : 25;
};
struct SubZeroFlags {
    u32 lo : 16;
    u32 b16 : 1;
    u32 sel2 : 2;
    u32 sel1 : 1;
    u32 reserved0 : 1;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 flag : 1;
    u32 reserved1 : 8;
};
struct Sub28Flags {
    u32 lo : 8;
    u32 k : 16;
    u32 mid : 4;
    u32 sel : 3;
    u32 hi : 1;
};
struct SubDescBits {
    u32 lo : 4;
    u32 kind : 2;
    u32 mid : 5;
    u32 sel : 1;
    u32 hi : 20;
};
union SubFlags {
    struct SubZeroFlags z;
    struct SubDescBits d;
};
struct RigDescriptorHw {
    struct SubHwFlags hw;
    u8 reserved0[0x0d];
    u8 texture;
    struct SubSelFlags selFlags;
};
struct RigDescriptor {
    union SubFlags flags;
    u32 transX;
    u32 transY;
    u32 transZ;
    u8 reserved0[0x20];
    s16 scale;
    u8 reserved1[0x15];
    u8 texture;
    struct Sub28Flags flags28;
    u8 reserved2[0x04];
    s16 texS;
    s16 texT;
};
struct RigSubList {
    struct RigDescriptor *desc;
    u8 reserved0[0x10];
    struct RigDescriptorHw *hw;
};
struct RigRenderList {
    u8 reserved0[0x08];
    struct RenderNode *nodeList;
    u8 reserved1[0x08];
    struct RenderNode *nodeList2;
    u8 reserved2[0x08];
    struct RigSubList *subList;
    u8 reserved3[0x4e];
    u16 color;
    u8 reserved4[0x04];
    s16 texS;
    s16 texT;
    s16 texS2;
    s16 texT2;
};
struct RigObject {
    u8 reserved0[0x2c];
    struct SPLTexture *textures;
    u8 reserved1[0x02];
    u16 texCount;
    u8 reserved2[0x08];
    u32 polygonAttr;
    struct RigRenderList *renderList;
    MtxFx43 *mtx;
};
struct RenderNode {
    struct RenderNode *next;
    u8 reserved0[0x04];
    struct VecFx32 p1;
    struct VecFx32 p2;
    u16 rotation;
    u8 reserved1[0x0a];
    u8 texture;
    u8 reserved2;
    struct ParticleVisibility w;
    s32 baseScale;
    s16 animScale;
    u16 color;
    u32 emitterPosX;
    u32 emitterPosY;
    u32 emitterPosZ;
};
struct RigTransformFrame {
    struct VecFx32 t;
    MtxFx43 m;
};
typedef u32 GXPolygonAttrMisc;
typedef enum GXVRam {
    GX_VRAM_NONE = 0x0000,
    GX_VRAM_A    = 0x0001,
    GX_VRAM_B    = 0x0002,
    GX_VRAM_C    = 0x0004,
    GX_VRAM_D    = 0x0008,
    GX_VRAM_E    = 0x0010,
    GX_VRAM_F    = 0x0020,
    GX_VRAM_G    = 0x0040,
    GX_VRAM_H    = 0x0080,
    GX_VRAM_I    = 0x0100
} GXVRam;
typedef enum GXDispSelect {
    GX_DISP_SELECT_SUB_MAIN = 0,
    GX_DISP_SELECT_MAIN_SUB = 1
} GXDispSelect;
typedef enum GXBGColorMode {
    GX_BG_COLORMODE_16  = 0,
    GX_BG_COLORMODE_256 = 1
} GXBGColorMode;
typedef enum GXBGAreaOver {
    GX_BG_AREAOVER_REPEAT = 0,
    GX_BG_AREAOVER_XLU    = 1
} GXBGAreaOver;
typedef enum GXBGExtPltt {
    GX_BG_EXTPLTT_01 = 0,
    GX_BG_EXTPLTT_23 = 1
} GXBGExtPltt;
typedef enum GXBGCharBase {
    GX_BG_CHARBASE_0x00000 = 0,
    GX_BG_CHARBASE_0x04000,
    GX_BG_CHARBASE_0x08000,
    GX_BG_CHARBASE_0x0c000,
    GX_BG_CHARBASE_0x10000,
    GX_BG_CHARBASE_0x14000,
    GX_BG_CHARBASE_0x18000,
    GX_BG_CHARBASE_0x1c000,
    GX_BG_CHARBASE_0x20000,
    GX_BG_CHARBASE_0x24000,
    GX_BG_CHARBASE_0x28000,
    GX_BG_CHARBASE_0x2c000,
    GX_BG_CHARBASE_0x30000,
    GX_BG_CHARBASE_0x34000,
    GX_BG_CHARBASE_0x38000,
    GX_BG_CHARBASE_0x3c000
} GXBGCharBase;
typedef enum GXBGScrBase {
    GX_BG_SCRBASE_0x0000 = 0,
    GX_BG_SCRBASE_0x0800,
    GX_BG_SCRBASE_0x1000,
    GX_BG_SCRBASE_0x1800,
    GX_BG_SCRBASE_0x2000,
    GX_BG_SCRBASE_0x2800,
    GX_BG_SCRBASE_0x3000,
    GX_BG_SCRBASE_0x3800,
    GX_BG_SCRBASE_0x4000,
    GX_BG_SCRBASE_0x4800,
    GX_BG_SCRBASE_0x5000,
    GX_BG_SCRBASE_0x5800,
    GX_BG_SCRBASE_0x6000,
    GX_BG_SCRBASE_0x6800,
    GX_BG_SCRBASE_0x7000,
    GX_BG_SCRBASE_0x7800,
    GX_BG_SCRBASE_0x8000,
    GX_BG_SCRBASE_0x8800,
    GX_BG_SCRBASE_0x9000,
    GX_BG_SCRBASE_0x9800,
    GX_BG_SCRBASE_0xa000,
    GX_BG_SCRBASE_0xa800,
    GX_BG_SCRBASE_0xb000,
    GX_BG_SCRBASE_0xb800,
    GX_BG_SCRBASE_0xc000,
    GX_BG_SCRBASE_0xc800,
    GX_BG_SCRBASE_0xd000,
    GX_BG_SCRBASE_0xd800,
    GX_BG_SCRBASE_0xe000,
    GX_BG_SCRBASE_0xe800,
    GX_BG_SCRBASE_0xf000,
    GX_BG_SCRBASE_0xf800
} GXBGScrBase;
typedef enum GXBGScrSizeText {
    GX_BG_SCRSIZE_TEXT_256x256 = 0,
    GX_BG_SCRSIZE_TEXT_512x256,
    GX_BG_SCRSIZE_TEXT_256x512,
    GX_BG_SCRSIZE_TEXT_512x512
} GXBGScrSizeText;
typedef enum GXOBJVRamModeChar {
    GX_OBJVRAMMODE_CHAR_2D      = 0x00000000,
    GX_OBJVRAMMODE_CHAR_1D_32K  = 0x00000010,
    GX_OBJVRAMMODE_CHAR_1D_64K  = 0x00100010,
    GX_OBJVRAMMODE_CHAR_1D_128K = 0x00200010,
    GX_OBJVRAMMODE_CHAR_1D_256K = 0x00300010
} GXOBJVRamModeChar;
typedef enum GXPolygonMode {
    GX_POLYGONMODE_MODULATE = 0,
    GX_POLYGONMODE_DECAL    = 1,
    GX_POLYGONMODE_TOON     = 2,
    GX_POLYGONMODE_SHADOW   = 3
} GXPolygonMode;
typedef enum GXCull {
    GX_CULL_ALL   = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK  = 2,
    GX_CULL_NONE  = 3
} GXCull;
typedef enum GXShading {
    GX_SHADING_TOON      = 0,
    GX_SHADING_HIGHLIGHT = 1
} GXShading;
typedef enum GXFogBlend {
    GX_FOGBLEND_COLOR_ALPHA = 0,
    GX_FOGBLEND_ALPHA       = 1
} GXFogBlend;
typedef enum GXFogSlope {
    GX_FOGSLOPE_0x0400 = 0,
    GX_FOGSLOPE_0x0200,
    GX_FOGSLOPE_0x0100,
    GX_FOGSLOPE_0x0080,
    GX_FOGSLOPE_0x0040,
    GX_FOGSLOPE_0x0020,
    GX_FOGSLOPE_0x0010,
    GX_FOGSLOPE_0x0008,
    GX_FOGSLOPE_0x0004,
    GX_FOGSLOPE_0x0002,
    GX_FOGSLOPE_0x0001
} GXFogSlope;
typedef enum GXTexFmt {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum GXTexSizeS {
    GX_TEXSIZE_S8 = 0,
    GX_TEXSIZE_S16,
    GX_TEXSIZE_S32,
    GX_TEXSIZE_S64,
    GX_TEXSIZE_S128,
    GX_TEXSIZE_S256,
    GX_TEXSIZE_S512,
    GX_TEXSIZE_S1024
} GXTexSizeS;
typedef enum GXTexSizeT {
    GX_TEXSIZE_T8 = 0,
    GX_TEXSIZE_T16,
    GX_TEXSIZE_T32,
    GX_TEXSIZE_T64,
    GX_TEXSIZE_T128,
    GX_TEXSIZE_T256,
    GX_TEXSIZE_T512,
    GX_TEXSIZE_T1024
} GXTexSizeT;
typedef enum GXTexRepeat {
    GX_TEXREPEAT_NONE = 0,
    GX_TEXREPEAT_S    = 1,
    GX_TEXREPEAT_T    = 2,
    GX_TEXREPEAT_ST   = 3
} GXTexRepeat;
typedef enum GXTexFlip {
    GX_TEXFLIP_NONE = 0,
    GX_TEXFLIP_S    = 1,
    GX_TEXFLIP_T    = 2,
    GX_TEXFLIP_ST   = 3
} GXTexFlip;
typedef enum GXTexGen {
    GX_TEXGEN_NONE     = 0,
    GX_TEXGEN_TEXCOORD = 1,
    GX_TEXGEN_NORMAL   = 2,
    GX_TEXGEN_VERTEX   = 3
} GXTexGen;
typedef enum GXTexPlttColor0 {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef union GXOamAttr {
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 attr3;
    };
    struct {
        u32 attr01;
        u32 attr23;
    };
    struct {
        u32 y : 8;
        u32 rsMode : 2;
        u32 objMode : 2;
        u32 mosaic : 1;
        u32 colorMode : 1;
        u32 shape : 2;
        u32 x : 9;
        u32 rsParam : 5;
        u32 size : 2;
        u32 charNo : 10;
        u32 priority : 2;
        u32 cParam : 4;
        u32 _3 : 16;
    };
    struct {
        u32 _0 : 28;
        u32 flipH : 1;
        u32 flipV : 1;
        u32 _1 : 2;
        u32 _2 : 2;
        u32 _4 : 16;
    };
} GXOamAttr;
typedef struct GX_VRAMCnt_ {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clrImg;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 sub_bg;
    u16 sub_obj;
    u16 sub_bgExtPltt;
    u16 sub_objExtPltt;
} GX_VRAMCnt_;
typedef struct GX_State {
    GX_VRAMCnt_ vramCnt;
} GX_State;
typedef union SPLTextureParam {
    u32 all;
    struct {
        u32 format : 4;
        u32 s : 4;
        u32 t : 4;
        u32 repeat : 2;
        u32 flip : 2;
        u32 palColor0 : 1;
        u32 useSharedTexture : 1;
        u32 sharedTexID : 8;
        u32 : 6;
    };
} SPLTextureParam;
typedef struct SPLTextureResource {
    u32 id;
    SPLTextureParam param;
    u32 textureSize;
    u32 paletteOffset;
    u32 paletteSize;
    u32 unused0;
    u32 unused1;
    u32 resourceSize;
} SPLTextureResource;
typedef struct SPLTexture {
    const void *resource;
    u32 texAddr;
    u32 palAddr;
    SPLTextureParam param;
    u16 width;
    u16 height;
} SPLTexture;
typedef void *(*SPLAllocFunc)(u32);
enum SPLDrawOrder {
    SPL_DRAW_ORDER_REVERSE = 0,
    SPL_DRAW_ORDER_NORMAL  = 1,
};
typedef struct SPLManager {
    SPLAllocFunc alloc;
    SPLEmitterList activeEmitters;
    SPLEmitterList inactiveEmitters;
    SPLParticleList inactiveParticles;
    SPLResource *resources;
    SPLTexture *textures;
    u16 resCount;
    u16 texCount;
    u16 maxEmitters;
    u16 maxParticles;
    struct {
        u32 min : 6;
        u32 max : 6;
        u32 current : 6;
        u32 fix : 6;
        u32 drawOrder : 1;
        u32 unused : 7;
    } polygonID;
    GXPolygonAttrMisc miscPolygonAttr;
    struct {
        SPLEmitter *emitter;
        const MtxFx43 *viewMatrix;
    } renderState;
    u16 currentCycle;
    u16 reserved;
} SPLManager;
struct RigTransformFrameA68 {
    MtxFx43 m1;
    MtxFx43 m2;
    MtxFx43 m3;
};
struct RigTransformFrameMain {
    MtxFx43 m1;
    MtxFx43 m2;
    MtxFx43 m3;
    struct VecFx32 dir;
    struct VecFx32 right;
    struct VecFx32 up;
    struct VecFx32 upRef;
    MtxFx43 m4;
};
typedef enum {
    GX_MTXMODE_PROJECTION      = 0,
    GX_MTXMODE_POSITION        = 1,
    GX_MTXMODE_POSITION_VECTOR = 2,
    GX_MTXMODE_TEXTURE         = 3
} GXMtxMode;
struct VramResourceHeader {
    u32 flags;
    s32 emitterBasePosX;
    s32 emitterBasePosY;
    s32 emitterBasePosZ;
    s32 emissionCount;
    s32 radius;
    s32 length;
    u16 axisX;
    u16 axisY;
    u16 axisZ;
    u16 color;
    s32 initVelPosAmplifier;
    s32 initVelAxisAmplifier;
    s32 baseScale;
    s32 aspectAndDelay;
    s32 rotationRange;
    u16 initAngle;
    u16 reserved0;
    u16 emitterLifeTime;
    u16 particleLifeTime;
    s32 randomAttenuation;
    u8 miscByte0;
    u8 miscByte1;
    u8 miscByte2;
    u8 miscByte3;
    u32 polygonFlags;
    u32 userData;
};
struct VramSub14 {
    s32 reserved0;
    s32 reserved1;
    s32 reserved2;
    s32 reserved3;
    u32 mode;
};
struct SplEmitterCfg {
    struct VramResourceHeader *resource;
    s32 reserved0;
    s32 reserved1;
    s32 reserved2;
    s32 reserved3;
    struct VramSub14 *sub14;
};
struct ResourceSetup {
    s32 next;
    s32 prev;
    s32 particlesFirst;
    s32 particlesCount;
    s32 particlesLast;
    s32 childParticlesFirst;
    s32 childParticlesCount;
    s32 childParticlesLast;
    struct SplEmitterCfg *resource;
    s32 state;
    s32 posX;
    s32 posY;
    s32 posZ;
    s32 velX;
    s32 velY;
    s32 velZ;
    s32 initVelX;
    s32 initVelY;
    s32 initVelZ;
    u16 age;
    u16 emissionCountFractional;
    u16 axisX;
    u16 axisY;
    u16 axisZ;
    u16 initAngle;
    s32 emissionCount;
    s32 radius;
    s32 length;
    s32 initVelPosAmplifier;
    s32 initVelAxisAmplifier;
    s32 baseScale;
    u16 particleLifeTime;
    u16 color;
    u32 collisionPlaneHeight;
    s16 textureS;
    s16 textureT;
    s16 childTextureS;
    s16 childTextureT;
    u32 misc;
    s32 reserved0;
    s32 reserved1;
    s32 reserved2;
    s32 updateCallback;
    s32 userDataPtr;
    s32 userData;
};
typedef struct FieldFunc {
    void (*func)(SPLParticle *, SPLResource *, int);
    BOOL loop;
} AnimFunc;
typedef void (*Fn)(struct RigObject *, struct RenderNode *);
typedef void (*Fn1)(SPLTexture *);
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
typedef struct SPLParticle SPLParticle;
typedef struct SPLResource SPLResource;
typedef struct SPLEmitter SPLEmitter;
typedef struct SPLParticleList SPLParticleList;
typedef struct SPLManager SPLManager;
typedef struct SPLTexture SPLTexture;
typedef void *(*AllocFn)(u32 size);
struct VramNodeHeap {
    AllocFn alloc;
    u32 reserved0;
    int effectCount;
    u32 reserved2;
    u32 nodeListFirst;
    u32 nodeListCount;
    u32 nodeListLast;
    u32 rowListFirst;
    u32 rowListCount;
    u32 rowListLast;
    u32 reserved3;
    u32 reserved4;
    u16 reserved5;
    u16 reserved6;
    u16 nodeCount;
    u16 rowCount;
    u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 b24 : 1;
    u32 b25 : 7;
    u32 reserved7;
    u32 reserved8;
    u32 reserved9;
    u16 reserved10;
    u16 reserved11;
};
struct SPLList;
struct SPLNode;
struct RandomVecRange;
struct RandomVecSource;
struct ScaledVecSource;
struct RigOffsetPair;
struct AxisAngleKey;
struct InterpTargetParam;
struct InterpTrack;
struct InterpState;
struct LerpSource;
struct LerpDest;
struct SPLParticle;
struct SPLResource;
struct SPLEmitter;
struct SPLParticleList;
struct RigObject;
struct RenderNode;
struct SPLManager;
struct SPLTexture;
struct ResourceSetup;
struct SplEmitterCfg;
struct VramNodeHeap;
struct VramTexHeap;
struct VramHeapHeader;
struct VramFreeList;
struct VramHeapHead;
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
typedef struct SPLParticle SPLParticle;
typedef struct SPLResource SPLResource;
typedef struct SPLEmitter SPLEmitter;
typedef struct SPLParticleList SPLParticleList;
typedef struct SPLManager SPLManager;
typedef struct SPLTexture SPLTexture;
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *SPLList_PopFront(SPLList *list);
extern SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
extern void SPL_EMITTER_AddVec(struct RandomVecRange *o, void *s, int *dst);
extern void SPL_EMITTER_UpdateNode(struct RandomVecRange *o, struct RandomVecSource *s, int *dst);
extern void SPL_EMITTER_AddScaledVec(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c);
extern void SPL_EMITTER_BuildFrame(struct AxisAngleKey *o, u8 *dst);
extern void SPL_EMITTER_InterpTarget(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c);
extern void SPL_EMITTER_LerpVec(struct LerpSource *a, struct LerpDest *b);
extern void SPLAnim_Scale(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_Color(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_Alpha(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_Texture(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_ChildScale(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_ChildAlpha(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLEmitter_ComputeOrthogonalAxes(SPLEmitter *emtr);
extern void SPLUtil_TiltCoordinates(VecFx32 *out, const VecFx32 *src, const SPLEmitter *emtr);
extern void SPLEmitter_EmitParticles(SPLEmitter *emtr, SPLParticleList *list);
extern void SPLEmitter_EmitChildren(SPLParticle *ptcl, SPLEmitter *emtr, SPLParticleList *list);
extern void SPLUtil_DrawXYPlane(s32 s, s32 t, s32 x, s32 y);
extern void SPLUtil_DrawXZPlane(s32 s, s32 t, s32 x, s32 z);
extern void SPL_EMITTER_CalcRotMtx(s32 sn, s32 cs, MtxFx43 *m);
extern void SPL_EMITTER_SetRotMtx(s32 sn, s32 cs, MtxFx43 *m);
extern void SPL_EMITTER_UpdateFrame(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameEx(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateParticleMotion(SPLManager *mgr, SPLParticle *ptcl);
extern void SPL_EMITTER_UpdateParticleMotionEx(SPLManager *mgr, SPLParticle *ptcl);
extern void SPL_EMITTER_UpdateFrameA68(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameA68Ex(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameMain(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameMainEx(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_SetTextureParam(SPLTexture *tex);
extern void SPL_EMITTER_Noop(SPLTexture *tex);
extern void SPL_EMITTER_SetupResource(volatile struct ResourceSetup *o, struct SplEmitterCfg *cfg, const VecFx32 *pos);
extern void func_02098d44(SPLManager *mgr, SPLEmitter *emtr);
extern void SPL_EMITTER_UpdateSubB(struct RigObject *o);
extern void SPL_EMITTER_UpdateSubX(struct RigObject *o);
extern void SPL_EMITTER_UpdateSubC(struct RigObject *o);
extern int SPL_EMITTER_AllocTexVram(u32 szByte, u32 is4x4comp);
extern int SPL_EMITTER_AllocPlttVram(u32 szByte, u32 is4pltt);
extern struct VramNodeHeap *SPL_EMITTER_AllocNodeFromHeap(AllocFn alloc, u16 n1, u16 n2, u16 limitA, u16 limitB,
                                                          u16 maxResIndex);
extern void SPL_EMITTER_FreeNodeToHeap(struct VramTexHeap *h, struct VramHeapHeader *d);
extern void SPL_EMITTER_AllocTexVramDefault(struct RigObject *rigObject);
extern void SPL_EMITTER_AllocPlttVramDefault(struct RigObject *rigObject);
extern void func_0209829c(struct VramFreeList *h);
extern void SPL_EMITTER_FreeNodeHeap(struct VramHeapHead *h, u32 a);
extern struct SPLEmitter *SPL_EMITTER_AllocResource(char *p, int b, const VecFx32 *c);
extern struct SPLEmitter *SPL_EMITTER_AllocResourceEx(char *p, int b, void (*fn)(void *));
extern void SPL_EMITTER_FreeResource(char *p, char *q);
extern void SPL_EMITTER_FreeResourceList(void *p);
struct VramNodeBlob9C {
    u8 b[0x9c];
};
struct VramRowBlob44 {
    u8 b[0x44];
};
struct VramNodeFlags {
    u32 lo : 8;
    u32 sub0 : 1;
    u32 sub1 : 1;
    u32 sub2 : 1;
    u32 sub3 : 1;
    u32 b12 : 4;
    u32 sub4 : 1;
    u32 b17 : 7;
    u32 anim0 : 1;
    u32 anim1 : 1;
    u32 anim2 : 1;
    u32 anim3 : 1;
    u32 anim4 : 1;
    u32 anim5 : 1;
    u32 b30 : 2;
};
struct VramAnim {
    union {
        void (*addVec)(struct RandomVecRange *o, void *s, int *dst);
        void (*updateNode)(struct RandomVecRange *o, struct RandomVecSource *s, int *dst);
        void (*addScaledVec)(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c);
        void (*buildFrame)(struct AxisAngleKey *o, u8 *dst);
        void (*interpTarget)(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c);
        void (*lerpVec)(struct LerpSource *a, struct LerpDest *b);
    } fn;
    void *data;
};
struct VramHeapRecord {
    struct VramNodeFlags *data;
    void *sub0;
    void *sub1;
    void *sub2;
    void *sub3;
    void *sub4;
    struct VramAnim *anims;
    u16 nanims;
    u16 reserved0;
};
struct VramResource {
    u32 id;
    u32 kind : 4;
    u32 w : 4;
    u32 h : 4;
    u32 hi : 20;
    u32 textureSize;
    u32 paletteOffset;
    u32 paletteSize;
    u32 unused0;
    u32 unused1;
    u32 size;
};
struct VramResourceRow {
    struct VramResource *res;
    u32 tex_vram;
    u32 pltt_vram;
    u32 param;
    u16 w;
    u16 h;
};
struct VramHeapHeader {
    u32 flags;
    u32 size;
    u16 nrec;
    u16 nrow;
};
struct VramTexHeap {
    AllocFn alloc;
    u32 reserved0[9];
    struct VramHeapRecord *records;
    struct VramResourceRow *rows;
    u16 recordCount;
    u16 rowCount;
};
typedef u32 (*AllocTex)(u32, u32);
struct VramAllocClass {
    u32 c00_lo : 14;
    u32 retire : 1;
    u32 c00_hi : 17;
    u32 reserved0[11];
    u16 reserved1;
    u16 lifeTime;
    u32 reserved2[2];
    u16 lifeCap;
    u16 reserved3;
};
struct VramFreeNode {
    struct VramFreeNode *next;
    struct VramFreeNode *prev;
    u32 reserved0;
    u32 pending0;
    u32 reserved4[2];
    u32 pending1;
    u32 reserved1;
    struct VramAllocClass **allocClass;
    u32 kill : 1;
    u32 reserved2 : 1;
    u32 suppressed : 1;
    u32 hidden : 1;
    u32 expired : 1;
    u32 reserved3 : 27;
    u16 reserved5[18];
    u16 age;
    u16 reserved6;
    u32 reserved7[12];
    unsigned int phaseFlags;
};
struct VramFreeList {
    u32 flags;
    struct VramFreeNode *list;
    u32 reserved0;
    u32 reserved1;
    u32 freeList;
    u32 reserved2[13];
    u16 parity;
};
struct VramHeapNode {
    struct VramHeapNode *next;
    struct VramHeapNode *prev;
    u32 reserved2[7];
    u32 kill : 1;
    u32 reserved0 : 1;
    u32 suppressed : 1;
    u32 hidden : 1;
    u32 reserved1 : 28;
};
struct VramHeapHead {
    u32 flags;
    struct VramHeapNode *list;
    u32 reserved0;
    struct VramHeapNode *rlist;
    u32 reserved4[10];
    u32 reserved2 : 24;
    u32 reverse : 1;
    u32 reserved3 : 7;
    u32 reserved1;
    struct VramHeapNode *cur;
    u32 userData;
};
struct AllocScratch {
    u32 a;
    u32 b;
    u32 c;
};
extern void MTX_Identity33_(MtxFx33 *pDst);
extern void MTX_Copy33To44_(const MtxFx33 *pSrc, MtxFx44 *pDst);
extern void MTX_Scale33_(MtxFx33 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_ScaleApply33(const MtxFx33 *pSrc, MtxFx33 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_RotX33_(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal);
extern void MTX_RotY33_(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal);
extern void MTX_RotZ33_(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal);
extern void MTX_RotAxis33(MtxFx33 *pDst, const VecFx32 *vec, fx32 sinVal, fx32 cosVal);
extern int MTX_Inverse33(const MtxFx33 *pSrc, MtxFx33 *pDst);
extern void MTX_Concat33(const MtxFx33 *a, const MtxFx33 *b, MtxFx33 *ab);
extern void MTX_MultVec33(const VecFx32 *vec, const MtxFx33 *m, VecFx32 *dst);
extern void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Fx16Add(const VecFx16 *a, const VecFx16 *b, VecFx16 *ab);
extern fx32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern fx32 VEC_Fx16DotProduct(const VecFx16 *a, const VecFx16 *b);
extern void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
extern void VEC_Fx16CrossProduct(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb);
extern fx32 VEC_Mag(const VecFx32 *pSrc);
extern fx32 VEC_Fx16Mag(const VecFx16 *pSrc);
extern void VEC_Normalize(const VecFx32 *pSrc, VecFx32 *pDst);
extern void VEC_Fx16Normalize(const VecFx16 *pSrc, VecFx16 *pDst);
extern void VEC_MultAdd(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *pDest);
extern fx32 VEC_Distance(const VecFx32 *v1, const VecFx32 *v2);
extern void SPLRandom_VecFx32_XY(volatile VecFx32 *v);
extern void SPLRandom_VecFx32(volatile VecFx32 *v);
extern void G3_LoadMtx44(const void *m);
extern void G3_LoadMtx43(const void *m);
extern void G3_MultMtx44(const void *m);
extern void G3_MultMtx43(const void *m);
extern void G3_MultMtx33(const void *m);
extern void G3_MultTransMtx33(const MtxFx33 *mtx, const VecFx32 *trans);
extern void MIi_CpuClear16(u16 data, void *destp, u32 size);
extern void MIi_CpuCopy16(const void *srcp, void *destp, u32 size);
extern void MIi_CpuClear32(u32 data, void *destp, u32 size);
extern void MIi_CpuCopy32(const void *srcp, void *destp, u32 size);
extern void MIi_CpuSend32(const void *srcp, volatile void *destp, u32 size);
extern void MIi_CpuClearFast(u32 data, void *destp, u32 size);
extern void MIi_CpuCopyFast(const void *srcp, void *destp, u32 size);
extern void MI_Copy32B(const void *pSrc, void *pDest);
extern void MI_Copy36B(const void *pSrc, void *pDest);
extern void MI_Copy48B(const void *pSrc, void *pDest);
extern void MI_Copy64B(void *pSrc, void *pDest);
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuFill(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern int MI_CpuComp8(const void *mem1, const void *mem2, u32 size);
extern void MI_CpuCopy(const void *src, void *dest, u32 size);
extern void MI_CpuMove(const void *srcp, void *dstp, u32 size);
extern void MI_Zero36B(void *dst);
union MtxFx43;
extern void MTX_Identity43_(MtxFx43 *pDst);
extern void MTX_Copy43To44_(const MtxFx43 *pSrc, MtxFx44 *pDst);
extern void MTX_Scale43_(MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_ScaleApply43(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
extern void MTX_RotY43_(union MtxFx43 *m, fx32 sinVal, fx32 cosVal);
extern void MTX_RotAxis43(void *m, void *v, fx32 sinVal, fx32 cosVal);
extern int MTX_Inverse43(const MtxFx43 *pSrc, MtxFx43 *pDst);
extern void MTX_Concat43(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab);
extern void MTX_MultVec43(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst);
extern void MTX_LookAt(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx);
extern void GX_BeginLoadTex(void);
extern void GX_LoadTex(void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GX_EndLoadTex(void);
extern void GX_BeginLoadTexPltt(void);
extern void GX_LoadTexPltt(void *pSrc, u32 destSlotAddr, u32 szByte);
extern void GX_EndLoadTexPltt(void);
extern void GX_BeginLoadClearImage(void);
extern void GX_LoadClearImageColor(void *pSrc, u32 szByte);
extern void GX_LoadClearImageDepth(void *pSrc, u32 szByte);
extern void GX_EndLoadClearImage(void);
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *SPLList_PopFront(SPLList *list);
extern SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
extern void SPL_EMITTER_AddVec(struct RandomVecRange *o, void *s, int *dst);
extern void SPL_EMITTER_UpdateNode(struct RandomVecRange *o, struct RandomVecSource *s, int *dst);
extern void SPL_EMITTER_AddScaledVec(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c);
extern void SPL_EMITTER_BuildFrame(struct AxisAngleKey *o, u8 *dst);
extern void SPL_EMITTER_InterpTarget(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c);
extern void SPL_EMITTER_LerpVec(struct LerpSource *a, struct LerpDest *b);
extern void SPLAnim_Scale(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_Color(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_Alpha(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_Texture(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_ChildScale(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLAnim_ChildAlpha(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern void SPLEmitter_ComputeOrthogonalAxes(SPLEmitter *emtr);
extern void SPLUtil_TiltCoordinates(VecFx32 *out, const VecFx32 *src, const SPLEmitter *emtr);
extern void SPLEmitter_EmitParticles(SPLEmitter *emtr, SPLParticleList *list);
extern void SPLEmitter_EmitChildren(SPLParticle *ptcl, SPLEmitter *emtr, SPLParticleList *list);
extern void SPLUtil_DrawXYPlane(s32 s, s32 t, s32 x, s32 y);
extern void SPLUtil_DrawXZPlane(s32 s, s32 t, s32 x, s32 z);
extern void SPL_EMITTER_CalcRotMtx(s32 sn, s32 cs, MtxFx43 *m);
extern void SPL_EMITTER_SetRotMtx(s32 sn, s32 cs, MtxFx43 *m);
extern void SPL_EMITTER_UpdateFrame(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameEx(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateParticleMotion(SPLManager *mgr, SPLParticle *ptcl);
extern void SPL_EMITTER_UpdateParticleMotionEx(SPLManager *mgr, SPLParticle *ptcl);
extern void SPL_EMITTER_UpdateFrameA68(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameA68Ex(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameMain(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_UpdateFrameMainEx(struct RigObject *obj, struct RenderNode *s);
extern void SPL_EMITTER_SetTextureParam(SPLTexture *tex);
extern void SPL_EMITTER_Noop(SPLTexture *tex);
extern void SPL_EMITTER_SetupResource(volatile struct ResourceSetup *o, struct SplEmitterCfg *cfg, const VecFx32 *pos);
extern void func_02098d44(SPLManager *mgr, SPLEmitter *emtr);
extern void SPL_EMITTER_UpdateSubB(struct RigObject *o);
extern void SPL_EMITTER_UpdateSubX(struct RigObject *o);
extern void SPL_EMITTER_UpdateSubC(struct RigObject *o);
extern int SPL_EMITTER_AllocTexVram(u32 szByte, u32 is4x4comp);
extern int SPL_EMITTER_AllocPlttVram(u32 szByte, u32 is4pltt);
extern struct VramNodeHeap *SPL_EMITTER_AllocNodeFromHeap(AllocFn alloc, u16 n1, u16 n2, u16 limitA, u16 limitB,
                                                          u16 maxResIndex);
extern void SPL_EMITTER_FreeNodeToHeap(struct VramTexHeap *h, struct VramHeapHeader *d);
extern int SPL_EMITTER_AllocTexVramList(struct RigObject *o, AllocTex alloc);
extern int SPL_EMITTER_AllocPlttVramList(struct RigObject *o, AllocTex alloc);
extern void SPL_EMITTER_AllocTexVramDefault(struct RigObject *rigObject);
extern void SPL_EMITTER_AllocPlttVramDefault(struct RigObject *rigObject);
extern void func_0209829c(struct VramFreeList *h);
extern void SPL_EMITTER_FreeNodeHeap(struct VramHeapHead *h, u32 a);
extern struct SPLEmitter *SPL_EMITTER_AllocResource(char *p, int b, const VecFx32 *c);
extern struct SPLEmitter *SPL_EMITTER_AllocResourceEx(char *p, int b, void (*fn)(void *));
extern void SPL_EMITTER_FreeResource(char *p, char *q);
extern void SPL_EMITTER_FreeResourceList(void *p);
extern const VecFx16 g_020A7FEC;
extern const fx16 FX_SinCosTable_[];
extern u32 g_02146A8C;
extern const s16 func_02055FD4_Verts[];
extern const s16 func_02055B80_Verts[];
extern const s16 func_02054A68_Verts[];
extern const s16 func_02054718_Verts[];
extern const s16 func_0205429C_Verts[];
extern const s16 func_02053E1C_Verts[];
void func_0209def8(SPLList *list, SPLNode *node);
SPLNode *SPLList_PopFront(SPLList *list);
SPLNode *func_0209de2c(SPLList *list, SPLNode *node);
void SPL_EMITTER_AddVec(struct RandomVecRange *o, void *s, int *dst);
extern u32 g_02146A8C;
void SPL_EMITTER_UpdateNode(struct RandomVecRange *o, struct RandomVecSource *s, int *dst);
void SPL_EMITTER_AddScaledVec(struct ScaledVecSource *a, struct RigOffsetPair *b, volatile int *c);
void SPL_EMITTER_BuildFrame(struct AxisAngleKey *o, u8 *dst);
void SPL_EMITTER_InterpTarget(struct InterpTargetParam *a, struct InterpTrack *s, int unused, struct InterpState *c);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void SPL_EMITTER_LerpVec(struct LerpSource *a, struct LerpDest *b);
void SPLAnim_Scale(SPLParticle *ptcl, SPLResource *res, int lifeRate);
static inline void ColLerp(SPLParticle *out, s32 from, s32 to, u32 on, s32 num, s32 den) {
    s32 tr = to & 0x1f;
    s32 fr = from & 0x1f;
    s32 tg = (to >> 5) & 0x1f;
    s32 fg = (from >> 5) & 0x1f;
    s32 fb = (from >> 10) & 0x1f;
    s32 tb = (to >> 10) & 0x1f;
    if (!on) {
        out->color = (((tr) << 0) | ((tg) << 5) | ((tb) << 10));
        return;
    }
    out->color =
        (((fr + num * (tr - fr) / den) << 0) | ((fg + num * (tg - fg) / den) << 5) | ((fb + num * (tb - fb) / den) << 10));
}
static inline void ColLerp2(SPLParticle *out, s32 to, s32 from, u32 on, s32 num, s32 den) {
    s32 fr = from & 0x1f;
    s32 tr = to & 0x1f;
    s32 fg = (from >> 5) & 0x1f;
    s32 tg = (to >> 5) & 0x1f;
    s32 fb = (from >> 10) & 0x1f;
    s32 tb = (to >> 10) & 0x1f;
    if (!on) {
        out->color = (((tr) << 0) | ((tg) << 5) | ((tb) << 10));
        return;
    }
    out->color =
        (((fr + num * (tr - fr) / den) << 0) | ((fg + num * (tg - fg) / den) << 5) | ((fb + num * (tb - fb) / den) << 10));
}
void SPLAnim_Color(SPLParticle *ptcl, SPLResource *res, int lifeRate);
extern u32 g_02146A8C;
void SPLAnim_Alpha(SPLParticle *ptcl, SPLResource *res, int lifeRate);
void SPLAnim_Texture(SPLParticle *ptcl, SPLResource *res, int lifeRate);
void SPLAnim_ChildScale(SPLParticle *ptcl, SPLResource *res, int lifeRate);
void SPLAnim_ChildAlpha(SPLParticle *ptcl, SPLResource *res, int lifeRate);
void SPLEmitter_ComputeOrthogonalAxes(SPLEmitter *emtr);
void SPLUtil_TiltCoordinates(VecFx32 *out, const VecFx32 *src, const SPLEmitter *emtr);
static inline fx16 FX_SinIdx(int idx) {
    return FX_SinCosTable_[((idx >> 4) << 1)];
}
static inline fx16 FX_CosIdx(int idx) {
    return FX_SinCosTable_[((idx >> 4) << 1) + 1];
}
static inline u32 SPLRandom_Next() {
    g_02146A8C = g_02146A8C * 0x5eedf715 + 0x1b0cb173;
    return g_02146A8C;
}
static inline u32 SPLRandom_U32(u32 bits) {
    return SPLRandom_Next() >> (sizeof(u32) * 8 - bits);
}
static inline s32 SPLRandom_S32(u32 bits) {
    return (s32) (SPLRandom_Next() >> (sizeof(u32) * 8 - bits));
}
static inline fx32 SPLRandom_FX32(u32 bits) {
    return (fx32) SPLRandom_Next() >> (sizeof(u32) * 8 - bits);
}
static inline void SPLParticleList_PushFront(SPLParticleList *list, SPLParticle *ptcl) {
    func_0209def8((SPLList *) list, (SPLNode *) ptcl);
}
static inline SPLParticle *SPLParticleList_PopFront(SPLParticleList *list) {
    return (SPLParticle *) SPLList_PopFront((SPLList *) list);
}
void SPLEmitter_EmitParticles(SPLEmitter *emtr, SPLParticleList *list);
void SPLEmitter_EmitChildren(SPLParticle *ptcl, SPLEmitter *emtr, SPLParticleList *list);
static inline void G3_Begin(u32 p) {
    (*(volatile u32 *) 0x04000500) = p;
}
static inline void G3_End(void) {
    (*(volatile u32 *) 0x04000504) = 0;
}
static inline void G3_TexCoord(fx32 s, fx32 t) {
    (*(volatile u32 *) 0x04000488) = (u32) (u16) (s >> 8) | ((u32) (u16) (t >> 8) << 16);
}
static inline void G3_Vtx10(fx16 x, fx16 y, fx16 z) {
    (*(volatile u32 *) 0x04000490) =
        ((u32) ((((u32) ((x) >> 6) & 0x3ff) << 0) | (((u32) ((y) >> 6) & 0x3ff) << 10) | (((u32) ((z) >> 6) & 0x3ff) << 20)));
}
void SPLUtil_DrawXYPlane(s32 s, s32 t, s32 x, s32 y);
void SPLUtil_DrawXZPlane(s32 s, s32 t, s32 x, s32 z);
void SPL_EMITTER_CalcRotMtx(s32 sn, s32 cs, MtxFx43 *m);
void SPL_EMITTER_SetRotMtx(s32 sn, s32 cs, MtxFx43 *m);
void SPL_EMITTER_UpdateFrame(struct RigObject *obj, struct RenderNode *s);
void SPL_EMITTER_UpdateFrameEx(struct RigObject *obj, struct RenderNode *s);
static inline void G3_PolygonAttr(int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha, int misc) {
    (*(volatile u32 *) 0x040004A4) =
        ((u32) (((light) << 0) | ((polyMode) << 4) | ((cullMode) << 6) | (misc) | ((polygonID) << 24) | ((alpha) << 16)));
}
static inline void G3_Identity(void) {
    (*(volatile u32 *) 0x04000454) = 0;
}
static inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    (*(volatile u32 *) 0x04000470) = (u32) x;
    (*(volatile u32 *) 0x04000470) = (u32) y;
    (*(volatile u32 *) 0x04000470) = (u32) z;
}
static inline void G3_Color(GXRgb rgb) {
    (*(volatile u32 *) 0x04000480) = (u32) (rgb);
}
static inline void MTX_Copy43To33(const MtxFx43 *pSrc, MtxFx33 *pDst) {
    MI_Copy36B(pSrc, pDst);
}
static inline const void *SPLTextureResource_GetTexData(const SPLTextureResource *resource) {
    return (const void *) (resource + 1);
}
static inline BOOL SPLDraw_Setup(const SPLParticle *ptcl, const SPLManager *mgr) {
    fx32 alpha = (fx32) (ptcl->visibility.baseAlpha * (ptcl->visibility.animAlpha + 1)) >> 5;
    G3_PolygonAttr(0, GX_POLYGONMODE_MODULATE, GX_CULL_NONE, ptcl->visibility.currentPolygonID, alpha, mgr->miscPolygonAttr);
    (*(volatile u32 *) 0x040004A4);
    return alpha == 0;
}
void SPL_EMITTER_UpdateParticleMotion(SPLManager *mgr, SPLParticle *ptcl);
void SPL_EMITTER_UpdateParticleMotionEx(SPLManager *mgr, SPLParticle *ptcl);
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
void SPL_EMITTER_UpdateFrameA68(struct RigObject *obj, struct RenderNode *s);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
void SPL_EMITTER_UpdateFrameA68Ex(struct RigObject *obj, struct RenderNode *s);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
void SPL_EMITTER_UpdateFrameMain(struct RigObject *obj, struct RenderNode *s);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
void SPL_EMITTER_UpdateFrameMainEx(struct RigObject *obj, struct RenderNode *s);
static inline void G3_TexImageParam(GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS sSize, GXTexSizeT tSize, GXTexRepeat repeat,
                                    GXTexFlip flip, GXTexPlttColor0 pltt0, u32 addr) {
    (*(volatile u32 *) 0x040004A8) = ((u32) ((addr) >> 3) | ((texFmt) << 26) | ((texGen) << 30) | ((sSize) << 20) |
                                      ((tSize) << 23) | ((repeat) << 16) | ((flip) << 18) | ((pltt0) << 29));
}
static inline void G3_TexPlttBase(u32 addr, GXTexFmt texfmt) {
    (*(volatile u32 *) 0x040004AC) = ((u32) ((addr) >> (4 - ((texfmt) == GX_TEXFMT_PLTT4))));
}
static inline void G3_MtxMode(GXMtxMode mode) {
    (*(volatile u32 *) 0x04000440) = (u32) mode;
}
static inline void G3_Scale(fx32 x, fx32 y, fx32 z) {
    (*(volatile u32 *) 0x0400046C) = (u32) x;
    (*(volatile u32 *) 0x0400046C) = (u32) y;
    (*(volatile u32 *) 0x0400046C) = (u32) z;
}
void SPL_EMITTER_SetTextureParam(SPLTexture *tex);
void SPL_EMITTER_Noop(SPLTexture *tex);
void SPL_EMITTER_SetupResource(volatile struct ResourceSetup *o, struct SplEmitterCfg *cfg, const VecFx32 *pos);
static inline SPLParticle *SPLParticleList_Erase(SPLParticleList *list, SPLParticle *ptcl) {
    return (SPLParticle *) func_0209de2c((SPLList *) list, (SPLNode *) ptcl);
}
void func_02098d44(SPLManager *mgr, SPLEmitter *emtr);
void SPL_EMITTER_UpdateSubB(struct RigObject *o);
void SPL_EMITTER_UpdateSubX(struct RigObject *o);
void SPL_EMITTER_UpdateSubC(struct RigObject *o);
extern u32 (*NNS_GfdDefaultFuncAllocPlttVram)(u32 a, u32 b, u32 c);
extern u32 (*NNS_GfdDefaultFuncAllocTexVram)(u32 a, u32 b, u32 c);
int SPL_EMITTER_AllocTexVram(u32 szByte, u32 is4x4comp);
int SPL_EMITTER_AllocPlttVram(u32 szByte, u32 is4pltt);
struct VramNodeHeap *SPL_EMITTER_AllocNodeFromHeap(AllocFn alloc, u16 n1, u16 n2, u16 limitA, u16 limitB, u16 maxResIndex);
void SPL_EMITTER_FreeNodeToHeap(struct VramTexHeap *h, struct VramHeapHeader *d);
int SPL_EMITTER_AllocTexVramList(struct RigObject *o, AllocTex alloc);
int SPL_EMITTER_AllocPlttVramList(struct RigObject *o, AllocTex alloc);
void SPL_EMITTER_AllocTexVramDefault(struct RigObject *rigObject);
void SPL_EMITTER_AllocPlttVramDefault(struct RigObject *rigObject);
void func_0209829c(struct VramFreeList *h) {
    struct VramFreeNode *n = h->list;

    if (n != 0) {
        u16 z = 0;
        struct VramFreeNode *next;

        do {
            struct VramAllocClass *c = *n->allocClass;
            u32 idx;

            next = n->next;

            if (n->expired == 0) {
                if (n->age >= c->lifeTime) {
                    n->expired = 1;
                    n->age     = z;
                }
            }
            if (n->suppressed == 0) {
                idx = (((struct VramFreeNode *) n)->phaseFlags << 13) >> 29;
                if (idx == 0 || h->parity == idx - 1) {
                    func_02098d44((struct SPLManager *) h, (struct SPLEmitter *) n);
                }
            }
            if ((c->retire != 0 && c->lifeCap != 0 && n->expired != 0 && n->age > c->lifeCap) || n->kill != 0) {
                if (n->pending0 == 0 && n->pending1 == 0) {
                    SPLNode *r = func_0209de2c((SPLList *) (&h->list), (SPLNode *) n);
                    func_0209def8((SPLList *) (&h->freeList), r);
                }
            }
            n = next;
        } while (next != 0);
    }
    h->parity = h->parity + 1;
    if (h->parity > 1) {
        h->parity = 0;
    }
}
void SPL_EMITTER_FreeNodeHeap(struct VramHeapHead *h, u32 a);
struct SPLEmitter *SPL_EMITTER_AllocResource(char *p, int b, const VecFx32 *c);
struct SPLEmitter *SPL_EMITTER_AllocResourceEx(char *p, int b, void (*fn)(void *));
void SPL_EMITTER_FreeResource(char *p, char *q);
void SPL_EMITTER_FreeResourceList(void *p);
