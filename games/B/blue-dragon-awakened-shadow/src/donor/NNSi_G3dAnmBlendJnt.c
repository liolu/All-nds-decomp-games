/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G3dAnmBlendJnt from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g3d_anm.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
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
typedef struct NNSG3dJntAnmResult {
    u32 flag;
    fx32 scale[3];
    fx32 scaleEx0[3];
    fx32 scaleEx1[3];
    fx32 rot[3][3];
    fx32 trans[3];
} NNSG3dJntAnmResult;
struct NNSG3dAnmObj;
typedef void (*NNSG3dAnmObjFunc)(void *result, const struct NNSG3dAnmObj *anmObj, u32 dataIdx);
typedef struct NNSG3dAnmFmtHeader {
    u8 category0;
    u8 dummy_;
    u16 category1;
} NNSG3dAnmFmtHeader;
typedef struct NNSG3dAnmObj {
    fx32 frame;
    fx32 ratio;
    const void *resAnm;
    NNSG3dAnmObjFunc funcAnm;
    struct NNSG3dAnmObj *next;
    const void *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
} NNSG3dAnmObj;
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
extern fx32 FX_Div(fx32 numer, fx32 denom);
extern fx32 FX_Inv(fx32 denom);
extern fx64 FX_InvFx64c(fx32 denom);
extern fx32 FX_Sqrt(fx32 x);
extern fx32 FX_InvSqrt(fx32 x);
extern u64 FX_GetDivResultFx64c(void);
extern s32 FX_GetDivResult(void);
extern void FX_InvAsync(fx32 denom);
extern void FX_SqrtAsync(fx32 x);
extern fx32 FX_GetSqrtResult(void);
extern void FX_DivAsync(s32 numer, s32 denom);
extern s32 FX_DivS32(s32 numer, s32 denom);
extern fx32 FX_ModS32(fx32 a, fx32 b);
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
extern int NNSi_G3dAnmBlendMat(void *pResult, const NNSG3dAnmObj *pAnmObj, u32 matIdx);
extern void blendScaleVec_(volatile s32 *dst, const s32 *src, s32 weight, int isOne);
extern int NNSi_G3dAnmBlendJnt(NNSG3dJntAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 jntIdx);
extern int NNSi_G3dAnmBlendVis(u32 *pResult, const NNSG3dAnmObj *pAnmObj, u32 nodeIdx);
int NNSi_G3dAnmBlendMat(void *pResult, const NNSG3dAnmObj *pAnmObj, u32 matIdx);
void blendScaleVec_(volatile s32 *dst, const s32 *src, s32 weight, int isOne);
int NNSi_G3dAnmBlendJnt(NNSG3dJntAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 jntIdx) {
    NNSG3dJntAnmResult sample;
    s32 firstRow0[3];
    s32 firstRow2[3];
    s32 totalRatio;
    int numSampled;
    const NNSG3dAnmObj *last;
    const NNSG3dAnmObj *cur;
    int numLive;
    s32 weight;
    u16 mapData;

    if (pAnmObj == 0) {
        return 0;
    }
    if (pAnmObj->next == 0) {
        if (jntIdx < pAnmObj->numMapData) {
            mapData = pAnmObj->mapData[jntIdx];
            if ((mapData & 0x300) == 0x100) {
                if (pAnmObj->funcAnm == 0) {
                    return 0;
                }
                pAnmObj->funcAnm(pResult, pAnmObj, mapData & 0xff);
                return 1;
            }
            return 0;
        }
        return 0;
    }

    totalRatio = 0;
    numLive    = 0;
    numSampled = 0;
    cur        = pAnmObj;
    do {
        if (jntIdx < cur->numMapData && (cur->mapData[jntIdx] & 0x300) == 0x100) {
            if (cur->ratio > 0x1000) {
                totalRatio += 0x1000;
            } else if (cur->ratio > 0) {
                totalRatio += cur->ratio;
            }
            last = cur;
            numLive++;
        }
        cur = cur->next;
    } while (cur != 0);

    if (totalRatio == 0) {
        return 0;
    }
    if (numLive == 1) {
        mapData = last->mapData[jntIdx];
        if (last->funcAnm == 0) {
            return 0;
        }
        last->funcAnm(pResult, last, mapData & 0xff);
        return 1;
    }

    MIi_CpuClearFast(0, pResult, sizeof(NNSG3dJntAnmResult));
    pResult->flag = -1;

    cur = pAnmObj;
    do {
        if (jntIdx < cur->numMapData && (cur->mapData[jntIdx] & 0x300) == 0x100 && cur->ratio > 0 && cur->funcAnm != 0) {
            cur->funcAnm(&sample, cur, cur->mapData[jntIdx] & 0xff);
            if (numSampled == 0) {
                MIi_CpuCopy32(sample.rot[0], firstRow0, 0xc);
                MIi_CpuCopy32(sample.rot[2], firstRow2, 0xc);
            }
            if (totalRatio == 0x1000) {
                weight = cur->ratio;
            } else {
                weight = FX_Div(cur->ratio, totalRatio);
            }
            blendScaleVec_(pResult->scale, sample.scale, weight, sample.flag & 0x01);
            blendScaleVec_(pResult->scaleEx0, sample.scaleEx0, weight, sample.flag & 0x08);
            blendScaleVec_(pResult->scaleEx1, sample.scaleEx1, weight, sample.flag & 0x10);
            if (!(sample.flag & 0x04)) {
                pResult->trans[0] += (s32) (((long long) weight * sample.trans[0]) >> 12);
                pResult->trans[1] += (s32) (((long long) weight * sample.trans[1]) >> 12);
                pResult->trans[2] += (s32) (((long long) weight * sample.trans[2]) >> 12);
            }
            if (!(sample.flag & 0x02)) {
                pResult->rot[0][0] += (weight * sample.rot[0][0]) >> 12;
                pResult->rot[0][1] += (weight * sample.rot[0][1]) >> 12;
                pResult->rot[0][2] += (weight * sample.rot[0][2]) >> 12;
                pResult->rot[1][0] += (weight * sample.rot[1][0]) >> 12;
                pResult->rot[1][1] += (weight * sample.rot[1][1]) >> 12;
                pResult->rot[1][2] += (weight * sample.rot[1][2]) >> 12;
            } else {
                pResult->rot[0][0] += weight;
                pResult->rot[1][1] += weight;
            }
            pResult->flag &= sample.flag;
        }
        cur = cur->next;
        numSampled++;
    } while (cur != 0);

    VEC_CrossProduct((const VecFx32 *) (pResult->rot[0]), (const VecFx32 *) (pResult->rot[1]), (VecFx32 *) (pResult->rot[2]));
    if (pResult->rot[0][0] == 0 && pResult->rot[0][1] == 0 && pResult->rot[0][2] == 0) {
        MIi_CpuCopy32(firstRow0, pResult->rot[0], 0xc);
    } else {
        VEC_Normalize((const VecFx32 *) (pResult->rot[0]), (VecFx32 *) (pResult->rot[0]));
    }
    if (pResult->rot[2][0] == 0 && pResult->rot[2][1] == 0 && pResult->rot[2][2] == 0) {
        MIi_CpuCopy32(firstRow2, pResult->rot[2], 0xc);
    } else {
        VEC_Normalize((const VecFx32 *) (pResult->rot[2]), (VecFx32 *) (pResult->rot[2]));
    }
    VEC_CrossProduct((const VecFx32 *) (pResult->rot[2]), (const VecFx32 *) (pResult->rot[0]), (VecFx32 *) (pResult->rot[1]));
    return 1;
}
int NNSi_G3dAnmBlendVis(u32 *pResult, const NNSG3dAnmObj *pAnmObj, u32 nodeIdx);
