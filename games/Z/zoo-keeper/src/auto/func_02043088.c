/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02042574(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02042590(M2C_UNK);                         /* extern */
s32 func_02042aac(s32);                             /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */

void func_02043088(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r5;
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    temp_r5 = func_02042aac(arg1);
    if (arg0 == func_02042590(arg2)) {
        func_02042574(arg2, 0);
    }
    func_02042aac(temp_r5);
    _ZN3IRQ7RestoreEj(temp_r4);
}
