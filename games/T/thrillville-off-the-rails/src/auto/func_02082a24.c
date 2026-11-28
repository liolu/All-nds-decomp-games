#include "m2c.h"

M2C_UNK func_02025874(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02025e6c(M2C_UNK);                     /* extern */
M2C_UNK func_02025ddc(s32);                         /* extern */
s32 func_02025d9c();                                /* extern */
M2C_UNK func_0202738c(void *);                      /* extern */
M2C_UNK func_02027374(void *);                      /* extern */
M2C_UNK func_02082a98(void *);                      /* extern */

void func_02082a24(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02025874(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0202738c(arg0 + 8);
        func_02027374(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_02025d9c();
        func_02025e6c(1);
        func_02025ddc(temp_r5);
    }
    func_02082a98(arg0);
}
