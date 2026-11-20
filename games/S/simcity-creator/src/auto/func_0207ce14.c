#include "m2c.h"

u8 func_0207ce14(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x608);
    if (var_r0 > 0xC8) {
        var_r0 = 0xC8;
    }
    return (u8) var_r0;
}
