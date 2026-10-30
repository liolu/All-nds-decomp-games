#include "m2c.h"

s32 func_0201cd58();                                /* extern */
M2C_UNK func_0201cd88();                            /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020af4f0();                                /* extern */
M2C_UNK func_020af518();                            /* extern */

void func_02053248(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    var_r0 = func_020348ec(0x24);
    if (var_r0 != 0) {
        var_r0 = func_020af4f0();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    func_020af518();
    var_r0_2 = func_020348ec(0x24);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020af4f0();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_2;
    func_020af518();
    var_r0_3 = func_020348ec(0x10);
    if (var_r0_3 != 0) {
        var_r0_3 = func_0201cd58();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_3;
    func_0201cd88();
}
