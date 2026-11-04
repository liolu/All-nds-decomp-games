/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov004_020ad660(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x8) & 255) {
        return 1;
    }
    return 0;
}
