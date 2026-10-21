#include "engine.h"
#include "m2c.h"

M2C_UNK func_020645c4(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02078830(void);

s32 func_02078840(void) {
    s8 var_r0;

    var_r0 = (s8) func_020645c4(func_02078830(), 6, 0);
    if ((s32) var_r0 < 0xC) {
        var_r0 = 0xC;
    }
    return (s32) var_r0;
}
