#include "m2c.h"

M2C_UNK func_020209cc();                            /* extern */
s32 func_02020e30(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_02020a50;

s32 func_02020e94(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02020e30(arg0, &func_02020a50, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020209cc();
    return sp0;
}
