/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202944c(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x5C4) == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5B8) = arg1;
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x5C4)(arg0 + 0x5B8);
}
