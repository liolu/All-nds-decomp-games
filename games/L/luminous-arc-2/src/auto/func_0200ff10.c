#include "m2c.h"

s32 func_02008e50(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */

void func_0200ff10(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02008e50(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_02008e50(0xE, arg0, 0) != 0);
}
