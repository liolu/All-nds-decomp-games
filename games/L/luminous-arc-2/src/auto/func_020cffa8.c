#include "m2c.h"

M2C_UNK func_020d01c0();                            /* extern */
M2C_UNK func_020d0b10();                            /* extern */
extern u8 data_02151429;
extern u8 data_02151431;

void func_020cffa8(void) {
    if (data_02151429 & 1) {
        data_02151429 &= ~1;
    } else {
        func_020d01c0();
    }
    if (data_02151431 & 8) {
        data_02151431 &= ~8;
        return;
    }
    func_020d0b10();
}
