/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_UpdateParticleMotionEx from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef int BOOL;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
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
typedef u16 GXRgb;
typedef struct SPLBehavior {
    void (*applyFunc)(const void *, struct SPLParticle *, VecFx32 *, struct SPLEmitter *);
    const void *object;
} SPLBehavior;
enum SPLScaleAnimDir {
    SPL_SCALE_ANIM_DIR_XY = 0,
    SPL_SCALE_ANIM_DIR_X,
    SPL_SCALE_ANIM_DIR_Y,
};
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
typedef u32 GXPolygonAttrMisc;
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
extern void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
extern void func_0209a8e4(SPLManager *mgr, SPLParticle *ptcl);
extern void func_020cb630(const VecFx32 *vec, const MtxFx33 *m, VecFx32 *dst);
extern void func_020cce94(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
extern void func_020ccfe0(const VecFx32 *pSrc, VecFx32 *pDst);
extern void func_020cf52c(const void *m);
extern void func_020d4928(const void *pSrc, void *pDest);
extern void func_020cbe9c(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst);
extern void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
extern void func_0209a8e4(SPLManager *mgr, SPLParticle *ptcl);
void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
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
    func_020d4928(pSrc, pDst);
}
static inline BOOL SPLDraw_Setup(const SPLParticle *ptcl, const SPLManager *mgr) {
    fx32 alpha = (fx32) (ptcl->visibility.baseAlpha * (ptcl->visibility.animAlpha + 1)) >> 5;
    G3_PolygonAttr(0, GX_POLYGONMODE_MODULATE, GX_CULL_NONE, ptcl->visibility.currentPolygonID, alpha, mgr->miscPolygonAttr);
    (*(volatile u32 *) 0x040004A4);
    return alpha == 0;
}
void func_0209a8e4(SPLManager *mgr, SPLParticle *ptcl) {
    VecFx32 vel_dir;
    VecFx32 trs;
    fx32 sclX, sclY;
    VecFx32 dir, look;
    MtxFx33 mat;
    MtxFx43 load;

    const MtxFx43 *cmr = mgr->renderState.viewMatrix;
    fx32 aspect        = mgr->renderState.emitter->resource->header->aspectRatio;

    if (SPLDraw_Setup(ptcl, mgr)) {
        return;
    }

    sclY = ptcl->baseScale;
    sclX = ((fx32) (((fx64) (sclY) * (aspect) + 0x800LL) >> 12));

    switch (mgr->renderState.emitter->resource->header->misc.scaleAnimDir) {
        case SPL_SCALE_ANIM_DIR_XY:
            sclX = ((fx32) (((fx64) (sclX) * (ptcl->animScale) + 0x800LL) >> 12));
            sclY = ((fx32) (((fx64) (sclY) * (ptcl->animScale) + 0x800LL) >> 12));
            break;

        case SPL_SCALE_ANIM_DIR_X:
            sclX = ((fx32) (((fx64) (sclX) * (ptcl->animScale) + 0x800LL) >> 12));
            break;

        case SPL_SCALE_ANIM_DIR_Y:
            sclY = ((fx32) (((fx64) (sclY) * (ptcl->animScale) + 0x800LL) >> 12));
            break;
    }

    if (!mgr->renderState.emitter->resource->header->flags.useViewSpace) {
        trs.x = ptcl->position.x + ptcl->emitterPos.x;
        trs.y = ptcl->position.y + ptcl->emitterPos.y;
        trs.z = ptcl->position.z + ptcl->emitterPos.z;

        dir = ptcl->velocity;

        look.x = cmr->m[0][2];
        look.y = cmr->m[1][2];
        look.z = cmr->m[2][2];

        func_020cce94(&dir, &look, &dir);
        if (dir.x == 0 && dir.y == 0 && dir.z == 0) {
            return;
        }

        func_020ccfe0(&dir, &dir);
        MTX_Copy43To33(cmr, &mat);
        func_020cb630(&dir, &mat, &dir);
        func_020cbe9c(&trs, cmr, &trs);

        vel_dir = ptcl->velocity;
        func_020ccfe0(&vel_dir, &vel_dir);

        fx32 dot = ((fx32) (((fx64) (vel_dir.x) * (-cmr->m[0][2]) + 0x800LL) >> 12)) +
                   ((fx32) (((fx64) (vel_dir.y) * (-cmr->m[1][2]) + 0x800LL) >> 12)) +
                   ((fx32) (((fx64) (vel_dir.z) * (-cmr->m[2][2]) + 0x800LL) >> 12));
        if (dot < 0) {
            dot = -dot;
        }

        dot          = ((fx32) (((fx64) (sclY) * (((fx32) (((fx64) (((fx32) 0x00001000L) - dot) *
                                                       ((fx32) mgr->renderState.emitter->resource->header->misc.dbbScale) +
                                                   0x800LL) >>
                                                  12)) +
                                         ((fx32) 0x00001000L)) +
                        0x800LL) >>
                       12));
        load.m[0][0] = ((fx32) (((fx64) (dir.x) * (sclX) + 0x800LL) >> 12));
        load.m[1][0] = ((fx32) (((fx64) (-dir.y) * (dot) + 0x800LL) >> 12));
        load.m[2][0] = 0;
        load.m[3][0] = trs.x;
        load.m[0][1] = ((fx32) (((fx64) (dir.y) * (sclX) + 0x800LL) >> 12));
        load.m[1][1] = ((fx32) (((fx64) (dir.x) * (dot) + 0x800LL) >> 12));
        load.m[2][1] = 0;
        load.m[3][1] = trs.y;
        load.m[0][2] = 0;
        load.m[1][2] = 0;
        load.m[2][2] = ((fx32) 0x00001000L);
        load.m[3][2] = trs.z;

        G3_Identity();
        func_020cf52c(&load);
    } else {
        trs.x = ptcl->position.x + ptcl->emitterPos.x - mgr->renderState.emitter->resource->header->emitterBasePos.x;
        trs.y = ptcl->position.y + ptcl->emitterPos.y - mgr->renderState.emitter->resource->header->emitterBasePos.y;
        trs.z = ptcl->position.z + ptcl->emitterPos.z - mgr->renderState.emitter->resource->header->emitterBasePos.z;

        dir = ptcl->velocity;

        look.x = cmr->m[0][2];
        look.y = cmr->m[1][2];
        look.z = cmr->m[2][2];

        func_020cce94(&dir, &look, &dir);
        if (dir.x == 0 && dir.y == 0 && dir.z == 0) {
            return;
        }

        func_020ccfe0(&dir, &dir);
        MTX_Copy43To33(cmr, &mat);
        func_020cb630(&dir, &mat, &dir);
        func_020cbe9c(&trs, cmr, &trs);

        vel_dir = ptcl->velocity;
        func_020ccfe0(&vel_dir, &vel_dir);

        fx32 dot = ((fx32) (((fx64) (vel_dir.x) * (-cmr->m[0][2]) + 0x800LL) >> 12)) +
                   ((fx32) (((fx64) (vel_dir.y) * (-cmr->m[1][2]) + 0x800LL) >> 12)) +
                   ((fx32) (((fx64) (vel_dir.z) * (-cmr->m[2][2]) + 0x800LL) >> 12));
        if (dot < 0) {
            dot = -dot;
        }

        dot          = ((fx32) (((fx64) (sclY) * (((fx32) (((fx64) (((fx32) 0x00001000L) - dot) *
                                                       ((fx32) mgr->renderState.emitter->resource->header->misc.dbbScale) +
                                                   0x800LL) >>
                                                  12)) +
                                         ((fx32) 0x00001000L)) +
                        0x800LL) >>
                       12));
        load.m[0][0] = ((fx32) (((fx64) (dir.x) * (sclX) + 0x800LL) >> 12));
        load.m[1][0] = ((fx32) (((fx64) (-dir.y) * (dot) + 0x800LL) >> 12));
        load.m[2][0] = 0;
        load.m[3][0] = trs.x;
        load.m[0][1] = ((fx32) (((fx64) (dir.y) * (sclX) + 0x800LL) >> 12));
        load.m[1][1] = ((fx32) (((fx64) (dir.x) * (dot) + 0x800LL) >> 12));
        load.m[2][1] = 0;
        load.m[3][1] = trs.y;
        load.m[0][2] = 0;
        load.m[1][2] = 0;
        load.m[2][2] = ((fx32) 0x00001000L);
        load.m[3][2] = trs.z;

        G3_Identity();
        G3_Translate(mgr->renderState.emitter->resource->header->emitterBasePos.x,
                     mgr->renderState.emitter->resource->header->emitterBasePos.y,
                     mgr->renderState.emitter->resource->header->emitterBasePos.z);
        func_020cf52c(&load);
    }

    G3_Color(((GXRgb) ((((ptcl->color & (0x001f)) * (mgr->renderState.emitter->color & (0x001f)) >> 5) << (0)) |
                       (((ptcl->color & (0x03e0)) * (mgr->renderState.emitter->color & (0x03e0)) >> 15) << (5)) |
                       (((ptcl->color & (0x7c00)) * (mgr->renderState.emitter->color & (0x7c00)) >> 25) << (10))))

    );

    func_0209c0f4(mgr->renderState.emitter->childTextureS, mgr->renderState.emitter->childTextureT, 0, 0);
}
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
