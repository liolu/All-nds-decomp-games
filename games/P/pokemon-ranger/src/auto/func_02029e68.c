/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02029e68(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x28) & 1) {
        return 1;
    }
    return 0;
}
