/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205dee0(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_0205e454();                            /* extern */
extern M2C_UNK func_0205e44c;

s32 func_0205dea4(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0205dee0(&func_0205e44c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205e454();
    return sp0;
}
