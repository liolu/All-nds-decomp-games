/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_UpdateSubX from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s16 fx16;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
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
typedef u16 GXRgb;
typedef struct SPLBehavior {
    void (*applyFunc)(const void *, struct SPLParticle *, VecFx32 *, struct SPLEmitter *);
    const void *object;
} SPLBehavior;
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
typedef u32 GXPolygonAttrMisc;
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
typedef struct SPLTexture {
    const void *resource;
    u32 texAddr;
    u32 palAddr;
    SPLTextureParam param;
    u16 width;
    u16 height;
} SPLTexture;
typedef void *(*SPLAllocFunc)(u32);
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
typedef void (*Fn)(struct RigObject *, struct RenderNode *);
typedef struct SPLParticle SPLParticle;
typedef struct SPLResource SPLResource;
typedef struct SPLEmitter SPLEmitter;
typedef struct SPLParticleList SPLParticleList;
typedef struct SPLManager SPLManager;
typedef struct SPLTexture SPLTexture;
typedef struct SPLParticle SPLParticle;
typedef struct SPLResource SPLResource;
typedef struct SPLEmitter SPLEmitter;
typedef struct SPLParticleList SPLParticleList;
typedef struct SPLManager SPLManager;
typedef struct SPLTexture SPLTexture;
extern void func_0209b6ac(struct RigObject *obj, struct RenderNode *s);
extern void func_0209a8e4(SPLManager *mgr, SPLParticle *ptcl);
extern void func_0209a244(struct RigObject *obj, struct RenderNode *s);
extern void func_02099948(struct RigObject *obj, struct RenderNode *s);
extern void func_0209985c(SPLTexture *tex);
extern void func_02098b70(struct RigObject *o);
extern void func_0209b6ac(struct RigObject *obj, struct RenderNode *s);
extern void func_0209a8e4(SPLManager *mgr, SPLParticle *ptcl);
extern void func_0209a244(struct RigObject *obj, struct RenderNode *s);
extern void func_02099948(struct RigObject *obj, struct RenderNode *s);
extern void func_0209985c(SPLTexture *tex);
extern void func_02098b70(struct RigObject *o);
void func_0209b6ac(struct RigObject *obj, struct RenderNode *s);
void func_0209a8e4(SPLManager *mgr, SPLParticle *ptcl);
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
void func_0209a244(struct RigObject *obj, struct RenderNode *s);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
void func_02099948(struct RigObject *obj, struct RenderNode *s);
void func_0209985c(SPLTexture *tex);
void func_02098b70(struct RigObject *o) {
    struct RigRenderList *b = o->renderList;
    struct RigSubList *s    = b->subList;
    Fn fn                   = 0;
    struct RenderNode *n;

    if (!s->desc->flags.z.b16) {
        return;
    }

    func_0209985c(o->textures + s->hw->texture);

    switch (s->hw->hw.kind) {
        case 0:
            fn = func_0209b6ac;
            break;
        case 1:

            fn = (Fn) func_0209a8e4;

            break;
        case 2:
            fn = func_0209a244;
            break;
        case 3:
            fn = func_02099948;
            break;
        case 4:
            fn = func_02099948;
            break;
    }

    n = b->nodeList2;
    if (n == 0) {
        return;
    }

    do {
        fn(o, n);
        n = n->next;
    } while (n != 0);
}
