#include "m2c.h"

M2C_UNK func_02003630(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020055c4(s32, s32);                    /* extern */
M2C_UNK func_02090e98(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_02091a98(void *, M2C_UNK);                 /* extern */
s32 func_02091ad4(void *, M2C_UNK);                 /* extern */

void func_02090f98(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02091ad4(arg0, arg2);
    temp_r4 = func_02091a98(arg0, arg2);
    func_02090e98(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1E, arg1);
    func_020055c4(temp_r5, temp_r4);
    func_02003630(temp_r5, 0, temp_r4);
}
