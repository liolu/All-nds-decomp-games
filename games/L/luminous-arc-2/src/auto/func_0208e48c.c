#include "m2c.h"

M2C_UNK func_0208e38c(M2C_UNK);                     /* extern */
M2C_UNK func_0208e5f0();                            /* extern */
void *func_02090a40();                              /* extern */

void func_0208e48c(void) {
    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 2) {
        return;
    }
    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 3) {
        return;
    }
    func_0208e5f0();
    func_0208e38c(1);
}
