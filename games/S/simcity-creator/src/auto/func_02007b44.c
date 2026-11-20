#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);

extern M2C_UNK data_020d1000;

s32 func_02007b44(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020066e0();
    if (M2C_FIELD(&data_020d1000, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_020d1000, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_020d1000, s32 *, 0x20);
    }
    func_020066f4(temp_r0);
    return var_r4;
}
