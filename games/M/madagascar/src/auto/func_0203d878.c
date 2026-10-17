#include "engine.h"
#include "m2c.h"

s32 func_0203d878(s32 arg0) {
    s32 *var_r3;
    s32 var_r0;

    var_r3 = M2C_FIELD(arg0, s32 **, 0x1F4);
    var_r0 = 0;
    if (*var_r3 == 0x3E7) {
        return 0;
    }
    do {
        var_r3 = (s32 *) ((s8 *) var_r3 + 0x24);
        var_r0 += 1;
    } while (*var_r3 != 0x3E7);
    return var_r0;
}
