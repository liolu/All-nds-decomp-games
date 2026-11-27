/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bb6c(u16 *, M2C_UNK);              /* extern */
s32 func_02060d88();                                /* extern */
extern void *data_0211bcf4;

s32 func_02060d2c(void) {
    s32 temp_r0;

    temp_r0 = func_02060d88();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205bb6c(M2C_FIELD(data_0211bcf4, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_0211bcf4, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
