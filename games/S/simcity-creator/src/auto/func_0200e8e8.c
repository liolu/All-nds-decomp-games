#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020084fc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_0200e8e8(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_020084fc(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_020084fc(0xE, arg0, 0) != 0);
}
