#include "m2c.h"

s32 func_02037430(s32, s32);                        /* extern */
s32 func_02037554();                                /* extern */
M2C_UNK func_0204c5e8();                            /* extern */
M2C_UNK func_ov006_0215f8f4(s32, void *);           /* extern */

void func_020524a0(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    func_0204c5e8();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x408);
    if (temp_r4 >= 9) {
        return;
    }
    temp_r0 = func_02037430(func_02037554(), temp_r4);
    if (temp_r0 == 0) {
        return;
    }
    func_ov006_0215f8f4(temp_r0, arg0);
}
