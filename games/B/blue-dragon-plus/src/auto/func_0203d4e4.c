#include "m2c.h"

M2C_UNK func_02037710(s32, s32);                    /* extern */
M2C_UNK func_02037784(s32, s32);                    /* extern */
M2C_UNK func_02039a38(s32, M2C_UNK, s32);           /* extern */

void func_0203d4e4(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_02037784(temp_r4, temp_r6);
    func_02037710(temp_r4, temp_r6);
    func_02039a38(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
