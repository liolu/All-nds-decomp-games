#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern M2C_UNK data_0215de9c;

s32 func_0203aa8c(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02038e10();
    if ((u32) arg0 > (u32) M2C_FIELD(&data_0215de9c, u32 *, 4)) {
        if ((u32) (arg0 - M2C_FIELD(&data_0215de9c, u32 *, 4)) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (M2C_FIELD(&data_0215de9c, u32 *, 4) - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02038e24(temp_r0);
    return var_r4;
}
