#include "m2c.h"

M2C_UNK func_020b7c8c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_020b8264(M2C_UNK);                     /* extern */
M2C_UNK func_020b8420(s32);                         /* extern */
s32 func_020b848c();                                /* extern */
M2C_UNK func_020bcbc8(void *);                      /* extern */
M2C_UNK func_020bcbe0(void *);                      /* extern */
M2C_UNK func_0208a434(void *);                      /* extern */

void func_0208a3c0(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020b7c8c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020bcbc8(arg0 + 8);
        func_020bcbe0(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020b848c();
        func_020b8264(1);
        func_020b8420(temp_r5);
    }
    func_0208a434(arg0);
}
