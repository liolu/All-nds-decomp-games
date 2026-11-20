#include "m2c.h"

M2C_UNK func_0208672c();                            /* extern */

s32 func_020867d0(void *arg0) {
    func_0208672c();
    if ((M2C_FIELD(arg0, s32 *, 0xC) == 1) && (M2C_FIELD(arg0, s32 *, 0x10) == 1)) {
        return 1;
    }
    return 0;
}
