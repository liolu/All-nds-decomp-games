#include "m2c.h"

M2C_UNK func_0203f730(void *, s32);                 /* extern */
M2C_UNK func_020772ec(void *, s32, M2C_UNK);        /* extern */
s32 func_02077328(void *, s32);                     /* extern */
void *func_0207b770(s32);                           /* extern */

void func_0203f698(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r6;
    void *temp_r0_2;

    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
    if (temp_r0 != 1) {
        return;
    }
    temp_r5   = M2C_FIELD(arg0, s32 *, 0x30);
    temp_r0_2 = func_0207b770(temp_r5);
    M2C_FIELD(arg0, void **, 0x24) =
        (void *) (temp_r0_2 + M2C_FIELD((temp_r0_2 + M2C_FIELD(temp_r0_2, u16 *, 0xE)), s32 *, 0xC));
    func_0203f730(arg0, temp_r5);
    var_r6 = 0;
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 *, 0x18) <= 0) {
        return;
    }
    do {
        if (func_02077328(M2C_FIELD(arg0, void **, 0x24), var_r6) != 0) {
            func_020772ec(M2C_FIELD(arg0, void **, 0x24), var_r6, 0xF);
        }
        var_r6 += 1;
    } while (var_r6 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u8 *, 0x18));
}
