#include "m2c.h"

M2C_UNK func_02007558(s32, s32, M2C_UNK);           /* extern */
s32 func_020cd52c(M2C_UNK *);                       /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
extern M2C_UNK data_0210ee38;

void func_0206a1e8(void) {
    s32 temp_r0;

    temp_r0 = func_020cd52c(&data_0210ee38);
    func_02007558(temp_r0, 0x05000640, 0x20);
    func_020cd7d0(temp_r0);
}
