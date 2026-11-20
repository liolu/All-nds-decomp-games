/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205ed78(s32, s32);                        /* extern */

void func_0201c058(void *arg0, void *arg1) {
    s32 var_r3;
    s32 var_r4;

    var_r3 = 0 - M2C_FIELD(arg0, s32 *, 0);
    var_r4 = 0 - M2C_FIELD(arg0, s32 *, 8);
    if (var_r3 < -19865) {
        var_r3 = -0x4D99;
    } else if (var_r3 > 0x4D99) {
        var_r3 = 0x4D99;
    }
    if (var_r4 < -19865) {
        var_r4 = -0x4D99;
    } else if (var_r4 > 0x4D99) {
        var_r4 = 0x4D99;
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((func_0205ed78(var_r3 * 0x50, 0x4D99) >> 0xC) + 0x80);
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((func_0205ed78(var_r4 * 0x50, 0x4D99) >> 0xC) + 0x60);
}
