#include "m2c.h"

s32 func_020d5604(M2C_UNK);                         /* extern */
M2C_UNK func_020d57d4(M2C_UNK);                     /* extern */
s32 func_020d5af0();                                /* extern */
M2C_UNK func_020d5b90();                            /* extern */
s32 func_020d5bb8();                                /* extern */
s32 func_020d5c00();                                /* extern */

s32 func_020d5714(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020d5c00() == 0) {
        return 0;
    }
    temp_r0_3 = func_020d5bb8();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_020d5af0() > 0) {
        do {

        } while (func_020d5604(0) != 0);
        temp_r0_2 = func_020d5bb8();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020d57d4(1);
block_12:
    func_020d5b90();
    do {
        func_020d5604(1);
        temp_r0 = func_020d5bb8();
    } while (temp_r0 == 0);
    return temp_r0;
}
