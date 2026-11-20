#include "m2c.h"

M2C_UNK func_02018198(s32);                         /* extern */
s32 func_020188f8(s32);                             /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
extern M2C_UNK data_020940e0;

void func_02018850(s32 arg0) {
    s32 temp_r5;
    void *temp_r6;

    temp_r5 = func_02019d04();
    temp_r6 = M2C_FIELD(&data_020940e0, void **, 4);
loop_1:
    if (func_020188f8(arg0) == 0) {
        M2C_FIELD(temp_r6, s32 *, 0x84) = arg0;
        func_02018198(arg0);
        M2C_FIELD(temp_r6, s32 *, 0x84) = 0;
        goto loop_1;
    }
    func_02019d18(temp_r5);
}
