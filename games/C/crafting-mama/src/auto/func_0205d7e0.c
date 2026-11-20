#include "m2c.h"

void *func_0204e5e8(s32, u16);                      /* extern */
M2C_UNK func_02051540(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK func_0205d870;

void func_0205d7e0(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r2;
    u16 *var_r3;
    void *temp_r1;
    void *var_r0;

    if (M2C_FIELD(arg0, s32 *, 4) & 0x800) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r3 != 0) {
        func_02051540(temp_r3 + 0x34, &func_0205d870, arg1);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r1 != NULL) {
        var_r0 = M2C_FIELD(temp_r1, void **, 0x30);
    } else {
        var_r0 = func_0204e5e8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x20), M2C_FIELD(arg0, u16 *, 0x1C));
    }
    var_r3 = M2C_FIELD(var_r0, u16 **, 4);
    var_r2 = 0;
    if ((s32) M2C_FIELD(var_r0, u16 *, 0) <= 0) {
        return;
    }
    do {
        var_r2 += 1;
        *var_r3 = (*var_r3 & ~0xC00) | (arg1 << 0xA);
        var_r3  = (u16 *) ((s8 *) var_r3 + 6);
    } while (var_r2 < (s32) M2C_FIELD(var_r0, u16 *, 0));
}
