/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02025b38();                                /* extern */
s32 func_02025b80();                                /* extern */
M2C_UNK func_02025bd8();                            /* extern */
s32 func_02025ca8(s32);                             /* extern */
M2C_UNK func_02025e6c(M2C_UNK);                     /* extern */
s32 func_02026110(M2C_UNK);                         /* extern */

s32 func_02026074(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_02025b38() == 0) {
        return 0;
    }
    temp_r0_3 = func_02025b80();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_02025ca8(temp_r0_4) > 0) {
        do {

        } while (func_02026110(0) != 0);
        temp_r0_2 = func_02025b80();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02025e6c(1);
block_12:
    func_02025bd8();
    do {
        func_02026110(1);
        temp_r0 = func_02025b80();
    } while (temp_r0 == 0);
    return temp_r0;
}
