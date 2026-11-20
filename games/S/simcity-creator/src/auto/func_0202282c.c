#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_0202282c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s16 *, 0x40C) >= 0x80) {
        return 0;
    }
    func_02006ee8(arg0 + 0x410, 0, 0x24);
    return 1;
}
