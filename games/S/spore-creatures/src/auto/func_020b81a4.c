#include "m2c.h"

s32 func_020b8094(M2C_UNK);                         /* extern */
M2C_UNK func_020b8264(M2C_UNK);                     /* extern */
s32 func_020b8580();                                /* extern */
M2C_UNK func_020b8620();                            /* extern */
s32 func_020b8648();                                /* extern */
s32 func_020b8690();                                /* extern */

s32 func_020b81a4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020b8690() == 0) {
        return 0;
    }
    temp_r0_3 = func_020b8648();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_020b8580() > 0) {
        do {

        } while (func_020b8094(0) != 0);
        temp_r0_2 = func_020b8648();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020b8264(1);
block_12:
    func_020b8620();
    do {
        func_020b8094(1);
        temp_r0 = func_020b8648();
    } while (temp_r0 == 0);
    return temp_r0;
}
