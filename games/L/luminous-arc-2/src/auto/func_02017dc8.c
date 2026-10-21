#include "m2c.h"

s32 func_02008e50(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */

void func_02017dc8(M2C_UNK arg0) {
    if (func_02008e50(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_02008e50(0xD, arg0, 0) != 0);
}
