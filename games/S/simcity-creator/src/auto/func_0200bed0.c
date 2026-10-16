#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);

extern M2C_UNK data_020d2cac;

s32 func_0200bed0(void) {
    s32 temp_r0;

    temp_r0 = func_020066e0();
    if (M2C_FIELD(&data_020d2cac, s32 *, 0x1C) != 0) {
        func_020066f4(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_020d2cac, s32 *, 0x1C) = 1;
    func_020066f4(temp_r0);
    return 1;
}
