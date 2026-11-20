#include "m2c.h"

void *func_02074a64(void *, M2C_UNK *);             /* extern */

void func_0207652c(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_02074a64(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_02074a64(temp_r0, &sp0);
}
