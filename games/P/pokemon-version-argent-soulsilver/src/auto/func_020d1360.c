#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_020d1440(); /* extern */

void func_020d1360(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_020d1440() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_020d1440(arg0, arg1, arg2, arg3) > 0);
}
