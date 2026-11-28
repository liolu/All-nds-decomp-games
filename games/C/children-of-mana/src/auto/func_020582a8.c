/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020657d4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3_util.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef long long s64;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
typedef struct {
    s32 _00, _01, _02, _03;
    s32 _10, _11, _12, _13;
    s32 _20, _21, _22, _23;
    s32 _30, _31, _32, _33;
} UnkMtx44;
extern s64 func_02055de0(void);
extern void func_02055d68(s32 denom);
static inline void UnkDivAsyncFx(s32 numer, s32 denom) {
    (*(u64 *) 0x04000290) = (s64) numer << 32;
    (*(u64 *) 0x04000298) = (u32) denom;
}
static inline s32 UnkMul32x64c(s32 v32, s64 v64c) {
    s64 tmp = v64c * v32 + 0x80000000LL;
    return (s32) (tmp >> 32);
}
void func_020582a8(s32 t, s32 b, s32 l, s32 r, s32 n, s32 f, s32 scaleW, BOOL draw, UnkMtx44 *mtx) {
    s64 invLR, invTB, invNF;
    s32 m00, m11, m22, m30, m31, m32;
    vu32 *fifo;

    func_02055d68(r - l);
    if (draw) {
        (*(vu32 *) 0x04000440) = 0;
        fifo                   = &(*(vu32 *) 0x04000458);
    }
    if (mtx != 0) {
        mtx->_01 = 0;
        mtx->_02 = 0;
        mtx->_03 = 0;
        mtx->_10 = 0;
        mtx->_12 = 0;
        mtx->_13 = 0;
        mtx->_20 = 0;
        mtx->_21 = 0;
        mtx->_23 = 0;
        mtx->_33 = scaleW;
    }

    invLR = func_02055de0();
    UnkDivAsyncFx(0x1000, t - b);
    if (scaleW != 0x1000) {
        invLR = invLR * scaleW / 0x1000;
    }
    m00 = UnkMul32x64c(0x2000, invLR);
    if (draw) {
        *fifo = m00;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
    }
    if (mtx != 0) {
        mtx->_00 = m00;
    }

    invTB = func_02055de0();
    UnkDivAsyncFx(0x1000, n - f);
    if (scaleW != 0x1000) {
        invTB = invTB * scaleW / 0x1000;
    }
    m11 = UnkMul32x64c(0x2000, invTB);
    if (draw) {
        *fifo = m11;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
    }
    if (mtx != 0) {
        mtx->_11 = m11;
    }

    invNF = func_02055de0();
    if (scaleW != 0x1000) {
        invNF = invNF * scaleW / 0x1000;
    }
    m22 = UnkMul32x64c(0x2000, invNF);
    if (draw) {
        *fifo = m22;
        *fifo = 0;
    }
    if (mtx != 0) {
        mtx->_22 = m22;
    }

    m30 = UnkMul32x64c(-r - l, invLR);
    m31 = UnkMul32x64c(-t - b, invTB);
    m32 = UnkMul32x64c(f + n, invNF);
    if (draw) {
        *fifo = m30;
        *fifo = m31;
        *fifo = m32;
        *fifo = scaleW;
    }
    if (mtx != 0) {
        mtx->_30 = m30;
        mtx->_31 = m31;
        mtx->_32 = m32;
    }
}
