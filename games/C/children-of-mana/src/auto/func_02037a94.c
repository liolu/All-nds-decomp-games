/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201c374(M2C_UNK);                         /* extern */
s32 func_0201c394();                                /* extern */

s32 func_02037a94(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0201c394();
    if ((s32) ((s32) (temp_r4 * 0x64) / func_0201c374(arg0)) <= 0x21) {
        return 1;
    }
    return 0;
}
