/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0200df44(M2C_UNK);                              /* extern */
M2C_UNK func_0200df74();                            /* extern */

s32 func_0200de7c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 & 1) {
        func_0200df74(arg0);
    }
    temp_r0 = arg1 & 2;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_0200df44(arg0);
}
