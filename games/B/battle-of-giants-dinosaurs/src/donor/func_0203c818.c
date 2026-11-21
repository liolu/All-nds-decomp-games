/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_RotAxis44 from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_mtx44.c (license: none), reused by
 * tools/donor_match.py */
typedef signed long s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
extern void func_0203c818(MtxFx44 *pDst, const VecFx32 *vec, fx32 sinVal, fx32 cosVal);
#pragma thumb off
void func_0203c818(MtxFx44 *pDst, const VecFx32 *vec, fx32 sinVal, fx32 cosVal) {
    fx64 t, ss, cc, xx, yy, zz;
    fx32 t01;
    fx32 s2;

    ((void) 0);
    ((void) 0);

    t  = (fx64) (((fx32) 0x0000000000001000L) - cosVal);
    ss = (fx64) sinVal;
    cc = (fx64) cosVal;
    xx = (fx64) vec->x;
    yy = (fx64) vec->y;
    zz = (fx64) vec->z;

    t01       = (fx32) ((xx * xx * t) >> (12 + 12));
    pDst->_00 = t01 + cosVal;

    t01       = (fx32) ((yy * yy * t) >> (12 + 12));
    pDst->_11 = t01 + cosVal;

    t01       = (fx32) ((zz * zz * t) >> (12 + 12));
    pDst->_22 = t01 + cosVal;

    t01       = (fx32) ((t * xx * yy) >> (12 + 12));
    s2        = (fx32) ((ss * zz) >> 12);
    pDst->_01 = t01 + s2;
    pDst->_10 = t01 - s2;

    t01       = (fx32) ((t * xx * zz) >> (12 + 12));
    s2        = (fx32) ((ss * yy) >> 12);
    pDst->_02 = t01 - s2;
    pDst->_20 = t01 + s2;

    t01       = (fx32) ((t * yy * zz) >> (12 + 12));
    s2        = (fx32) ((ss * xx) >> 12);
    pDst->_12 = t01 + s2;
    pDst->_21 = t01 - s2;

    pDst->_03 = pDst->_13 = pDst->_23 = pDst->_30 = pDst->_31 = pDst->_32 = 0;
    pDst->_33                                                             = ((fx32) 0x0000000000001000L);
}
