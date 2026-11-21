#include "m2c.h"

s32 func_ov000_02207df0(void **, s32, s32 *);
void func_ov000_0220a8b0(void **, void *);
s32 func_ov000_022010ac(void **, s32 *);
void func_ov000_021ec3f8(s32);
s32 func_ov000_02207fd8(s32 *);
void func_ov000_02207e60(void **, s32 *);
extern u8 data_ov000_0221831c[];

s32 func_ov000_02201ccc(void **arg0, s32 arg1) {
    s32 *sp0;
    u8 *r5;
    s32 r;

    r5 = (u8 *) *arg0;
    if (func_ov000_02207df0(arg0, arg1, (s32 *) &sp0) == 0) {
        func_ov000_0220a8b0(arg0, data_ov000_0221831c);
        return 2;
    }
    if (sp0[4] == 0) {
        func_ov000_0220a8b0(arg0, data_ov000_0221831c);
        return 2;
    }
    r = func_ov000_022010ac(arg0, sp0);
    if (r != 0) {
        return r;
    }
    sp0[5] = sp0[5] - 1;
    if (*(s32 *) (r5 + 0x100) == 0 && sp0[5] <= 0) {
        func_ov000_021ec3f8(sp0[4]);
        sp0[4] = 0;
        if (func_ov000_02207fd8(sp0) != 0) {
            func_ov000_02207e60(arg0, sp0);
        }
    }
    return 0;
}
