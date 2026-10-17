/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02034814(void *, M2C_UNK);               /* extern */

void func_0202ec30(void *arg0) {
    s32 var_r0;
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(func_02034814(arg0, 0), s32 *, 0x174));
    var_r1                       = M2C_FIELD(arg0, s32 *, 0x34);
    if (var_r1 <= -0x1000) {
        var_r1 = -0x1000;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = var_r1;
    var_r0                       = M2C_FIELD(arg0, s32 *, 0x34);
    if (var_r0 >= 0x1000) {
        var_r0 = 0x1000;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
}
