/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c5d70();                            /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */

void func_020d2428(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020c5d70(arg0);
    }
    func_020c8084(M2C_FIELD(arg1, s32 *, 4));
}
