/* compiler: 2.0/sp1p5 -nointerworking */
#include "m2c.h"

M2C_UNK func_01ffb7ec(s32, s32, M2C_UNK, s32);      /* extern */
M2C_UNK _Z24SetDMACompletionCallbackiPFviEi(s32, M2C_UNK (*)(s32), s32);  /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_02082f8c();                            /* extern */

void func_02082e30(s32 arg0, M2C_UNK arg1, s32 arg2, u32 arg3, M2C_UNK (*arg4)(s32), s32 arg5) {
    s32 temp_r0;
    s32 temp_r4;

    if (arg3 == 0) {
        if (arg4 == NULL) {
            return;
        }
        arg4(arg5);
        return;
    }
    func_02082f8c();
    if (arg4 != NULL) {
        _Z24SetDMACompletionCallbackiPFviEi(arg0, arg4, arg5);
        temp_r0                                           = _Z20DisableIRQInterruptsv();
        M2C_FIELD(((arg0 * 4) + 0x04000000), s32 *, 0xE0) = arg2;
        func_01ffb7ec(arg0, (arg0 * 4) + 0x040000E0, arg1, (arg3 >> 2) | 0xC5000000);
        _Z20SetIRQInterruptStatei(temp_r0);
        return;
    }
    temp_r4                                           = _Z20DisableIRQInterruptsv();
    M2C_FIELD(((arg0 * 4) + 0x04000000), s32 *, 0xE0) = arg2;
    func_01ffb7ec(arg0, (arg0 * 4) + 0x040000E0, arg1, (arg3 >> 2) | 0x85000000);
    _Z20SetIRQInterruptStatei(temp_r4);
}
