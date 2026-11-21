#include "m2c.h"

M2C_UNK func_0204090c(u32, s32, s32);               /* extern */
M2C_UNK func_0205b088(void *, s32);                 /* extern */
M2C_UNK func_020956f4(void *, s32);                 /* extern */

void func_0209563c(void *arg0, u32 arg1, s32 arg2) {
    u32 temp_r4;
    u32 var_r6;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;

    var_r6 = arg1;
    if (arg2 == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 != NULL) {
        temp_r4 = M2C_FIELD(temp_r1, u32 *, 0xC);
        if ((var_r6 >= temp_r4) && (var_r6 < (u32) (temp_r4 + M2C_FIELD(temp_r1, s32 *, 4)))) {
            func_0205b088(arg0, arg2);
            var_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0xC) + (var_r6 - temp_r4);
        } else {
            func_0205b088(arg0, arg2);
        }
    } else {
        func_020956f4(arg0, arg2);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 4);
    func_0204090c(var_r6, M2C_FIELD(temp_r1_2, u32 *, 0xC) + M2C_FIELD(temp_r1_2, s32 *, 4), arg2);
    temp_r1_3                      = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r1_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 4) + arg2);
}
