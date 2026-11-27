/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
s32 func_0206b944(s32, M2C_UNK, s32, M2C_UNK);      /* extern */
M2C_UNK func_020642f0(void *, M2C_UNK);             /* extern */

s32 func_02064224(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = _ZN3IRQ7DisableEv();
            func_020642f0(arg0, 1);
            _ZN3IRQ7RestoreEj(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    return func_0206b944(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
