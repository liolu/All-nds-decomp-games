/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02062c10();                                /* extern */
s32 func_02065120();                                /* extern */
M2C_UNK func_02065158();                            /* extern */
s32 func_02065228();                                /* extern */
M2C_UNK func_02065398(M2C_UNK);                     /* extern */
s32 func_0206559c(M2C_UNK);                         /* extern */

s32 func_02065500(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02062c10() != 0) {
        return 0;
    }
    temp_r0_3 = func_02065120();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_02065228() > 0) {
        do {

        } while (func_0206559c(0) != 0);
        temp_r0_2 = func_02065120();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02065398(1);
block_12:
    func_02065158();
    do {
        func_0206559c(1);
        temp_r0 = func_02065120();
    } while (temp_r0 == 0);
    return temp_r0;
}
