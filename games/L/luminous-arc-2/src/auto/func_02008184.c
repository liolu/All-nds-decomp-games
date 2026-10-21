#include "m2c.h"

s32 func_02008074(M2C_UNK);                         /* extern */
M2C_UNK func_02008244(M2C_UNK);                     /* extern */
s32 func_02008560();                                /* extern */
M2C_UNK func_02008600();                            /* extern */
s32 func_02008628();                                /* extern */
s32 func_02008670();                                /* extern */

s32 func_02008184(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02008670() == 0) {
        return 0;
    }
    temp_r0_3 = func_02008628();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02008560() > 0) {
        do {

        } while (func_02008074(0) != 0);
        temp_r0_2 = func_02008628();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02008244(1);
block_12:
    func_02008600();
    do {
        func_02008074(1);
        temp_r0 = func_02008628();
    } while (temp_r0 == 0);
    return temp_r0;
}
