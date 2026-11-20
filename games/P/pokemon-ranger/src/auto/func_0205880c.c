/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205880c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0x44) = arg1;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x354) != 0) {
        return 1;
    }
    return 0;
}
