#include "m2c.h"

M2C_UNK func_02019388(s32, s32);                    /* extern */
s32 func_020198b0(s32);                             /* extern */
s32 func_020199ac(s32, s32);                        /* extern */
s32 func_020799dc(s32, M2C_UNK);                    /* extern */
s32 func_02079a84();                                /* extern */

void func_02076ad8(void **arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r5   = M2C_FIELD(*arg0, s32(**)(), 0x1C)(arg0);
    temp_r4   = func_02079a84();
    temp_r4_2 = temp_r4 + func_020799dc(temp_r5, 8);
    func_02019388(func_020199ac(0x42C80000, func_020198b0(temp_r4_2 + (func_020799dc(temp_r5, 0xB) * 4))), 0x46800000);
}
