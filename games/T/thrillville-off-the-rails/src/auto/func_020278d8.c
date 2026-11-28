/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027914(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_02027f20();                            /* extern */
extern M2C_UNK func_02027f18;

s32 func_020278d8(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02027914(&func_02027f18, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02027f20();
    return sp0;
}
