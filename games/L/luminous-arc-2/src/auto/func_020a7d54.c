#include "m2c.h"

s32 *func_020aa070(s32);                            /* extern */
M2C_UNK func_020aa1e4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020a7d20(void *, s32);                 /* extern */

void func_020a7d54(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = *func_020aa070(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 2, temp_r4, M2C_FIELD(arg0, s32 *, 0x494));
    func_020aa1e4(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_020a7d20(arg0, temp_r4);
}
