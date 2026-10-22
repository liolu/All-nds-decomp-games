/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02157e10;

s32 func_02005bec(void *arg0) {
    if ((M2C_FIELD(data_02157e10, u8 *, 4) != 0) && (M2C_FIELD(arg0, u8 *, 5) != 0)) {
        return 1;
    }
    return 0;
}
