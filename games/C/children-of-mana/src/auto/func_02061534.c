/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205a1f0(s32, s32, s32);               /* extern */
M2C_UNK func_0205bb6c(s32, s32);                    /* extern */
s32 func_02060d88();                                /* extern */
void *func_02060da4();                              /* extern */

s32 func_02061534(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_02060da4();
    temp_r0 = func_02060d88();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_0205bb6c(M2C_FIELD(temp_r4, s32 *, 4), 0x7B8);
    func_0205a1f0(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7B8);
    return 0;
}
