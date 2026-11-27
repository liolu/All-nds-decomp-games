/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206dfcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_util.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef long long s64;
typedef int s32;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
typedef struct {
    fx32 _00, _01, _02, _03, _10, _11, _12, _13, _20, _21, _22, _23, _30, _31, _32, _33;
} MtxFx44;
typedef struct NNSG3dGlb {
    u32 unk_000[2];
    MtxFx44 projMtx;
    u32 unk_048;
    MtxFx43 cameraMtx;
    u8 unk_07c[0x94 - 0x7c];
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u8 unk_0a0[0xbc - 0xa0];
    MtxFx33 prmBaseRot;
    VecFx32 unk_0e0;
    u8 unk_0ec[0xfc - 0xec];
    u32 flag;
} NNSG3dGlb;
extern void MTX_MultVec43(const VecFx32 *v, const MtxFx43 *m, VecFx32 *dst);
extern void func_02002ac0(fx32 d);
extern fx64 func_02002a64(void);
extern void NNS_G3dGlbGetViewPort(int *x1, int *y1, int *x2, int *y2);
extern NNSG3dGlb NNS_G3dGlb;
static inline fx32 Mul32x64c(fx32 v32, fx64 v64c) {
    fx64 tmp = v64c * v32 + 0x80000000LL;
    return (fx32) (tmp >> 32);
}
int NNS_G3dWorldPosToScrPos(const VecFx32 *world, int *px, int *py) {
    int ret;
    int x1;
    int dx;
    int y1;
    fx32 w;
    fx32 x;
    const MtxFx44 *proj;
    VecFx32 vec;
    int dy;
    int x2;
    fx64 inv;
    int y2;
    fx32 y;

    proj = &NNS_G3dGlb.projMtx;
    MTX_MultVec43(world, &NNS_G3dGlb.cameraMtx, &vec);
    {
        fx64 tw = (fx64) vec.x * proj->_03 + (fx64) vec.y * proj->_13 + (fx64) vec.z * proj->_23;
        w       = (fx32) (tw >> 12) + proj->_33;
    }
    func_02002ac0(w);
    {
        fx64 tx = (fx64) vec.x * proj->_00 + (fx64) vec.y * proj->_10 + (fx64) vec.z * proj->_20;
        fx64 ty = (fx64) vec.x * proj->_01 + (fx64) vec.y * proj->_11 + (fx64) vec.z * proj->_21;
        x       = (fx32) (tx >> 12) + proj->_30;
        y       = (fx32) (ty >> 12) + proj->_31;
    }
    inv = func_02002a64();
    x   = (Mul32x64c(x, inv) + 0x1000) / 2;
    y   = (Mul32x64c(y, inv) + 0x1000) / 2;

    ret = 0;
    if (x < 0 || y < 0 || x > 0x1000 || y > 0x1000) {
        ret = -1;
    }

    NNS_G3dGlbGetViewPort(&x1, &y1, &x2, &y2);
    dx  = x2 - x1;
    dy  = y2 - y1;
    *px = x1 + ((x * dx + 0x800) >> 12);
    *py = 191 - y1 - ((y * dy + 0x800) >> 12);
    return ret;
}
