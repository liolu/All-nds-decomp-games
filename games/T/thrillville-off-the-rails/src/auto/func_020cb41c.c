#include "m2c.h"

s32 func_0207d9e0(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0209cab0(s32, s32 *);                      /* extern */
M2C_UNK func_020ca3d0(M2C_UNK, M2C_UNK *, s32 *);   /* extern */
s32 func_ov003_02137758(s32);                       /* extern */
extern M2C_UNK data_020e786c;
extern M2C_UNK data_020e7874;
extern s32 data_02103ad0;
extern M2C_UNK func_020cb4f0;

void func_020cb41c(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    s32 sp4;
    s32 sp0;
    s32 temp_r0;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_r1;
    s32 var_r2;

    sp4     = func_0207d9e0(&data_020e786c, 0);
    temp_r8 = func_0209cab0(data_02103ad0 + 0xB4, &sp4);
    sp0     = func_0207d9e0(&data_020e7874, 0);
    temp_r9 = func_0209cab0(data_02103ad0 + 0xB4, &sp0);
    temp_r0 = func_ov003_02137758(arg1);
    if (temp_r8 == arg1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (temp_r9 == arg1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if ((var_r1 == 0) && (var_r2 == 0)) {
        return;
    }
    sp8 = var_r1 | (var_r2 * 2) | (arg2 * 4) | (arg3 * 8) | (temp_r0 * 0x10);
    func_020ca3d0(arg0, &func_020cb4f0, &sp8);
}
