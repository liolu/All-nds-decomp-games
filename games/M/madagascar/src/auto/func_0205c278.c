/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_0205b870();                               /* extern */
s32 func_0205c050(s32, M2C_UNK);                    /* extern */

s32 func_0205c278(s32 arg0, M2C_UNK arg1) {
    s32 *temp_r0;

    temp_r0 = func_0205b870();
    if (temp_r0 == NULL) {
        return 0;
    }
    if (func_0205c050(*temp_r0, arg1) != 0) {
        return 1;
    }
    return 0;
}
