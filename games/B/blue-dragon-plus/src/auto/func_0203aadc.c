#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);

extern M2C_UNK *data_0215de9c;

s32 func_0203aadc(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02038e10();
    var_r4  = 0;
    var_r1  = data_0215de9c;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02038e24(temp_r0);
    return var_r4;
}
