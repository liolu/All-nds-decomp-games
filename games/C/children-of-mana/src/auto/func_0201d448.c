/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ca68(void *, M2C_UNK, s32, M2C_UNK); /* extern */

void func_0201d448(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_ip;

    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + arg1);
    temp_r3                      = M2C_FIELD(arg0, s32 *, 0xB4);
    if (temp_r3 < 0) {
        var_ip = 0;
    } else {
        var_ip = M2C_FIELD(arg0, s32 *, 0xAC);
        if (temp_r3 <= var_ip) {
            var_ip = temp_r3;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (s16) var_ip;
    if (arg2 == 0) {
        return;
    }
    func_0201ca68(arg0, 2, arg1, 0);
}
