#include "m2c.h"

s32 *func_020a6274(void *, u32);                    /* extern */
M2C_UNK func_020a644c(void *);                      /* extern */
M2C_UNK func_020cfbbc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020a63a8;

void *func_020a63e4(void *arg0) {
    u32 var_r7;

    for (var_r7 = 0; var_r7 < (u32) M2C_FIELD(arg0, u32 *, 4); var_r7 += 1) {
        func_020cfbbc(*func_020a6274(arg0, var_r7), 0x10, 8, &func_020a63a8);
    }
    func_020a644c(arg0);
    return arg0;
}
