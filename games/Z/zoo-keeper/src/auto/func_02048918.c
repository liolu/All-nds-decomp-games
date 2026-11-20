/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204877c();                            /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
extern void **data_0206b9d4;

void func_02048918(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = _ZN3IRQ7DisableEv();
    temp_r2 = *data_0206b9d4;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_0204877c();
    _ZN3IRQ7RestoreEj(temp_r4);
}
