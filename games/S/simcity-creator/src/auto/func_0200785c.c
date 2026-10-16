#include "m2c.h"

s32 func_0200774c(M2C_UNK);                         /* extern */
M2C_UNK func_0200791c(M2C_UNK);                     /* extern */
s32 func_02007c38();                                /* extern */
M2C_UNK func_02007cd8();                            /* extern */
s32 func_02007d00();                                /* extern */
s32 func_02007d48();                                /* extern */

s32 func_0200785c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02007d48() == 0) {
        return 0;
    }
    temp_r0_3 = func_02007d00();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02007c38() > 0) {
        do {

        } while (func_0200774c(0) != 0);
        temp_r0_2 = func_02007d00();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0200791c(1);
block_12:
    func_02007cd8();
    do {
        func_0200774c(1);
        temp_r0 = func_02007d00();
    } while (temp_r0 == 0);
    return temp_r0;
}
