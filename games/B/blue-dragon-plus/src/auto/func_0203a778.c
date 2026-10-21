#include "m2c.h"

s32 func_0203a668(M2C_UNK);                         /* extern */
M2C_UNK func_0203a838(M2C_UNK);                     /* extern */
s32 func_0203ab54();                                /* extern */
M2C_UNK func_0203abf4();                            /* extern */
s32 func_0203ac1c();                                /* extern */
s32 func_0203ac64();                                /* extern */

s32 func_0203a778(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0203ac64() == 0) {
        return 0;
    }
    temp_r0_3 = func_0203ac1c();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0203ab54() > 0) {
        do {

        } while (func_0203a668(0) != 0);
        temp_r0_2 = func_0203ac1c();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0203a838(1);
block_12:
    func_0203abf4();
    do {
        func_0203a668(1);
        temp_r0 = func_0203ac1c();
    } while (temp_r0 == 0);
    return temp_r0;
}
