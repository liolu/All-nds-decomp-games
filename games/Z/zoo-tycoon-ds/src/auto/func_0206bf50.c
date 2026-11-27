/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206a0dc();                                /* extern */
s32 func_0206ba7c();                                /* extern */
M2C_UNK func_0206bad4();                            /* extern */
s32 func_0206bba4();                                /* extern */
M2C_UNK func_0206bd68(M2C_UNK);                     /* extern */
s32 func_0206bfec(M2C_UNK);                         /* extern */

s32 func_0206bf50(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0206a0dc() != 0) {
        return 0;
    }
    temp_r0_3 = func_0206ba7c();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_0206bba4() > 0) {
        do {

        } while (func_0206bfec(0) != 0);
        temp_r0_2 = func_0206ba7c();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0206bd68(1);
block_12:
    func_0206bad4();
    do {
        func_0206bfec(1);
        temp_r0 = func_0206ba7c();
    } while (temp_r0 == 0);
    return temp_r0;
}
