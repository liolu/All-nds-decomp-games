#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200ac70(void);
void func_0200ac80(void);
M2C_UNK func_0201ab14(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_0201ad14(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 != 1) {
        var_r4 = 0;
        if (func_0200ac70() != 0) {
            func_0200ac80();
        }
    }
    return func_0201ab14(var_r4, 0, 0, 1);
}
