/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov013_02222aa4(u16);
s32 func_ov013_02222a7c(s32);
void func_ov013_022214cc(s32);
s32 func_ov013_02221c4c(u8 *, u8 *, s32 *, u8 *);

s32 func_ov013_02221a70(s32 arg0, u8 *arg1, s32 *arg2, u8 *arg3) {
    u8 *p;
    u8 *q;

    if (arg0 != 2) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    p = arg1 + 0x24;
    q = arg1 + 0xC;
    q += 0x10;
    if (func_ov013_02221c4c(arg3 + 0x10, q, arg2, arg3 + 0x10) < 0) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    if (p[0] != 7) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    if (func_ov013_02222aa4(*(u16 *) (p + 2)) == 0) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    if (func_ov013_02222a7c(*(s32 *) (p + 4)) == 0) {
        return 100;
    }
    if (func_ov013_02222a7c(*(s32 *) (p + 4)) == -2) {
        func_ov013_022214cc(0x14);
        return -1;
    }
    if (func_ov013_02222a7c(*(s32 *) (p + 4)) == -3) {
        func_ov013_022214cc(0x15);
        return -1;
    }
    func_ov013_022214cc(0x18);
    return -1;
}
