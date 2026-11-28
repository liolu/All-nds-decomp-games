#include "m2c.h"

M2C_UNK func_02025874(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02025e6c(M2C_UNK);                     /* extern */
M2C_UNK func_02025ddc(s32);                         /* extern */
s32 func_02025d9c();                                /* extern */

void func_02082b88(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02025874(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02025d9c();
    func_02025e6c(1);
    func_02025ddc(temp_r4);
}
