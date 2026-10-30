#include "m2c.h"

s32 func_0205369c();                                /* extern */
M2C_UNK func_0206fff0(M2C_UNK);                     /* extern */
M2C_UNK func_020ae68c(s32, s32);                    /* extern */

void func_020adda4(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + M2C_FIELD(arg0, s16 *, 8));
    M2C_FIELD(arg0, s16 *, 4)   = (s16) (M2C_FIELD(arg0, s16 *, 2) + 0xA);
    M2C_FIELD(arg0, s16 *, 6)   = (s16) (M2C_FIELD(arg0, s16 *, 6) - 1);
    if ((s32) M2C_FIELD(arg0, s16 *, 6) > 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0) = 4;
    func_0206fff0(arg1);
    func_020ae68c(func_0205369c(), 0x1028);
}
