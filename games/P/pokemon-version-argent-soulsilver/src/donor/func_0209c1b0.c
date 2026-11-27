/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPLEmitter_EmitChildren from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s16 fx16;
typedef s32 fx32;
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
extern void func_0209c1b0(SPLParticle *ptcl, SPLEmitter *emtr, SPLParticleList *list);
extern void func_0209def8(SPLList *list, SPLNode *node);
extern SPLNode *func_0209deac(SPLList *list);
extern void func_0209c1b0(SPLParticle *ptcl, SPLEmitter *emtr, SPLParticleList *list);
extern u32 data_021d43d8;
void func_0209def8(SPLList *list, SPLNode *node);
SPLNode *func_0209deac(SPLList *list);
extern u32 data_021d43d8;
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
extern u32 data_021d43d8;
void func_0209c1b0(SPLParticle *ptcl, SPLEmitter *emtr, SPLParticleList *list) {
    struct ParticleView *p;
    struct EmitterParticle *e = (struct EmitterParticle *) ptcl;
    struct EmitOwner *o       = (struct EmitOwner *) emtr;
    SPLList *pool             = (SPLList *) list;
    struct ParticleDesc *d    = o->x->desc;
    fx32 scale                = FX_Mul(d->scale << 12, 0x10);
    s32 i;
    for (i = 0; i < d->count; i++) {
        p = (struct ParticleView *) func_0209deac(pool);
        if (p == 0) {
            return;
        }
        func_0209def8(&o->list, (SPLNode *) p);
        p->pos   = e->pos;
        p->vel.x = FX_Mul(e->vel.x, scale) +
                   (((d->velocity) * (s32) ((data_021d43d8 = data_021d43d8 * 0x5EEDF715 + 0x1B0CB173) >> 23) -
                     ((d->velocity) << 8)) >>
                    8);
        p->vel.y = FX_Mul(e->vel.y, scale) +
                   (((d->velocity) * (s32) ((data_021d43d8 = data_021d43d8 * 0x5EEDF715 + 0x1B0CB173) >> 23) -
                     ((d->velocity) << 8)) >>
                    8);
        p->vel.z = FX_Mul(e->vel.z, scale) +
                   (((d->velocity) * (s32) ((data_021d43d8 = data_021d43d8 * 0x5EEDF715 + 0x1B0CB173) >> 23) -
                     ((d->velocity) << 8)) >>
                    8);
        p->emitterPos = e->emitterPos;
        {
            s32 s        = (e->baseScale * e->animScale) >> 12;
            p->baseScale = s * (d->scaleAdd + 1) >> 6;
        }
        p->animScale = 0x1000;
        if (d->f.col) {
            p->color = d->color;
        } else {
            p->color = e->color;
        }
        p->w.b0 = (u16) ((e->w.b0 * (e->w.b5 + 1)) >> 5);
        p->w.b5 = 0x1f;
        switch (d->f.sel) {
            case 0:
                p->rotation        = 0;
                p->angularVelocity = 0;
                break;
            case 1:
                p->rotation        = e->rotation;
                p->angularVelocity = 0;
                break;
            case 2:
                p->rotation        = e->rotation;
                p->angularVelocity = e->angularVelocity;
                break;
        }
        p->lifeTime       = d->lifeTime;
        p->age            = 0;
        p->texture        = d->texture;
        p->loopTimeFactor = 0xffff / (s32) ((u32) e->lifeTime >> 1);
        p->lifeTimeFactor = 0xffff / e->lifeTime;
        p->lifeRateOffset = 0;
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
