#include "m2c.h"

M2C_UNK OS_DisableInterrupts();                     /* extern */
M2C_UNK OS_RestoreInterrupts();                     /* extern */
extern void *wcmw;

s32 WCM_Finish(void) {
    M2C_UNK m2c_irq;
    m2c_irq = OS_DisableInterrupts();
    if (wcmw == NULL) {
        OS_RestoreInterrupts(m2c_irq);
        return 1;
    }
    if (M2C_FIELD(wcmw, s32 *, 0x2260) != 1) {
        OS_RestoreInterrupts(m2c_irq);
        return 1;
    }
    wcmw = NULL;
    OS_RestoreInterrupts(m2c_irq);
    return 0;
}
