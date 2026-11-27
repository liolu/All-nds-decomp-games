/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPLEmitter_EmitParticles from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
typedef struct VecFx16 {
    fx16 x, y, z;
} VecFx16;
typedef struct SPLNode {
    struct SPLNode *next;
    struct SPLNode *prev;
} SPLNode;
typedef struct SPLList {
    SPLNode *first;
    int count;
    SPLNode *last;
} SPLList;
typedef u16 GXRgb;
typedef struct SPLBehavior {
    void (*applyFunc)(const void *, struct SPLParticle *, VecFx32 *, struct SPLEmitter *);
    const void *object;
} SPLBehavior;
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
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
typedef struct SPLParticle SPLParticle;
typedef struct SPLResource SPLResource;
typedef struct SPLEmitter SPLEmitter;
typedef struct SPLParticleList SPLParticleList;
typedef struct SPLList SPLList;
typedef struct SPLNode SPLNode;
typedef struct SPLParticle SPLParticle;
typedef struct SPLResource SPLResource;
typedef struct SPLEmitter SPLEmitter;
typedef struct SPLParticleList SPLParticleList;
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *func_0209deac(SPLList *list);
extern void func_0209d35c(SPLEmitter *emtr);
extern void func_0209d1fc(VecFx32 *out, const VecFx32 *src, const SPLEmitter *emtr);
extern void func_0209c4d0(SPLEmitter *emtr, SPLParticleList *list);
extern fx32 func_020cce14(const VecFx32 *a, const VecFx32 *b);
extern void func_020ccf18(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb);
extern void func_020ccfe0(const VecFx32 *pSrc, VecFx32 *pDst);
extern void func_0209df48(volatile VecFx32 *v);
extern void func_0209dfa4(volatile VecFx32 *v);
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *func_0209deac(SPLList *list);
extern void func_0209d35c(SPLEmitter *emtr);
extern void func_0209d1fc(VecFx32 *out, const VecFx32 *src, const SPLEmitter *emtr);
extern void func_0209c4d0(SPLEmitter *emtr, SPLParticleList *list);
extern const fx16 data_02109500[];
extern u32 data_021d43d8;
void func_0209def8(SPLList *list, SPLNode *node);
SPLNode *func_0209deac(SPLList *list);
extern u32 data_021d43d8;
extern u32 data_021d43d8;
void func_0209d35c(SPLEmitter *emtr);
void func_0209d1fc(VecFx32 *out, const VecFx32 *src, const SPLEmitter *emtr);
static inline fx16 FX_SinIdx(int idx) {
    return data_02109500[((idx >> 4) << 1)];
}
static inline fx16 FX_CosIdx(int idx) {
    return data_02109500[((idx >> 4) << 1) + 1];
}
static inline u32 SPLRandom_Next() {
    data_021d43d8 = data_021d43d8 * 0x5eedf715 + 0x1b0cb173;
    return data_021d43d8;
}
static inline u32 SPLRandom_U32(u32 bits) {
    return SPLRandom_Next() >> (sizeof(u32) * 8 - bits);
}
static inline s32 SPLRandom_S32(u32 bits) {
    return (s32) (SPLRandom_Next() >> (sizeof(u32) * 8 - bits));
}
static inline void SPLParticleList_PushFront(SPLParticleList *list, SPLParticle *ptcl) {
    func_0209def8((SPLList *) list, (SPLNode *) ptcl);
}
static inline SPLParticle *SPLParticleList_PopFront(SPLParticleList *list) {
    return (SPLParticle *) func_0209deac((SPLList *) list);
}
void func_0209c4d0(SPLEmitter *emtr, SPLParticleList *list) {
    SPLResource *res          = emtr->resource;
    SPLResourceHeader *header = res->header;

    int i                         = 0;
    int emitCountDec              = emtr->emissionCount + ((fx32) (emtr->emissionCountFractional));
    int totalEmissions            = emitCountDec >> 12;
    int emission                  = 0;
    emtr->emissionCountFractional = emitCountDec & 0x00000fff;

    enum SPLEmissionType emitType = header->flags.emissionType;
    if (emitType == SPL_EMISSION_TYPE_CIRCLE_BORDER || emitType == SPL_EMISSION_TYPE_CIRCLE_BORDER_UNIFORM ||
        emitType == SPL_EMISSION_TYPE_CIRCLE || emitType == SPL_EMISSION_TYPE_CYLINDER_SURFACE ||
        emitType == SPL_EMISSION_TYPE_CYLINDER || emitType == SPL_EMISSION_TYPE_HEMISPHERE_SURFACE ||
        emitType == SPL_EMISSION_TYPE_HEMISPHERE) {
        func_0209d35c(emtr);
    }

    for (i = 0; i < totalEmissions; i++) {
        SPLParticle *ptcl = SPLParticleList_PopFront(list);
        if (ptcl == ((void *) 0)) {
            return;
        }

        SPLParticleList_PushFront(&emtr->particles, ptcl);

        switch (header->flags.emissionType) {
            case SPL_EMISSION_TYPE_POINT:
                ptcl->position.x = ptcl->position.y = ptcl->position.z = 0;
                break;

            case SPL_EMISSION_TYPE_SPHERE_SURFACE:
                func_0209dfa4(&ptcl->position);
                ptcl->position.x = ((fx32) (((fx64) (ptcl->position.x) * (emtr->radius) + 0x800LL) >> 12));
                ptcl->position.y = ((fx32) (((fx64) (ptcl->position.y) * (emtr->radius) + 0x800LL) >> 12));
                ptcl->position.z = ((fx32) (((fx64) (ptcl->position.z) * (emtr->radius) + 0x800LL) >> 12));
                break;

            case SPL_EMISSION_TYPE_CIRCLE_BORDER: {
                VecFx32 pos;
                func_0209df48(&pos);
                pos.x = ((fx32) (((fx64) (pos.x) * (emtr->radius) + 0x800LL) >> 12));
                pos.y = ((fx32) (((fx64) (pos.y) * (emtr->radius) + 0x800LL) >> 12));
                pos.z = 0;
                func_0209d1fc(&ptcl->position, &pos, emtr);
            } break;

            case SPL_EMISSION_TYPE_CIRCLE_BORDER_UNIFORM: {
                VecFx32 pos;
                int idx =
                    (emission * ((fx32) (((16) > 0) ? ((16) * 4096.0f + 0.5f) : ((16) * 4096.0f - 0.5f)))) / totalEmissions;
                emission += 1;

                fx32 sin = FX_SinIdx(idx);
                fx32 cos = FX_CosIdx(idx);
                pos.x    = ((fx32) (((fx64) (sin) * (emtr->radius) + 0x800LL) >> 12));
                pos.y    = ((fx32) (((fx64) (cos) * (emtr->radius) + 0x800LL) >> 12));
                pos.z    = 0;
                func_0209d1fc(&ptcl->position, &pos, emtr);
            } break;

            case SPL_EMISSION_TYPE_SPHERE:
                func_0209dfa4(&ptcl->position);
                ptcl->position.x =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->position.x) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                ptcl->position.y =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->position.y) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                ptcl->position.z =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->position.z) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                break;

            case SPL_EMISSION_TYPE_CIRCLE: {
                VecFx32 pos;
                func_0209df48(&pos);
                pos.x =
                    ((fx32) (((fx64) (((fx32) (((fx64) (pos.x) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                pos.y =
                    ((fx32) (((fx64) (((fx32) (((fx64) (pos.y) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                func_0209d1fc(&ptcl->position, &pos, emtr);
            } break;

            case SPL_EMISSION_TYPE_HEMISPHERE_SURFACE: {
                VecFx32 pos;
                VecFx16 emitterUp;
                func_0209dfa4(&ptcl->position);
                func_020ccf18(&emtr->crossAxis1, &emtr->crossAxis2, &emitterUp);
                pos.x = emitterUp.x;
                pos.y = emitterUp.y;
                pos.z = emitterUp.z;
                if (func_020cce14(&pos, &ptcl->position) <= 0) {
                    ptcl->position.x = -ptcl->position.x;
                    ptcl->position.y = -ptcl->position.y;
                    ptcl->position.z = -ptcl->position.z;
                }

                ptcl->position.x = ((fx32) (((fx64) (ptcl->position.x) * (emtr->radius) + 0x800LL) >> 12));
                ptcl->position.y = ((fx32) (((fx64) (ptcl->position.y) * (emtr->radius) + 0x800LL) >> 12));
                ptcl->position.z = ((fx32) (((fx64) (ptcl->position.z) * (emtr->radius) + 0x800LL) >> 12));
            } break;

            case SPL_EMISSION_TYPE_HEMISPHERE: {
                VecFx32 pos;
                VecFx16 tmpUnitVec;
                func_0209dfa4(&ptcl->position);
                func_020ccf18(&emtr->crossAxis1, &emtr->crossAxis2, &tmpUnitVec);
                pos.x = tmpUnitVec.x;
                pos.y = tmpUnitVec.y;
                pos.z = tmpUnitVec.z;
                if (func_020cce14(&pos, &ptcl->position) < 0) {
                    ptcl->position.x = -ptcl->position.x;
                    ptcl->position.y = -ptcl->position.y;
                    ptcl->position.z = -ptcl->position.z;
                }

                ptcl->position.x =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->position.x) * (emtr->radius) + 0x800LL) >> 12))) *
                                  (((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8) >>
                                    1) +
                                   ((fx32) 0x00000800L)) +
                              0x800LL) >>
                             12));
                ptcl->position.y =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->position.y) * (emtr->radius) + 0x800LL) >> 12))) *
                                  (((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8) >>
                                    1) +
                                   ((fx32) 0x00000800L)) +
                              0x800LL) >>
                             12));
                ptcl->position.z =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->position.z) * (emtr->radius) + 0x800LL) >> 12))) *
                                  (((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8) >>
                                    1) +
                                   ((fx32) 0x00000800L)) +
                              0x800LL) >>
                             12));
            } break;

            case SPL_EMISSION_TYPE_CYLINDER_SURFACE: {
                VecFx32 pos;
                func_0209df48(&ptcl->velocity);
                pos.x = ((fx32) (((fx64) (ptcl->velocity.x) * (emtr->radius) + 0x800LL) >> 12));
                pos.y = ((fx32) (((fx64) (ptcl->velocity.y) * (emtr->radius) + 0x800LL) >> 12));
                pos.z = (((emtr->length) * (s32) SPLRandom_U32(9) - ((emtr->length) << 8)) >> 8);
                func_0209d1fc(&ptcl->position, &pos, emtr);
            } break;

            case SPL_EMISSION_TYPE_CYLINDER: {
                VecFx32 pos;
                func_0209df48(&ptcl->velocity);
                pos.x =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->velocity.x) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                pos.y =
                    ((fx32) (((fx64) (((fx32) (((fx64) (ptcl->velocity.y) * (emtr->radius) + 0x800LL) >> 12))) *
                                  ((((((fx32) 0x00001000L)) * (s32) SPLRandom_U32(9) - ((((fx32) 0x00001000L)) << 8)) >> 8)) +
                              0x800LL) >>
                             12));
                pos.z = (((emtr->length) * (s32) SPLRandom_U32(9) - ((emtr->length) << 8)) >> 8);
                func_0209d1fc(&ptcl->position, &pos, emtr);
            } break;
        }

        fx32 magPos =
            ((emtr->initVelPositionAmplifier) * (255 + (header->randomAttenuation.initVel) -
                                                 (((header->randomAttenuation.initVel) * (fx32) SPLRandom_U32(8)) >> 7)) >>
             8);
        fx32 magAxis =
            ((emtr->initVelAxisAmplifier) * (255 + (header->randomAttenuation.initVel) -
                                             (((header->randomAttenuation.initVel) * (fx32) SPLRandom_U32(8)) >> 7)) >>
             8);

        VecFx32 posNorm;
        if (header->flags.emissionType == SPL_EMISSION_TYPE_CYLINDER_SURFACE) {
            VecFx32 tmp;
            tmp.x = ((fx32) (((fx64) (ptcl->velocity.x) * (emtr->crossAxis1.x) + 0x800LL) >> 12)) +
                    ((fx32) (((fx64) (ptcl->velocity.y) * (emtr->crossAxis2.x) + 0x800LL) >> 12));
            tmp.y = ((fx32) (((fx64) (ptcl->velocity.x) * (emtr->crossAxis1.y) + 0x800LL) >> 12)) +
                    ((fx32) (((fx64) (ptcl->velocity.y) * (emtr->crossAxis2.y) + 0x800LL) >> 12));
            tmp.z = ((fx32) (((fx64) (ptcl->velocity.x) * (emtr->crossAxis1.z) + 0x800LL) >> 12)) +
                    ((fx32) (((fx64) (ptcl->velocity.y) * (emtr->crossAxis2.z) + 0x800LL) >> 12));

            func_020ccfe0(&tmp, &posNorm);
        } else if (ptcl->position.x == 0 && ptcl->position.y == 0 && ptcl->position.z == 0) {
            func_0209dfa4(&posNorm);
        } else {
            func_020ccfe0(&ptcl->position, &posNorm);
        }

        ptcl->velocity.x = ((fx32) (((fx64) (posNorm.x) * (magPos) + 0x800LL) >> 12)) +
                           ((fx32) (((fx64) (emtr->axis.x) * (magAxis) + 0x800LL) >> 12)) + emtr->particleInitVelocity.x;
        ptcl->velocity.y = ((fx32) (((fx64) (posNorm.y) * (magPos) + 0x800LL) >> 12)) +
                           ((fx32) (((fx64) (emtr->axis.y) * (magAxis) + 0x800LL) >> 12)) + emtr->particleInitVelocity.y;
        ptcl->velocity.z = ((fx32) (((fx64) (posNorm.z) * (magPos) + 0x800LL) >> 12)) +
                           ((fx32) (((fx64) (emtr->axis.z) * (magAxis) + 0x800LL) >> 12)) + emtr->particleInitVelocity.z;

        ptcl->emitterPos = emtr->position;

        ptcl->baseScale = ((emtr->baseScale) * (255 + (header->randomAttenuation.baseScale) -
                                                (((header->randomAttenuation.baseScale) * (fx32) SPLRandom_U32(8)) >> 7)) >>
                           8);
        ptcl->animScale = ((fx32) 0x00001000L);

        if (header->flags.hasColorAnim && res->colorAnim->flags.randomStartColor) {
            u16 clr[3];
            u32 index   = SPLRandom_S32(12);
            clr[0]      = res->colorAnim->start;
            clr[1]      = header->color;
            clr[2]      = res->colorAnim->end;
            ptcl->color = clr[index % 3];
        } else {
            ptcl->color = header->color;
        }

        ptcl->visibility.baseAlpha = emtr->misc.baseAlpha;
        ptcl->visibility.animAlpha = 31;

        if (header->flags.randomInitAngle) {
            ptcl->rotation = SPLRandom_S32(32);
        } else {
            ptcl->rotation = emtr->initAngle;
        }

        if (header->flags.hasRotation) {
            ptcl->angularVelocity = (u32) ((fx32) (((header->maxRotation) - (header->minRotation)) * SPLRandom_U32(12) +
                                                   ((header->minRotation) * ((fx32) 0x00001000L)))) >>
                                    12;
        } else {
            ptcl->angularVelocity = 0;
        }

        ptcl->lifeTime =
            (((emtr->particleLifeTime) * (255 - (((header->randomAttenuation.lifeTime) * (fx32) SPLRandom_U32(8)) >> 8))) >>
             8) +
            1;
        ptcl->age = 0;

        if (header->flags.hasTexAnim && res->texAnim->param.randomizeInit) {
            ptcl->texture = res->texAnim->textures[SPLRandom_U32(12) % res->texAnim->param.frameCount];
        } else if (header->flags.hasTexAnim && !res->texAnim->param.randomizeInit) {
            ptcl->texture = res->texAnim->textures[0];
        } else {
            ptcl->texture = header->misc.textureIndex;
        }

        ptcl->loopTimeFactor = 0xFFFF / res->header->misc.loopFrames;
        ptcl->lifeTimeFactor = 0xFFFF / ptcl->lifeTime;

        ptcl->lifeRateOffset = 0;

        if (header->flags.randomizeLoopedAnim) {
            ptcl->lifeRateOffset = (u8) SPLRandom_S32(8);
        }
    }
}
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
