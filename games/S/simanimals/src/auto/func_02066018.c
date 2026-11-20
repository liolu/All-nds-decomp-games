#include "engine.h"
#include "m2c.h"

M2C_UNK func_02064a3c(void);
void func_02064a50(M2C_UNK);

extern M2C_UNK *data_0208e9a0;

s32 func_02066018(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02064a3c();
    var_r4  = 0;
    var_r1  = data_0208e9a0;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02064a50(temp_r0);
    return var_r4;
}
