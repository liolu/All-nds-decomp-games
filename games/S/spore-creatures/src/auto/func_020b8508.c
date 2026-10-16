#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b6bd0(void);
void func_020b6be4(M2C_UNK);

extern M2C_UNK *data_020f1d40;

s32 func_020b8508(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020b6bd0();
    var_r4  = 0;
    var_r1  = data_020f1d40;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_020b6be4(temp_r0);
    return var_r4;
}
