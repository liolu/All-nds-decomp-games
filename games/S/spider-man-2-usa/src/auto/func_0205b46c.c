/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020573d8();                                /* extern */
s32 func_0205b08c();                                /* extern */
M2C_UNK func_0205b0c4();                            /* extern */
s32 func_0205b194();                                /* extern */
M2C_UNK func_0205b304(M2C_UNK);                     /* extern */
s32 func_0205b508(M2C_UNK);                         /* extern */

s32 func_0205b46c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020573d8() != 0) {
        return 0;
    }
    temp_r0_3 = func_0205b08c();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_0205b194() > 0) {
        do {

        } while (func_0205b508(0) != 0);
        temp_r0_2 = func_0205b08c();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0205b304(1);
block_12:
    func_0205b0c4();
    do {
        func_0205b508(1);
        temp_r0 = func_0205b08c();
    } while (temp_r0 == 0);
    return temp_r0;
}
