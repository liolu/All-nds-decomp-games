#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern M2C_UNK data_0215de9c;

s32 func_0203aa60(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02038e10();
    if (M2C_FIELD(&data_0215de9c, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_0215de9c, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_0215de9c, s32 *, 0x20);
    }
    func_02038e24(temp_r0);
    return var_r4;
}
