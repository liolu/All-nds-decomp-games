#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern M2C_UNK data_02147ca0;

s32 func_02008524(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02006be0();
    var_r4  = 0;
    var_r1  = M2C_FIELD(&data_02147ca0, M2C_UNK **, 8);
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02006bf4(temp_r0);
    return var_r4;
}
