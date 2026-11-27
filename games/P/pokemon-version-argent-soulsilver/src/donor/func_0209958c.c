/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_SetupResource from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
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
extern void func_0209958c(volatile struct ResourceSetup *o, struct SplEmitterCfg *cfg, const VecFx32 *pos);
extern void func_0209958c(volatile struct ResourceSetup *o, struct SplEmitterCfg *cfg, const VecFx32 *pos);
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
void func_0209958c(volatile struct ResourceSetup *o, struct SplEmitterCfg *cfg, const VecFx32 *pos) {
    volatile struct VramResourceHeader *r;
    struct SplEmitterCfg *c;
    o->resource                = cfg;
    o->state                   = 0;
    o->posX                    = pos->x + o->resource->resource->emitterBasePosX;
    o->posY                    = pos->y + o->resource->resource->emitterBasePosY;
    o->posZ                    = pos->z + o->resource->resource->emitterBasePosZ;
    o->initVelX                = 0;
    o->initVelY                = 0;
    o->initVelZ                = 0;
    o->velZ                    = 0;
    o->velY                    = o->velZ;
    o->velX                    = o->velY;
    o->age                     = 0;
    o->emissionCountFractional = 0;
    r                          = o->resource->resource;
    {
        u16 h0   = r->axisX;
        u16 h1   = r->axisY;
        o->axisX = h0;
        o->axisY = h1;
    }
    o->axisZ                   = r->axisZ;
    o->initAngle               = o->resource->resource->initAngle;
    o->emissionCount           = o->resource->resource->emissionCount;
    o->radius                  = o->resource->resource->radius;
    o->length                  = o->resource->resource->length;
    o->initVelPosAmplifier     = o->resource->resource->initVelPosAmplifier;
    o->initVelAxisAmplifier    = o->resource->resource->initVelAxisAmplifier;
    o->baseScale               = o->resource->resource->baseScale;
    o->particleLifeTime        = o->resource->resource->particleLifeTime;
    o->color                   = 0x7fff;
    *((u8 *) (&o->misc))       = o->resource->resource->miscByte0;
    *(((u8 *) (&o->misc)) + 1) = o->resource->resource->miscByte1;
    o->misc                    = o->misc & (~0x70000u);
    o->misc                    = o->misc & 0x0007ffffu;
    o->collisionPlaneHeight    = 0x80000000u;
    o->textureS                = (s16) (0x1000 << ((o->resource->resource->polygonFlags << 6) >> 30));
    o->textureT                = (s16) (0x1000 << ((o->resource->resource->polygonFlags << 4) >> 30));
    if ((o->resource->resource->userData << 31) >> 31) {
        o->textureS = (s16) (o->textureS * (-1));
    }
    if ((o->resource->resource->userData << 30) >> 31) {
        o->textureT = (s16) (o->textureT * (-1));
    }
    c = o->resource;
    if ((c->resource->flags << 15) >> 31) {
        {
            s32 t            = c->sub14->mode;
            s32 u            = t << 30;
            o->childTextureS = (s16) (0x1000 << (((u32) u) >> 30));
        }
        o->childTextureT = (s16) (0x1000 << ((o->resource->sub14->mode << 28) >> 30));
        if ((o->resource->sub14->mode << 27) >> 31) {
            o->childTextureS = (s16) (o->childTextureS * (-1));
        }
        if ((o->resource->sub14->mode << 26) >> 31) {
            o->childTextureT = (s16) (o->childTextureT * (-1));
        }
    }
    o->prev                = 0;
    o->next                = o->prev;
    o->childParticlesFirst = 0;
    o->particlesFirst      = o->childParticlesFirst;
    o->childParticlesCount = 0;
    o->particlesCount      = o->childParticlesCount;
    o->updateCallback      = 0;
    o->userDataPtr         = 0;
    o->userData            = 0;
}
