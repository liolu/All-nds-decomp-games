#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

extern M2C_UNK *data_02034e24;

s32 func_02018e50(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0201732c();
    var_r4  = 0;
    var_r1  = data_02034e24;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02017340(temp_r0);
    return var_r4;
}
