#include "m2c.h"

s32 func_0209a9b0(M2C_UNK *, s32, M2C_UNK);         /* extern */
M2C_UNK func_0209ab18(s32, s32);                    /* extern */
s32 func_0209ac90();                                /* extern */
extern M2C_UNK func_0209ac1c;

s32 func_0209abe0(void) {
    s32 temp_r0;

    temp_r0 = func_0209ac90();
    if (temp_r0 == 0) {
        return -0x31;
    }
    func_0209ab18(temp_r0, func_0209a9b0(&func_0209ac1c, temp_r0, 1));
    return temp_r0;
}
