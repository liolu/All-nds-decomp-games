/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
M2C_UNK func_020546b8(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0217a7a0;

void func_020570fc(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    func_020546b8(&data_0217a7a0, arg0);
    _ZN3IRQ7RestoreEj(temp_r4);
}
