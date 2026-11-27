/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020638a8();                                /* extern */
s32 func_020638e8();                                /* extern */

s32 func_02063888(void) {
    s32 temp_r4;

    temp_r4 = func_020638e8();
    return (0x100 - temp_r4) - func_020638a8();
}
