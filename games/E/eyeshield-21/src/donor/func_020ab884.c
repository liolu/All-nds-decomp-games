/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* mtx_inverse44 from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSystem/src/g3d/glbstate.c (license: none),
 * reused by tools/donor_match.py */
typedef signed long s32;
typedef signed long long int s64;
extern void func_020bfc68(const void *pSrc, void *pDest);
typedef s32 fx32;
typedef s64 fx64;
typedef s64 fx64c;
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
static inline fx32 FX32_CAST(s64 res) {
    return (fx32) res;
}
static inline fx32 FX_Mul32x64cInline(fx32 v32, fx64c v64c) {
    fx64c tmp = v64c * v32 + 0x80000000LL;
    return FX32_CAST(tmp >> 32);
}
extern fx64c func_020b7a70(fx32 denom);
extern void func_020b7598(register MtxFx44 *pDst);
static inline void MTX_Identity44(MtxFx44 *pDst) {
    func_020b7598(pDst);
}
static inline void MTX_Copy44(const MtxFx44 *pSrc, MtxFx44 *pDst) {
    func_020bfc68(pSrc, pDst);
}
int func_020ab884(const MtxFx44 *pSrc, MtxFx44 *pDst) {
    MtxFx44 gjm;
    int i, j, k;
    fx64c ww;
    fx32 w;

    MTX_Copy44(pSrc, &gjm);
    MTX_Identity44(pDst);

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

        ww = func_020b7a70(gjm.m[i][i]);
        for (j = 0; j < 4; ++j) {
            gjm.m[i][j]   = FX_Mul32x64cInline(gjm.m[i][j], ww);
            pDst->m[i][j] = FX_Mul32x64cInline(pDst->m[i][j], ww);
        }

        for (k = 0; k < 4; ++k) {
            if (k == i) {
                continue;
            }

            w = gjm.m[k][i];
            for (j = 0; j < 4; ++j) {
                gjm.m[k][j] -= (((fx64) w * gjm.m[i][j]) >> 12);
                pDst->m[k][j] -= (((fx64) w * pDst->m[i][j]) >> 12);
            }
        }
    }

    return 0;
}
