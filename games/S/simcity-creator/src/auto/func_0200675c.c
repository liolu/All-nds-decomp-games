#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
M2C_UNK func_02003fcc(M2C_UNK, M2C_UNK);            /* extern */

void func_0200675c(void) {
    WaitByLoop(1);
    func_02003fcc(1, 1);
}
