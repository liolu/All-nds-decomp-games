/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv();                            /* extern */
M2C_UNK _ZN3IRQ7RestoreEj();                            /* extern */

s32 func_0205aa50(s32 arg0, void *arg1) {
    _ZN3IRQ7DisableEv();
    _ZN3IRQ7RestoreEj();
    return M2C_FIELD(arg1, s32 *, -0x18) - 0x20;
}
