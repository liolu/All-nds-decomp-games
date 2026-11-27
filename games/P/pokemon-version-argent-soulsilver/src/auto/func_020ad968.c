#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv();                     /* extern */
M2C_UNK _Z20SetIRQInterruptStatei();                     /* extern */
extern void *data_021d600c;

s32 func_020ad968(void) {
    M2C_UNK m2c_irq;
    m2c_irq = _Z20DisableIRQInterruptsv();
    if (data_021d600c == NULL) {
        _Z20SetIRQInterruptStatei(m2c_irq);
        return 1;
    }
    if (M2C_FIELD(data_021d600c, s32 *, 0x2260) != 1) {
        _Z20SetIRQInterruptStatei(m2c_irq);
        return 1;
    }
    data_021d600c = NULL;
    _Z20SetIRQInterruptStatei(m2c_irq);
    return 0;
}
