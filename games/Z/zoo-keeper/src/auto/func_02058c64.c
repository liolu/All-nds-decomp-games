/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020482ac();                            /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */

void func_02058c64(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020482ac(arg0);
    }
    _ZN3IRQ7RestoreEj(M2C_FIELD(arg1, s32 *, 4));
}
