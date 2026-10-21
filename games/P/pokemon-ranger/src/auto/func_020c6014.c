/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c5dd4(void);
M2C_UNK func_020c5ee4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c6014(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_020c5ee4(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_020c5dd4();
    } while (func_020c5ee4(arg0, arg1, arg2, arg3) > 0);
}
