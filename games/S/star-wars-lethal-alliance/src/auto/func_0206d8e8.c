/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206d924(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_0206dfec();                            /* extern */
extern M2C_UNK func_0206dfe4;

s32 func_0206d8e8(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0206d924(&func_0206dfe4, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0206dfec();
    return sp0;
}
