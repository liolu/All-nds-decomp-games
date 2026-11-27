/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201d1a0(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x108) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x180)(arg0);
}
