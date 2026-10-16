/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02068728();                                /* extern */
s32 func_02068770();                                /* extern */
M2C_UNK func_020687c8();                            /* extern */
s32 func_02068898(s32);                             /* extern */
M2C_UNK func_02068a5c(M2C_UNK);                     /* extern */
s32 func_02068d00(M2C_UNK);                         /* extern */

s32 func_02068c64(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_02068728() == 0) {
        return 0;
    }
    temp_r0_3 = func_02068770();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_02068898(temp_r0_4) > 0) {
        do {

        } while (func_02068d00(0) != 0);
        temp_r0_2 = func_02068770();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02068a5c(1);
block_12:
    func_020687c8();
    do {
        func_02068d00(1);
        temp_r0 = func_02068770();
    } while (temp_r0 == 0);
    return temp_r0;
}
