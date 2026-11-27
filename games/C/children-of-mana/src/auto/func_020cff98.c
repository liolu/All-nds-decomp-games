/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */

void *func_020cff98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC00) = -1;
    M2C_FIELD(arg0, s32 *, 0xC04) = 0;
    M2C_FIELD(arg0, s8 *, 0xC08)  = 0;
    func_02001cc8(arg0, 0, 0xC00);
    return arg0;
}
