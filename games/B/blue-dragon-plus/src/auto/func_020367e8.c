#include "engine.h"
#include "m2c.h"

M2C_UNK func_020368c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */

void func_020367e8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_020368c8(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_020368c8(arg0, arg1, arg2, arg3) > 0);
}
