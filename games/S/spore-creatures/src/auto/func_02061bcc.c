#include "m2c.h"

s32 func_020619a4(s32);                             /* extern */
M2C_UNK func_020966e0(s32, s32);                    /* extern */

void func_02061bcc(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    func_020966e0(temp_r4, func_020619a4(M2C_FIELD(arg0, s32 *, 0x4C)));
}
