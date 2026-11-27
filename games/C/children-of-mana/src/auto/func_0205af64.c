/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ae4c();                            /* extern */
s32 func_0205c948();                                /* extern */
M2C_UNK func_0205c95c(s32);                         /* extern */

void func_0205af64(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0205c948();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0205ae4c();
    func_0205c95c(temp_r4);
}
