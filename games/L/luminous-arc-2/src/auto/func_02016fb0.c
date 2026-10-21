#include "m2c.h"

s32 func_02006be0();

M2C_UNK func_02006bf4(s32);

s32 MBi_CallReset();

s32 MBi_IsTaskAvailable();

M2C_UNK MBi_EndTaskThread(M2C_UNK *);

extern M2C_UNK data_02150880;

extern M2C_UNK MBi_OnReset;

M2C_UNK func_02006f34();

M2C_UNK func_02016f1c();

void func_02016fb0(void) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    if (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 0xC), s32 *, 0x1320) == 0) {
        func_02006f34();
    }
    func_02016f1c();
    func_02006bf4(temp_r4);
}
