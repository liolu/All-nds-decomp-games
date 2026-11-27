/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_UpdateFrame from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
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
struct RigTransformFrame {
    struct VecFx32 t;
    MtxFx43 m;
};
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
typedef struct SPLTexture SPLTexture;
typedef struct SPLTexture SPLTexture;
extern void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
extern void func_0209bb00(struct RigObject *obj, struct RenderNode *s);
extern void func_020cf52c(const void *m);
extern void func_020cbe9c(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst);
extern void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
extern void func_0209bb00(struct RigObject *obj, struct RenderNode *s);
extern const s16 data_02109500[];
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_0209c0f4(s32 s, s32 t, s32 x, s32 y);
void func_0209bb00(struct RigObject *obj, struct RenderNode *s) {
    struct RigTransformFrame f;
    struct RigDescriptor *p;
    MtxFx43 *mtx;
    s32 n;
    s32 baseScale;
    s32 x;
    s32 y;
    s64 baseScale64;
    u32 v;
    s32 i;
    s32 sn;
    s32 cs;
    s32 sc;
    s32 k34;
    u8 sel;
    s32 c1;
    u32 q4, q8, qc;
    s32 c2;

    n                            = (s32) s->w.b0 * (s32) (s->w.b5 + 1);
    p                            = obj->renderList->subList->desc;
    sc                           = p->scale;
    sel                          = p->flags28.sel;
    c2                           = obj->renderList->color;
    k34                          = s->animScale;
    c1                           = s->color;
    mtx                          = obj->mtx;
    v                            = ((u32) s->w.b10 << 24) | (obj->polygonAttr | 0xc0) | ((u32) (n >> 5) << 16);
    *(volatile u32 *) 0x040004A4 = v;
    v                            = *(volatile u32 *) 0x040004A4;
    if ((n >> 5) == 0) {
        return;
    }

    baseScale   = s->baseScale;
    baseScale64 = (s64) (s32) baseScale;
    n           = (s32) ((baseScale64 * sc + 0x800) >> 12);
    x           = n;
    y           = baseScale;
    if (sel == 0) {
        x = (s32) (((s64) n * k34 + 0x800) >> 12);
        y = (s32) (((baseScale64 * k34) + 0x800) >> 12);
    } else if (sel == 1) {
        x = (s32) (((s64) n * k34 + 0x800) >> 12);
    } else {
        y = (s32) (((baseScale64 * k34) + 0x800) >> 12);
    }

    p = obj->renderList->subList->desc;
    if (p->flags.z.flag == 0) {
        f.t.x = s->p1.x + s->emitterPosX;
        f.t.y = s->p1.y + s->emitterPosY;
        f.t.z = s->p1.z + s->emitterPosZ;
        func_020cbe9c((const VecFx32 *) &f.t, (const MtxFx43 *) mtx, (VecFx32 *) &f.t);
        i                            = (s32) s->rotation >> 4;
        sn                           = data_02109500[2 * i];
        cs                           = data_02109500[2 * i + 1];
        f.m.a[0]                     = FX_Mul(cs, x);
        f.m.a[1]                     = FX_Mul(sn, x);
        f.m.a[2]                     = 0;
        f.m.a[3]                     = FX_Mul(-sn, y);
        f.m.a[4]                     = FX_Mul(cs, y);
        f.m.a[5]                     = 0;
        f.m.a[6]                     = 0;
        f.m.a[7]                     = 0;
        f.m.a[8]                     = 0x1000;
        f.m.a[9]                     = f.t.x;
        f.m.a[10]                    = f.t.y;
        f.m.a[11]                    = f.t.z;
        *(volatile u32 *) 0x04000454 = 0;
        func_020cf52c((void *) (&f.m));
    } else {
        f.t.x = s->p1.x + s->emitterPosX - p->transX;
        f.t.y = s->p1.y + s->emitterPosY - obj->renderList->subList->desc->transY;
        f.t.z = s->p1.z + s->emitterPosZ - obj->renderList->subList->desc->transZ;
        func_020cbe9c((const VecFx32 *) &f.t, (const MtxFx43 *) mtx, (VecFx32 *) &f.t);
        i                            = (s32) s->rotation >> 4;
        sn                           = data_02109500[2 * i];
        cs                           = data_02109500[2 * i + 1];
        f.m.a[0]                     = FX_Mul(cs, x);
        f.m.a[1]                     = FX_Mul(sn, x);
        f.m.a[2]                     = 0;
        f.m.a[3]                     = FX_Mul(-sn, y);
        f.m.a[4]                     = FX_Mul(cs, y);
        f.m.a[5]                     = 0;
        f.m.a[6]                     = 0;
        f.m.a[7]                     = 0;
        f.m.a[8]                     = 0x1000;
        f.m.a[9]                     = f.t.x;
        f.m.a[10]                    = f.t.y;
        f.m.a[11]                    = f.t.z;
        *(volatile u32 *) 0x04000454 = 0;
        p                            = obj->renderList->subList->desc;
        qc                           = p->transZ;
        q8                           = p->transY;
        q4                           = p->transX;
        *(volatile u32 *) 0x04000470 = q4;
        *(volatile u32 *) 0x04000470 = q8;
        *(volatile u32 *) 0x04000470 = qc;
        func_020cf52c((void *) (&f.m));
    }

    v = ((c1 & 0x1f) * (c2 & 0x1f) >> 5) | ((((c1 & 0x3e0) * (c2 & 0x3e0)) >> 15) << 5) |
        ((((c1 & 0x7c00) * (c2 & 0x7c00)) >> 25) << 10);
    *(volatile u32 *) 0x04000480 = (u16) v;

    p = obj->renderList->subList->desc;
    func_0209c0f4(obj->renderList->texS, obj->renderList->texT, p->texS, p->texT);
}
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
