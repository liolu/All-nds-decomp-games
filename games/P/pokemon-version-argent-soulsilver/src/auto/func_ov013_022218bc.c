/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern s32 data_ov013_0224cff8;
extern s32 data_ov013_0224cfb8;

s32 func_ov013_02221c4c(s32, u8 *);
s32 func_ov013_02222aa4(u16);
s32 func_ov013_02222a7c(s32);
void func_ov013_022214cc(s32);
s32 func_ov013_02221c98(u8 *, s32 *);
s32 func_ov013_022220c4(s32);

s32 func_ov013_022218bc(s32 a0, u8 *a1, s32 *a2, s32 a3) {
    u8 *r7;
    u8 *r4;
    s32 r;
    u16 v;

    if (a0 != 0) {
        *a2 = *a2 + 1;
        return a0;
    }
    r7 = a1 + 0xC;
    r4 = a1 + 0x24;
    if (func_ov013_02221c4c(a3, r7 + 0x10) < 0) {
        *a2 = *a2 + 1;
        return a0;
    }
    v = *(u16 *) (r4 + 2);
    if (func_ov013_02222aa4(v) == 0) {
        *a2 = *a2 + 1;
        return a0;
    }
    if (r4[0] == 7) {
        if (func_ov013_02222a7c(*(s32 *) (r4 + 4)) == -2) {
            func_ov013_022214cc(0x14);
        } else if (func_ov013_02222a7c(*(s32 *) (r4 + 4)) == -3) {
            func_ov013_022214cc(0x15);
        } else {
            func_ov013_022214cc(0x18);
        }
        return ~0;
    }
    if (r4[0] != 1) {
        *a2 = *a2 + 1;
        return a0;
    }
    r = func_ov013_02221c98(r4 + 4, &data_ov013_0224cff8);
    if (r < 0) {
        if (r == -2) {
            func_ov013_022214cc(0x16);
            return ~0;
        }
        *a2 = *a2 + 1;
        return a0;
    }
    v                   = *(u16 *) (r7 + 0xC);
    data_ov013_0224cfb8 = func_ov013_022220c4(func_ov013_02222aa4(v));
    *a2                 = 0;
    return 1;
}
