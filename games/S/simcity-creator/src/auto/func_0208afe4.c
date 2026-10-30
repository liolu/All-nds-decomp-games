/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0208afe4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 8) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = 1;
        M2C_FIELD(arg0, u8 *, 8)  = 0U;
    }
}
