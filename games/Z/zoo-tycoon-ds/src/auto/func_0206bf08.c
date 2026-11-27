/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern s32 data_021849c8;
extern s32 data_021849cc;

void func_0206bf08(s32 arg0) {
    s32 temp_r0;

    temp_r0 = _ZN3IRQ7DisableEv();
    if (data_021849cc == 0) {
        data_021849cc = arg0;
        data_021849c8 = arg0;
    } else {
        *(M2C_UNK *) data_021849cc = arg0;
        data_021849cc              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    _ZN3IRQ7RestoreEj(temp_r0);
}
