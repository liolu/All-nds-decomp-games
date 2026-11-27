#include "m2c.h"

M2C_UNK func_0200c3f0();                            /* extern */
extern void *data_020d1d24;

void func_02044d04(void) {
    if (M2C_FIELD(data_020d1d24, s32 *, 0x4240) != 0) {
        func_0200c3f0();
        M2C_FIELD(data_020d1d24, s32 *, 0x4240)                         = 0;
        M2C_FIELD(M2C_FIELD(data_020d1d24, void **, 0x30), s32 *, 0x7C) = 0;
    }
    M2C_FIELD(data_020d1d24, s8 *, 0x423C) = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x423D) = 0;
}
