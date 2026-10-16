#include "m2c.h"

s32 func_02022460();                                /* extern */
M2C_UNK func_020224cc(void *, s32);                 /* extern */

void func_0202251c(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 <= 0) {
        return;
    }
    if (arg1 >= (s32) M2C_FIELD(arg0, u8 *, 4)) {
        return;
    }
    temp_r0                  = func_02022460(arg0, arg1);
    M2C_FIELD(arg0, u8 *, 4) = (u8) arg1;
    if (temp_r0 < 0) {
        return;
    }
    func_020224cc(arg0, arg1);
}
