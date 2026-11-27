/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern s32 data_02186658;

s32 func_0206fa8c(void) {
    s32 temp_r0;

    temp_r0 = _ZN3IRQ7DisableEv();
    if (data_02186658 != 0) {
        _ZN3IRQ7RestoreEj(temp_r0);
        return 0;
    }
    data_02186658 = 1;
    _ZN3IRQ7RestoreEj(temp_r0);
    return 1;
}
