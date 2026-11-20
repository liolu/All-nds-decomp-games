/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(M2C_UNK);

extern s32 data_0206bd14;
extern s32 data_0206bd18;

void func_0204b77c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = _ZN3IRQ7DisableEv();
    if (data_0206bd18 == 0) {
        data_0206bd18 = arg0;
        data_0206bd14 = arg0;
    } else {
        *(M2C_UNK *) data_0206bd18 = arg0;
        data_0206bd18              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    _ZN3IRQ7RestoreEj(temp_r0);
}
