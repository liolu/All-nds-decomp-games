#include "m2c.h"

s32 func_0206e2a4(s32);                             /* extern */
M2C_UNK func_0206e3ec(s32, M2C_UNK *, void *);      /* extern */
extern M2C_UNK func_0206e190;

s32 func_0206e1f8(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 8)   = arg1;
    temp_r0                     = func_0206e2a4(arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_r0;
    if (temp_r0 >= 0) {
        func_0206e3ec(temp_r0, &func_0206e190, arg0);
    }
    return M2C_FIELD(arg0, s32 *, 0xC);
}
