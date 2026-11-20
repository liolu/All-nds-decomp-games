#include "m2c.h"

s32 func_02065ba4(M2C_UNK);                         /* extern */
M2C_UNK func_02065d74(M2C_UNK);                     /* extern */
s32 func_02066090();                                /* extern */
M2C_UNK func_02066130();                            /* extern */
s32 func_02066158();                                /* extern */
s32 func_020661a0();                                /* extern */

s32 func_02065cb4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020661a0() == 0) {
        return 0;
    }
    temp_r0_3 = func_02066158();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02066090() > 0) {
        do {

        } while (func_02065ba4(0) != 0);
        temp_r0_2 = func_02066158();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02065d74(1);
block_12:
    func_02066130();
    do {
        func_02065ba4(1);
        temp_r0 = func_02066158();
    } while (temp_r0 == 0);
    return temp_r0;
}
