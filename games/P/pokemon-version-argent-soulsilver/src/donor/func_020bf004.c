/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G3dGlbBaseScale from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g3d_glb.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x, y, z;
} VecFx32;
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
typedef struct {
    u32 cmd0;
    u32 mtxmodeProj;
    MtxFx44 projMtx;
    u32 mtxmodePosVec;
    MtxFx43 cameraMtx;
    u32 cmd1;
    u32 lightVec[4];
    u32 cmd2;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmViewPort;
    u32 cmd3;
    u32 lightColor[4];
    u32 cmd4;
    MtxFx33 prmBaseRot;
    VecFx32 prmBaseTrans;
    VecFx32 prmBaseScale;
    u32 prmTexImageParam;
    u32 flag;
    MtxFx43 invCameraMtx;
    MtxFx43 wvMtx;
    MtxFx43 invWvMtx;
    u32 pad190[12];
    MtxFx44 invProjMtx;
    MtxFx44 invVpMtx;
    union {
        MtxFx33 viewFlipMtx;
        struct {
            VecFx32 camPos;
            VecFx32 camUp;
            VecFx32 camTarget;
        };
    };
} NNSG3dGlb;
extern NNSG3dGlb data_021da4bc;
extern void func_020bf004(const VecFx32 *pScale);
void func_020bf004(const VecFx32 *pScale) {
    if (pScale == 0) {
        return;
    }
    data_021da4bc.prmBaseScale = *pScale;
    data_021da4bc.flag &= ~0xa4u;
}
