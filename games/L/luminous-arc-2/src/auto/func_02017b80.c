#include "m2c.h"

s32 func_02017ba8();                                /* extern */
s32 func_02017bc0();                                /* extern */

s32 func_02017b80(void) {
    if ((func_02017bc0() != 0) && (func_02017ba8() == 0)) {
        return 1;
    }
    return 0;
}
