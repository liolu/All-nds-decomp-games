#include "m2c.h"

M2C_UNK func_02001004(M2C_UNK, s32 *, s32 *);       /* extern */

void func_0209bf78(M2C_UNK arg0, void *arg1) {
    s32 sp4;
    s32 sp0;

    sp0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), u16 *, 6) << 0xC;
    sp4 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), u16 *, 4) << 0xC;
    func_02001004(arg0, &sp4, &sp0);
}
