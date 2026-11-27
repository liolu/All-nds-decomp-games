#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020d66c4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_020e133c(M2C_UNK arg0) {
    if (func_020d66c4(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_020d66c4(0xD, arg0, 0) != 0);
}
