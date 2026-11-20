/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020688b8();                                /* extern */
s32 func_020688f8();                                /* extern */

s32 func_02068898(void) {
    s32 temp_r4;

    temp_r4 = func_020688f8();
    return (0x100 - temp_r4) - func_020688b8();
}
