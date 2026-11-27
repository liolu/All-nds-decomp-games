/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
M2C_UNK func_0205b704(M2C_UNK);                     /* extern */

void func_0205b164(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    func_0205b704(arg1);
    _ZN3IRQ7RestoreEj(temp_r4);
}
