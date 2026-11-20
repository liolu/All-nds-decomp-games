#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_0203b418(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02041e6c(M2C_UNK arg0) {
    if (func_0203b418(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_0203b418(0xD, arg0, 0) != 0);
}
