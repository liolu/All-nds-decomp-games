#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern M2C_UNK data_02147ca0;

s32 func_0200846c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02006be0();
    if (M2C_FIELD(&data_02147ca0, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_02147ca0, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_02147ca0, s32 *, 0x20);
    }
    func_02006bf4(temp_r0);
    return var_r4;
}
