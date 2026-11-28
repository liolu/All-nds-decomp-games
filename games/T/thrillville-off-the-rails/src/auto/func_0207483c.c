#include "m2c.h"

M2C_UNK func_02076534(M2C_UNK, s32 *, M2C_UNK);     /* extern */

void func_0207483c(void *arg0) {
    s32 sp0;

    if (M2C_FIELD(arg0, s32 *, 8) & 1) {
        sp0 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 1);
        func_02076534(0x14, &sp0, 1);
    }
    M2C_FIELD(arg0, void **, 0) = (void *) (M2C_FIELD(arg0, void **, 0) + 2);
}
