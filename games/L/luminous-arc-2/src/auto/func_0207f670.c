#include "m2c.h"

M2C_UNK func_02018488(M2C_UNK *, s32);              /* extern */
s32 func_02018554(M2C_UNK *, void *, M2C_UNK);      /* extern */

void func_0207f670(void *arg0) {
    u8 sp0[1024];

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~1);
    func_02018488(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_02018554(sp0, arg0, 0x3C);
}
