#include "m2c.h"

M2C_UNK func_0204090c(s32, s32, s32);               /* extern */
M2C_UNK func_0205ae9c(void *);                      /* extern */
M2C_UNK func_0205aebc(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020959a4(void *);                      /* extern */

void func_02095f38(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;

    func_020959a4(arg1);
    func_0205ae9c(arg0);
    temp_r4 = arg3 - arg2;
    func_0205aebc(arg0, temp_r4, 0, 0);
    if (temp_r4 == 0) {
        return;
    }
    func_0204090c(M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0xC) + arg2,
                  M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC), temp_r4);
}
