/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011c38();                                /* extern */
s32 func_02011eec(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020e5f1c(s32);                         /* extern */
M2C_UNK func_020e611c(s32, s32);                    /* extern */
M2C_UNK func_020e6c38(void *, M2C_UNK);             /* extern */

void func_020e6a78(void *arg0) {
    u32 temp_r0;
    u32 var_r5;

    var_r5  = -1;
    temp_r0 = func_02011c38();
    if (func_02011eec(temp_r0, 3) != 0) {
        var_r5 = 0;
    } else if (func_02011eec(temp_r0, 6) != 0) {
        var_r5 = 1;
    } else if (func_02011eec(temp_r0, 5) != 0) {
        var_r5 = 2;
    } else if (func_02011eec(temp_r0, 4) != 0) {
        var_r5 = 3;
    } else if (func_02011eec(temp_r0, 9) != 0) {
        var_r5 = 4;
    } else if (func_02011eec(temp_r0, 0xA) != 0) {
        var_r5 = 5;
    } else if (func_02011eec(temp_r0, 8) != 0) {
        var_r5 = 6;
    } else if (func_02011eec(temp_r0, 7) != 0) {
        var_r5 = 7;
    } else if (func_02011eec(temp_r0, 0xB) != 0) {
        var_r5 = 8;
    } else if (func_02011eec(temp_r0, 0xC) != 0) {
        var_r5 = 9;
    }
    if (var_r5 != -1) {
        func_020e611c(M2C_FIELD(arg0, s32 *, 8), var_r5);
        func_020e6c38(arg0, 3);
    }
    if (func_02011eec(temp_r0, 2) == 0) {
        return;
    }
    func_020e5f1c(M2C_FIELD(arg0, s32 *, 8));
    func_020e6c38(arg0, 5);
}
