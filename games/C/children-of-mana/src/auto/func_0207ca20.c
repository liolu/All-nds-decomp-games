/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d0be4();                                /* extern */

s32 func_0207ca20(void) {
    s32 temp_r0;

    temp_r0 = func_020d0be4();
    if ((temp_r0 == 5) || (temp_r0 == 2)) {
        return 1;
    }
    return 0;
}
