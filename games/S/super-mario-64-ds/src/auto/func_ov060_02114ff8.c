/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov060_02115a30();                                /* extern */

void func_ov060_02114ff8(void *arg0) {
    if (func_ov060_02115a30() != 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    }
}
