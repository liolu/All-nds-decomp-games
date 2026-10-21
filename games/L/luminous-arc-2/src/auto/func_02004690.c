#include "m2c.h"

s32 func_02004770(); /* extern */
M2C_UNK WaitByLoop();                        /* extern */

void func_02004690(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_02004770() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_02004770(arg0, arg1, arg2, arg3) > 0);
}
