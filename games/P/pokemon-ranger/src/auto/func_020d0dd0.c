/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6fb0(u16 *, M2C_UNK);              /* extern */
s32 func_020d0e2c();                                /* extern */
extern void *data_020f92cc;

s32 func_020d0dd0(void) {
    s32 temp_r0;

    temp_r0 = func_020d0e2c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c6fb0(M2C_FIELD(data_020f92cc, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_020f92cc, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
