#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_0203b418(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02041b9c(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_0203b418(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_0203b418(0xE, arg0, 0) != 0);
}
