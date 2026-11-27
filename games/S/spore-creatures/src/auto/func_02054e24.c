#include "m2c.h"

s32 func_01ff80d8();                                /* extern */
s32 func_02019c88();                                /* extern */
s32 func_02019cd0();                                /* extern */
M2C_UNK func_02019d2c(s32, s32);                    /* extern */
M2C_UNK func_0203f3b4(void *);                      /* extern */
M2C_UNK func_02054ed8(void *, s32);                 /* extern */
M2C_UNK func_02055398(void *, s32);                 /* extern */
extern s32 data_027e05e8;

void func_02054e24(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x450);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x450) = (s32) (temp_r0 - 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x450) != 0) {
        return;
    }
    func_0203f3b4(arg0 + 0x33C);
    temp_r5 = func_02019cd0();
    func_0203f3b4(arg0 + 0x33C);
    temp_r0_2 = func_02019c88();
    if (!(data_027e05e8 & 0x30)) {
        if (temp_r0_2 == 1) {
            func_02054ed8(arg0, temp_r5);
        } else if (temp_r0_2 == 2) {
            func_02055398(arg0, temp_r5);
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0x454) != temp_r5) && (temp_r5 != 0xB229E3A1)) {
        func_02019d2c(func_01ff80d8(), temp_r5);
    }
    M2C_FIELD(arg0, s32 *, 0x454) = temp_r5;
    M2C_FIELD(arg0, s32 *, 0x450) = 0x1E;
}
