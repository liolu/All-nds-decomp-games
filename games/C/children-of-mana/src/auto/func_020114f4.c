/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e40c(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02011e1c;
extern M2C_UNK func_0201209c;

void func_020114f4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_r0                   = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 != 0) {
        func_0200e40c(temp_r0, 0xFC, 8, &func_0201209c);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0_2 == 0) {
        return;
    }
    func_0200e40c(temp_r0_2, 0x28, 8, &func_02011e1c);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
