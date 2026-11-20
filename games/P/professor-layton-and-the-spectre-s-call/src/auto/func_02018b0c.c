#include "m2c.h"

s32 func_02018a0c(M2C_UNK);                         /* extern */
M2C_UNK func_02018bcc(M2C_UNK);                     /* extern */
s32 func_02018ec8();                                /* extern */
M2C_UNK func_02018f6c();                            /* extern */
s32 func_02018f94();                                /* extern */
s32 func_02018fdc();                                /* extern */

s32 func_02018b0c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02018fdc() == 0) {
        return 0;
    }
    temp_r0_3 = func_02018f94();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02018ec8() > 0) {
        do {

        } while (func_02018a0c(0) != 0);
        temp_r0_2 = func_02018f94();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02018bcc(1);
block_12:
    func_02018f6c();
    do {
        func_02018a0c(1);
        temp_r0 = func_02018f94();
    } while (temp_r0 == 0);
    return temp_r0;
}
