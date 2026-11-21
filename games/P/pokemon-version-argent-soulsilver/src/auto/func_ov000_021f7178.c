#include "m2c.h"
u8 *func_ov000_021f957c(void);
s32 func_ov000_021f4324(s32, s32, s32, s32, s32 *, s32);
s32 func_ov000_021f5b50(s32);
s32 func_ov000_021f7d0c(s32, s32);
s32 func_ov000_021ee33c(s32);
s32 func_ov000_021f7178(s32 mask) {
    s32 arrB[32];
    s32 arrA[32];
    s32 cntB;
    s32 cntA;
    s32 i;
    s32 k;
    u8 *p;
    cntB = 0;
    cntA = 0;
    i    = 1;
    for (; i <= func_ov000_021f957c()[0xd]; i++) {
        p = func_ov000_021f957c();
        if ((mask & (1 << p[i + 0x2d0])) != 0) {
            arrA[cntA] = ((s32 *) (func_ov000_021f957c() + 0xf4))[i];
            cntA++;
        } else {
            arrB[cntB] = ((s32 *) (func_ov000_021f957c() + 0xf4))[i];
            cntB++;
        }
    }
    for (k = 0; k < cntA; k++) {
        if (func_ov000_021f5b50(func_ov000_021f4324(0x10, arrA[k], 0, 0, arrB, cntB)) != 0) {
            return 0;
        }
    }
    func_ov000_021f957c()[0x1a8] = 2;
    for (k = 0; k < cntB; k++) {
        s32 r = func_ov000_021f7d0c(arrB[k], 0);
        if (r != 0xff) {
            func_ov000_021ee33c(r);
        }
    }
    func_ov000_021f957c()[0x1a8] = 0;
    return 1;
}
