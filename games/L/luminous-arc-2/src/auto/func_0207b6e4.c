#include "engine.h"
#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200766c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207b748(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0207b9f4(M2C_UNK);

void func_0207b6e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;

    temp_r4 = func_0207b9f4(1);
    if (arg3 != 0) {
        func_0200766c(arg3, temp_r4 + 0x18, 0xA);
    } else {
        func_020075b0(temp_r4 + 0x18, 0, 0xA);
    }
    M2C_FIELD(temp_r4, s8 *, 0x22) = (s8) arg4;
    func_0207b748(arg0, arg1, arg2);
}
