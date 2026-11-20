/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern s32 data_0206bd10;
extern s32 data_0206bd14;
extern s32 data_0206bd2c;

s32 func_0204b50c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _ZN3IRQ7DisableEv();
    if (data_0206bd14 == 0) {
        var_r4 = data_0206bd10;
    } else {
        var_r4 = data_0206bd2c;
    }
    _ZN3IRQ7RestoreEj(temp_r0);
    return var_r4;
}
