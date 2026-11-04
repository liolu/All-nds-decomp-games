/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern u32 data_0206bd10;

s32 func_0204b4b8(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _ZN3IRQ7DisableEv();
    if ((u32) arg0 > (u32) data_0206bd10) {
        if ((u32) (arg0 - data_0206bd10) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_0206bd10 - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    _ZN3IRQ7RestoreEj(temp_r0);
    return var_r4;
}
