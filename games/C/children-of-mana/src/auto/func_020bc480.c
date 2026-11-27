/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020bc480(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xC) == 0) && (M2C_FIELD(arg0, u8 *, 0xF) == 0)) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xC) = 0U;
}
