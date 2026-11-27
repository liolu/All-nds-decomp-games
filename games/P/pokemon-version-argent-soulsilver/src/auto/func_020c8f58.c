#include "m2c.h"

M2C_UNK func_020d519c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_020d57d4(M2C_UNK);                     /* extern */
M2C_UNK func_020d5990(s32);                         /* extern */
s32 func_020d59fc();                                /* extern */

void func_020c8f58(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_020d519c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_020d59fc();
    func_020d57d4(1);
    func_020d5990(temp_r4);
}
