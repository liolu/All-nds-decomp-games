/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027acc(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
M2C_UNK func_02027f20();                            /* extern */
extern M2C_UNK func_02027f18;

s32 func_02027a90(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02027acc(arg0, &func_02027f18, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02027f20();
    return sp0;
}
