/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern void *data_0206ef94;

void func_02055004(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = _ZN3IRQ7DisableEv();
    M2C_FIELD(data_0206ef94, s32 *, 0x14E4) = arg0;
    _ZN3IRQ7RestoreEj(temp_r0);
}
