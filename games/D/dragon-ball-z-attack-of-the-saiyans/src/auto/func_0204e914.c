#include "m2c.h"

M2C_UNK func_02082bc8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02082c08(M2C_UNK *, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 func_0204e914(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp4[1024];
    s32 sp0;

    sp0 = -1;
    func_02082bc8(sp4, 0xEDB88320);
    func_02082c08(sp4, &sp0, arg0, arg1);
    return ~sp0;
}
