/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c929c();                                /* extern */
s32 func_020c92dc();                                /* extern */

s32 func_020c927c(void) {
    s32 temp_r4;

    temp_r4 = func_020c92dc();
    return (0x100 - temp_r4) - func_020c929c();
}
