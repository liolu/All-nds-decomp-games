#include "m2c.h"

s32 func_0201eec0(M2C_UNK);                         /* extern */
M2C_UNK func_0201f080(M2C_UNK);                     /* extern */
s32 func_0201f37c();                                /* extern */
M2C_UNK func_0201f420();                            /* extern */
s32 func_0201f448();                                /* extern */
s32 func_0201f490();                                /* extern */

s32 func_0201efc0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0201f490() == 0) {
        return 0;
    }
    temp_r0_3 = func_0201f448();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0201f37c() > 0) {
        do {

        } while (func_0201eec0(0) != 0);
        temp_r0_2 = func_0201f448();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0201f080(1);
block_12:
    func_0201f420();
    do {
        func_0201eec0(1);
        temp_r0 = func_0201f448();
    } while (temp_r0 == 0);
    return temp_r0;
}
