/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c910c();                                /* extern */
s32 func_020c9154();                                /* extern */
M2C_UNK func_020c91ac();                            /* extern */
s32 func_020c927c(s32);                             /* extern */
M2C_UNK func_020c9440(M2C_UNK);                     /* extern */
s32 func_020c96e4(M2C_UNK);                         /* extern */

s32 func_020c9648(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_020c910c() == 0) {
        return 0;
    }
    temp_r0_3 = func_020c9154();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_020c927c(temp_r0_4) > 0) {
        do {

        } while (func_020c96e4(0) != 0);
        temp_r0_2 = func_020c9154();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020c9440(1);
block_12:
    func_020c91ac();
    do {
        func_020c96e4(1);
        temp_r0 = func_020c9154();
    } while (temp_r0 == 0);
    return temp_r0;
}
