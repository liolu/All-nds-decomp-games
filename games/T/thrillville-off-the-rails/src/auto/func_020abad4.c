#include "m2c.h"

M2C_UNK func_0203d810(M2C_UNK *, void *, s32 *, s32 *); /* extern */

void *func_020abad4(void *arg0) {
    s32 sp8;
    s32 sp4;
    M2C_UNK sp0;

    sp8 = arg0 + 4;
    sp4 = M2C_FIELD(arg0, s32 *, 8);
    func_0203d810(&sp0, arg0, &sp4, &sp8);
    return arg0;
}
