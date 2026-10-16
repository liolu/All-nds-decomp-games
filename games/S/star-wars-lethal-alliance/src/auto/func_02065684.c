/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206556c();                            /* extern */
s32 func_02067278();                                /* extern */
M2C_UNK func_0206728c(s32);                         /* extern */

void func_02065684(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02067278();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0206556c();
    func_0206728c(temp_r4);
}
