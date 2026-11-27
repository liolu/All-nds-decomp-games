/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02041608(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x1C)(arg0, arg1);
}
