/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020149dc(M2C_UNK, M2C_UNK);
M2C_UNK func_02014ab0(M2C_UNK);

extern M2C_UNK data_0215b3d4;

void func_020125f4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02014ab0(arg1);
    temp_r0 = func_02014ab0(M2C_FIELD(&data_0215b3d4, s32 *, 0x64));
    if (temp_r4 != temp_r0) {
        func_020149dc(temp_r4, temp_r0);
    }
    M2C_FIELD(&data_0215b3d4, s32 *, 0x64) = arg1;
}
