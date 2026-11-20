#include "engine.h"
#include "m2c.h"

M2C_UNK func_02017964(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */

void func_02017884(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_02017964(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_02017964(arg0, arg1, arg2, arg3) > 0);
}
