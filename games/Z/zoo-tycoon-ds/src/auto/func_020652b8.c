/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02063c98();                                /* extern */
M2C_UNK func_020650b4();                            /* extern */

s32 func_020652b8(void) {
    s32 temp_r0;

    temp_r0 = func_02063c98();
    if (temp_r0 != 0) {
        func_020650b4();
    }
    return temp_r0;
}
