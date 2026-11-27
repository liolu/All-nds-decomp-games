#include "m2c.h"

s32 func_020b49f0();                                /* extern */
M2C_UNK func_020bdbdc(u16);                         /* extern */
extern s32 data_027e05e8;

s32 func_020949f8(s32 *arg0) {
    s32 temp_r0;

    data_027e05e8 |= 4;
    temp_r0 = func_020b49f0();
    *arg0   = temp_r0;
    if (temp_r0 == -3) {
        return 0;
    }
    func_020bdbdc((u16) temp_r0);
    return 1;
}
