/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205a8f0();                            /* extern */
M2C_UNK func_0205c95c(s32);                         /* extern */

void func_02051ff4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0205a8f0(arg0);
    }
    func_0205c95c(M2C_FIELD(arg1, s32 *, 4));
}
