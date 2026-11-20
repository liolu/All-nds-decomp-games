#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b6bd0(void);
void func_020b6be4(M2C_UNK);

extern M2C_UNK data_020f1d40;

s32 func_020b848c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020b6bd0();
    if (M2C_FIELD(&data_020f1d40, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_020f1d40, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_020f1d40, s32 *, 0x20);
    }
    func_020b6be4(temp_r0);
    return var_r4;
}
