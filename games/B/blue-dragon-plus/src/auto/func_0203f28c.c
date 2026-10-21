#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern M2C_UNK data_0215fb2c;

s32 func_0203f28c(void) {
    s32 temp_r0;

    temp_r0 = func_02038e10();
    if (M2C_FIELD(&data_0215fb2c, s32 *, 0x1C) != 0) {
        func_02038e24(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_0215fb2c, s32 *, 0x1C) = 1;
    func_02038e24(temp_r0);
    return 1;
}
