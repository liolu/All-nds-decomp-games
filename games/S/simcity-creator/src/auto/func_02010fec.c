#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020084fc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02010fec(M2C_UNK arg0) {
    if (func_020084fc(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_020084fc(0xD, arg0, 0) != 0);
}
