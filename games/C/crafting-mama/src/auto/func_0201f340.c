#include "engine.h"
#include "m2c.h"

M2C_UNK func_02019d04(void);
void func_02019d18(M2C_UNK);

extern M2C_UNK data_02094504;

s32 func_0201f340(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02019d04();
    var_r4  = 0;
    var_r1  = M2C_FIELD(&data_02094504, M2C_UNK **, 8);
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02019d18(temp_r0);
    return var_r4;
}
