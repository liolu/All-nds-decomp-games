/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020d7c6c(void **arg0, s32 arg1, s32 arg2, s32 *arg3) {
    if ((u32) (*arg3 - 1) > 1U) {
        return;
    }
    M2C_FIELD(*arg0, M2C_UNK(**)(void **, M2C_UNK), 0x38)(arg0, 9);
}
