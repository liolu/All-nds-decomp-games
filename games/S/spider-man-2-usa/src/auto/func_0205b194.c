/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205b1b4();                                /* extern */
s32 func_0205b1e0();                                /* extern */

s32 func_0205b194(void) {
    s32 temp_r4;

    temp_r4 = func_0205b1e0();
    return (0x100 - temp_r4) - func_0205b1b4();
}
