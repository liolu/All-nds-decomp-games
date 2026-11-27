/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02040040(M2C_UNK, s32);                /* extern */
M2C_UNK func_020400d4(M2C_UNK, s32);                /* extern */

void func_0203fe28(M2C_UNK arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r1_2;

    if (arg1 != 0) {
        var_r1 = arg1 + 0xC4;
    } else {
        var_r1 = 0;
    }
    func_020400d4(arg0, var_r1);
    if (arg1 != 0) {
        var_r1_2 = arg1 + 0xE8;
    } else {
        var_r1_2 = 0;
    }
    func_02040040(arg0, var_r1_2);
}
