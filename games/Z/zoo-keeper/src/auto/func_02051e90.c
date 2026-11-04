/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
s32 func_020516f4();                                /* extern */
void *func_02051710();                              /* extern */

s32 func_02051e90(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = _ZN3IRQ7DisableEv();
    temp_r0 = func_020516f4();
    if (temp_r0 != 0) {
        _ZN3IRQ7RestoreEj(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_02051710(), s32 *, 0xB4) = arg0;
    _ZN3IRQ7RestoreEj(temp_r5);
    return 0;
}
