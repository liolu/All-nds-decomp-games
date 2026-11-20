#include "m2c.h"

void *func_0204e5e8(s32, u16);                      /* extern */

void func_0205d5d0(void *arg0) {
    s32 var_r2;
    u16 *var_r3;
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        return;
    }
    temp_r0 = func_0204e5e8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20), M2C_FIELD(arg0, u16 *, 0x1C));
    var_r3  = M2C_FIELD(temp_r0, u16 **, 4);
    var_r2  = 0;
    if ((s32) M2C_FIELD(temp_r0, u16 *, 0) <= 0) {
        return;
    }
    do {
        var_r2 += 1;
        *var_r3 = (*var_r3 & ~0xC00) | 0x800;
        var_r3  = (u16 *) ((s8 *) var_r3 + 6);
    } while (var_r2 < (s32) M2C_FIELD(temp_r0, u16 *, 0));
}
