/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
M2C_UNK func_0204a304();                            /* extern */
M2C_UNK func_02056a4c();                            /* extern */
extern void *data_0206ef94;

void func_02056a0c(void) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    if (M2C_FIELD(data_0206ef94, s32 *, 0x1320) != 0) {
        func_0204a304();
    }
    func_02056a4c();
    _ZN3IRQ7RestoreEj(temp_r4);
}
