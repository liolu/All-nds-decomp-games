/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_UpdateSubC from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
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
extern void func_02098c58(struct RigObject *o);
extern void func_02098b70(struct RigObject *o);
extern void func_02098af4(struct RigObject *o);
extern void func_02098c58(struct RigObject *o);
extern void func_02098b70(struct RigObject *o);
extern void func_02098af4(struct RigObject *o);
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
void func_02098c58(struct RigObject *o);
void func_02098b70(struct RigObject *o);
void func_02098af4(struct RigObject *o) {
    struct RigDescriptor *v = o->renderList->subList->desc;

    if (v->flags.z.b21) {
        func_02098b70(o);
        if (v->flags.z.b22) {
            return;
        }
        func_02098c58(o);
        return;
    }
    if (v->flags.z.b22 == 0) {
        func_02098c58(o);
    }
    func_02098b70(o);
}
