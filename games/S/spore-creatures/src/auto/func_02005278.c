#include "m2c.h"

s32 *func_02005168(void *, s32);                    /* extern */
M2C_UNK func_02005394();                            /* extern */
s32 func_020cf8ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0200521c;
extern M2C_UNK func_02005474;

void func_02005278(void *arg0) {
    s32 *temp_r4;

    func_02005394(arg0);
    temp_r4  = func_02005168(arg0, M2C_FIELD(arg0, s32 *, 4) - 1);
    *temp_r4 = func_020cf8ac(8, 4, 8, &func_02005474, &func_0200521c);
}
