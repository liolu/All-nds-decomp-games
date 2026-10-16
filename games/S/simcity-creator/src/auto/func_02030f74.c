#include "m2c.h"

M2C_UNK func_02007344(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0200791c(M2C_UNK);                     /* extern */
M2C_UNK func_02007ad8(s32);                         /* extern */
s32 func_02007b44();                                /* extern */

void func_02030f74(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02007344(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02007b44();
    func_0200791c(1);
    func_02007ad8(temp_r4);
}
