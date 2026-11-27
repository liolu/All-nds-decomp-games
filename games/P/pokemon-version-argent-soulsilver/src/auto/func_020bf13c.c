/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02015924 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/nns/calls/func_02015924.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef signed long s32;
typedef long long s64;
typedef s32 fx32;
typedef s64 fx64;
typedef s64 fx64c;
typedef struct MtxFx44 {
    fx32 m[4][4];
} MtxFx44;
extern void func_020d4968(const void *src, void *dst);
extern void func_020cc044(MtxFx44 *dst);
extern fx64c func_020ccbc0(fx32 x);
static inline fx32 FX_Mul32x64c(fx32 x, fx64c y) {
    return (fx32) ((y * (fx64) x + 0x80000000LL) >> 32);
}
s32 func_020bf13c(const MtxFx44 *pSrc, MtxFx44 *pDst) {
    MtxFx44 gjm;
    int i, j, k;
    fx64c ww;
    fx32 w;

    func_020d4968(pSrc, &gjm);
    func_020cc044(pDst);

    for (i = 0; i < 4; ++i) {
        fx32 max = 0;
        int swp  = i;

        for (k = i; k < 4; k++) {
            fx32 ftmp = (gjm.m[k][i] < 0) ? -gjm.m[k][i] : gjm.m[k][i];

            if (ftmp > max) {
                max = ftmp;
                swp = k;
            }
        }

        if (max == 0) {
            return -1;
        }

        if (swp != i) {
            for (k = 0; k < 4; k++) {
                fx32 tmp;
                tmp           = gjm.m[i][k];
                gjm.m[i][k]   = gjm.m[swp][k];
                gjm.m[swp][k] = tmp;

                tmp             = pDst->m[i][k];
                pDst->m[i][k]   = pDst->m[swp][k];
                pDst->m[swp][k] = tmp;
            }
        }

        ww = func_020ccbc0(gjm.m[i][i]);
        for (j = 0; j < 4; ++j) {
            gjm.m[i][j]   = FX_Mul32x64c(gjm.m[i][j], ww);
            pDst->m[i][j] = FX_Mul32x64c(pDst->m[i][j], ww);
        }

        for (k = 0; k < 4; ++k) {
            if (k == i) {
                continue;
            }

            w = gjm.m[k][i];
            for (j = 0; j < 4; ++j) {
                gjm.m[k][j] -= (fx32) (((fx64) w * gjm.m[i][j]) >> 12);
                pDst->m[k][j] -= (fx32) (((fx64) w * pDst->m[i][j]) >> 12);
            }
        }
    }
    return 0;
}
