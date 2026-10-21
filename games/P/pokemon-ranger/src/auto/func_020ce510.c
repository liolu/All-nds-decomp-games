/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ce54c(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_020ceb7c();                            /* extern */
extern M2C_UNK func_020ceb74;

s32 func_020ce510(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020ce54c(&func_020ceb74, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020ceb7c();
    return sp0;
}
