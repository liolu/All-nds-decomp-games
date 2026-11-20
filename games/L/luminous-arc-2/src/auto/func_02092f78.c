#include "m2c.h"

M2C_UNK func_02006be0();                     /* extern */
M2C_UNK func_02006bf4();                     /* extern */
extern void *data_02170cc0;

s32 func_02092f78(void) {
    M2C_UNK m2c_irq;
    m2c_irq = func_02006be0();
    if (data_02170cc0 == NULL) {
        func_02006bf4(m2c_irq);
        return 1;
    }
    if (M2C_FIELD(data_02170cc0, s32 *, 0x2260) != 1) {
        func_02006bf4(m2c_irq);
        return 1;
    }
    data_02170cc0 = NULL;
    func_02006bf4(m2c_irq);
    return 0;
}
