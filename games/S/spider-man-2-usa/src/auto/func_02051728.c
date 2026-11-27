/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020566d8();                            /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */

void func_02051728(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020566d8(arg0);
    }
    _ZN3IRQ7RestoreEj(M2C_FIELD(arg1, s32 *, 4));
}
