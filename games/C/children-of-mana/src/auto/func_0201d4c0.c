/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ca68(void *, M2C_UNK, s32, M2C_UNK); /* extern */

void func_0201d4c0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r3;

    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) + arg1);
    temp_r1                      = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r1 < 0) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(arg0, s32 *, 0xA8);
        if (temp_r1 <= var_r3) {
            var_r3 = temp_r1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (s16) var_r3;
    if (arg2 == 0) {
        return;
    }
    func_0201ca68(arg0, 0, arg1, 0);
}
