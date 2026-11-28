#include "m2c.h"

M2C_UNK func_020211dc(M2C_UNK, s32, s32);           /* extern */
s32 func_02074300(M2C_UNK);                         /* extern */
M2C_UNK func_0207432c();                            /* extern */

void func_02063c6c(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_0207432c();
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    temp_r0                        = func_02074300(0x210);
    M2C_FIELD(arg0, s32 *, 0x1C)   = temp_r0;
    M2C_FIELD(arg0, void **, 0x18) = (void *) (temp_r0 + 0x200);
    func_020211dc(arg1, M2C_FIELD(arg0, s32 *, 0x1C), arg2 << 5);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0)   = 4;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 4)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 8)   = 0x200;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
}
