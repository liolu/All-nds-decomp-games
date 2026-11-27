/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_020100ac();                             /* extern */

s32 func_0200ffb0(void) {
    void **temp_r0;

    temp_r0 = func_020100ac();
    if (temp_r0 == NULL) {
        return 0;
    }
    return M2C_FIELD(*temp_r0, s32(**)(), 0x10)(temp_r0);
}
