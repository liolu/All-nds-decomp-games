#include "m2c.h"

M2C_UNK func_02041ce4();                            /* extern */
M2C_UNK func_02041ddc();             /* extern */
M2C_UNK func_02041ea8();             /* extern */
M2C_UNK func_02041fa8();             /* extern */
M2C_UNK func_020420ac();             /* extern */
M2C_UNK func_020421b4();             /* extern */

void func_02041c44(void *arg0, M2C_UNK arg1) {
    s32 temp_r3;

    if ((M2C_FIELD(arg0, s32 *, 0x818C) == 0) && (M2C_FIELD(arg0, s32 *, 0x8190) == 0)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 4);
        if ((u32) (temp_r3 - 0x1C) <= 1U) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x74) == 0) {
            func_02041ce4(arg0, arg1);
            func_02041ddc(arg0, arg1);
            func_02041ea8(arg0, arg1);
            func_02041fa8(arg0, arg1);
            func_020420ac(arg0, arg1);
        } else if (temp_r3 == 0xE) {
            func_02041ea8(arg0, arg1);
            func_02041fa8(arg0, arg1);
        }
        func_020421b4(arg0, arg1);
    }
}
