/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0205a954(void);
M2C_UNK func_0205aa44(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_0205ab74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0205aa44(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_0205a954();
    } while (func_0205aa44(arg0, arg1, arg2, arg3) > 0);
}
