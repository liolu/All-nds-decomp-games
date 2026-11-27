#include "m2c.h"

M2C_UNK func_02004e9c(void *);                      /* extern */
s32 *func_02005168(void *, u32);                    /* extern */
M2C_UNK func_020cfbbc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0200521c;

void *func_02004e10(void *arg0) {
    u32 var_r7;

    for (var_r7 = 0; var_r7 < (u32) M2C_FIELD(arg0, u32 *, 4); var_r7 += 1) {
        func_020cfbbc(*func_02005168(arg0, var_r7), 4, 8, &func_0200521c);
    }
    func_02004e9c(arg0);
    return arg0;
}
