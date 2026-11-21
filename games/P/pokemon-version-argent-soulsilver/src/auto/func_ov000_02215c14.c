#include "m2c.h"
s32 func_ov000_021ff94c(s32, s32, s32, s32);
s32 func_ov000_021ff6b4(s32);
void func_ov000_022122d8(void *, s32, s32);
s32 func_ov000_02215a50(void *);
s32 func_ov000_02215084(void *);
void func_ov000_02214150(void *);
s32 func_ov000_02215c14(u8 *arg0) {
    s32 var_r5;
    s32 temp_r0;
    s32 temp_r4;

    if (func_ov000_021ff6b4(*(s32 *) (arg0 + 0x4B0)) == 0) {
        return 0;
    }
    temp_r4 = *(s32 *) (arg0 + 0x80);
    temp_r0 = func_ov000_021ff94c(*(s32 *) (arg0 + 0x4B0), *(s32 *) (arg0 + 0x7C) + temp_r4, 0x1000 - temp_r4, 0);
    if ((u32) (temp_r0 + 1) <= 1U) {
        func_ov000_02214150(arg0);
        return 3;
    }
    var_r5                 = 0;
    *(s32 *) (arg0 + 0x80) = *(s32 *) (arg0 + 0x80) + temp_r0;
    if ((*(s32 *) arg0 == 2) || (*(s32 *) (arg0 + 0x5C8) > 0)) {
        func_ov000_022122d8(arg0 + 0x4BC, *(s32 *) (arg0 + 0x7C) + temp_r4, *(s32 *) (arg0 + 0x80) - temp_r4);
    }
    if (*(s32 *) arg0 == 3) {
        var_r5 = func_ov000_02215084(arg0);
    }
    if (var_r5 != 0) {
        return var_r5;
    }
    if ((*(s32 *) arg0 == 2) && (*(s32 *) (arg0 + 0x80) > 0)) {
        return func_ov000_02215a50(arg0);
    }
    return 0;
}
