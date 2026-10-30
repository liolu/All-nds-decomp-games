#include "m2c.h"

M2C_UNK func_020034b0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020055c4(s32, s32);                    /* extern */
M2C_UNK func_02090dd4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02091a98(void *, M2C_UNK);                 /* extern */
s32 func_02091ad4(void *, M2C_UNK);                 /* extern */

void func_02090f34(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02091ad4(arg0, arg2);
    temp_r4 = func_02091a98(arg0, arg2);
    func_02090dd4(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1C, arg1, 0);
    func_020055c4(temp_r5, temp_r4);
    func_020034b0(temp_r5, 0, temp_r4);
}
