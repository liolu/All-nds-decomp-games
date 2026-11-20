#include "m2c.h"

s32 func_02083a48();                                /* extern */
s32 func_0208546c();                                /* extern */
void *func_02090a40();                              /* extern */

s32 func_020886a8(void) {
    if (func_02083a48() != 0) {
        return 0;
    }
    if ((func_02090a40() == NULL) || (func_0208546c() != 5) || (M2C_FIELD(func_02090a40(), u8 *, 0x1A9) != 0)) {
        return 0;
    }
    return 1;
}
