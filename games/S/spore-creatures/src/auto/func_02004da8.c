#include "m2c.h"

M2C_UNK func_02004e78(void *);                      /* extern */
s32 *func_0200512c(void *, u32);                    /* extern */
M2C_UNK func_020cfbbc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02005220;

void *func_02004da8(void *arg0) {
    u32 var_r7;

    for (var_r7 = 0; var_r7 < (u32) M2C_FIELD(arg0, u32 *, 4); var_r7 += 1) {
        func_020cfbbc(*func_0200512c(arg0, var_r7), 0xC, 8, &func_02005220);
    }
    func_02004e78(arg0);
    return arg0;
}
