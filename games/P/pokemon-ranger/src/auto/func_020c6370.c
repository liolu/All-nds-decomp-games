/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6258();                            /* extern */
s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */

void func_020c6370(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020c8070();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020c6258();
    func_020c8084(temp_r4);
}
