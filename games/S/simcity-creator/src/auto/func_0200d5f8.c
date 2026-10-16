#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
s32 func_0200d5e8();                                /* extern */

void func_0200d5f8(void) {
    if (func_0200d5e8() != 0) {
        return;
    }
    func_02006964();
}
