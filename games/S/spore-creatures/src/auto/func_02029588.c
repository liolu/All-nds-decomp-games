#include "m2c.h"

M2C_UNK func_02000dc0(void *);                      /* extern */
M2C_UNK func_02000de0(void *);                      /* extern */
M2C_UNK func_02001438(void *);                      /* extern */
M2C_UNK func_02001468(void *);                      /* extern */
M2C_UNK func_020019d0(void *);                      /* extern */
M2C_UNK func_02001a54(void *);                      /* extern */
s32 func_02008bc4();                                /* extern */
M2C_UNK func_0202a274(void *);                      /* extern */
M2C_UNK func_0202e2d0();                            /* extern */
M2C_UNK func_0202e928(s32);                         /* extern */
M2C_UNK func_0202ed78(s32);                         /* extern */
s32 func_020334e0();                                /* extern */
M2C_UNK func_0203d34c();                            /* extern */
s32 func_02093480(s32);                             /* extern */

void *func_02029588(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;

    var_r0 = func_02093480(0x14A);
    if (var_r0 != 0) {
        var_r0 = func_020334e0();
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    temp_r0                   = func_02093480(0x4F2C);
    if (temp_r0 != 0) {
        func_0202e2d0();
        func_0202e928(temp_r0 + 0x2914);
        func_0202ed78(temp_r0 + 0x2E68);
    }
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    var_r0_2                  = func_02093480(0xA);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02008bc4();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    func_020019d0(arg0 + 0xC);
    func_02001438(arg0 + 0x540);
    func_02000dc0(arg0 + 0x54C);
    M2C_FIELD(arg0, s32 *, 0x568) = 0;
    M2C_FIELD(arg0, s32 *, 0x56C) = 0;
    M2C_FIELD(arg0, s8 *, 0x570)  = 0;
    M2C_FIELD(arg0, s8 *, 0x571)  = 1;
    M2C_FIELD(arg0, s8 *, 0x572)  = 0;
    M2C_FIELD(arg0, s8 *, 0x573)  = 0;
    M2C_FIELD(arg0, s8 *, 0x574)  = 0;
    M2C_FIELD(arg0, s8 *, 0x575)  = 1;
    M2C_FIELD(arg0, s8 *, 0x576)  = 0;
    func_0202a274(arg0);
    func_0203d34c();
    func_02001a54(arg0 + 0xC);
    func_02001468(arg0 + 0x540);
    func_02000de0(arg0 + 0x54C);
    return arg0;
}
