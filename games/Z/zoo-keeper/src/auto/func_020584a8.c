/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
M2C_UNK func_020584fc(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020586bc();                                /* extern */
extern s32 data_0206efc0;

void func_020584a8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    if (func_020586bc() != 0) {
        func_020584fc(data_0206efc0 + 0x98, 0, arg0, 0);
    }
    _ZN3IRQ7RestoreEj(temp_r4);
}
