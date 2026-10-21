#include "m2c.h"

M2C_UNK func_02029a90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020c8664();                                /* extern */
extern u8 data_02158048;

void func_02038d28(void) {
    if (func_020c8664() != 0) {
        func_02029a90(3, 0, 0);
    } else {
        func_02029a90(3, 0, 2);
    }
    data_02158048 += 1;
}
