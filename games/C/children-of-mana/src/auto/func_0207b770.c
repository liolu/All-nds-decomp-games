/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */

void *func_0207b770(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0200e0f8();
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    return arg0;
}
