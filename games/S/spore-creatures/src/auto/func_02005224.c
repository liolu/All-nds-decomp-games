#include "m2c.h"

s32 *func_0200512c(void *, s32);                    /* extern */
M2C_UNK func_020052cc();                            /* extern */
s32 func_020cf8ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_02005220;
extern M2C_UNK func_02005478;

void func_02005224(void *arg0) {
    s32 *temp_r4;

    func_020052cc(arg0);
    temp_r4  = func_0200512c(arg0, M2C_FIELD(arg0, s32 *, 4) - 1);
    *temp_r4 = func_020cf8ac(8, 0xC, 8, &func_02005478, &func_02005220);
}
