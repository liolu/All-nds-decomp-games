#include "m2c.h"

extern s32 func_ov000_021ff6b4(u8 *p);
extern s32 func_ov000_021ff960(u8 *p, u8 *buf, s32 max, s32 zero, u32 *pa, u32 *pn);
extern void func_ov000_02211aa8(u8 *o, u8 *buf, u32 idx, u32 *pa);
extern u8 data_ov000_0221b8f0[];

void func_ov000_02210b1c(u8 *o) {
    u32 a[2];
    u32 n = 8;
    s32 r;

    if (*(u32 *) (o + 0xc4) == 0) {
        return;
    }
    if (func_ov000_021ff6b4(*(u8 **) o) == 0) {
        return;
    }
    do {
        r = func_ov000_021ff960(*(u8 **) o, data_ov000_0221b8f0, 0xff, 0, &a[0], &n);
        if (r != -1) {
            data_ov000_0221b8f0[r] = 0;
            func_ov000_02211aa8(o, data_ov000_0221b8f0, r, &a[0]);
        }
    } while (func_ov000_021ff6b4(*(u8 **) o) != 0);
}
