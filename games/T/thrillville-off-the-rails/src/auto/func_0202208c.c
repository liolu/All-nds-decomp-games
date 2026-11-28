/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022588();                            /* extern */
s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */

void func_0202208c(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02024624();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02022588();
    func_02024638(temp_r4);
}
