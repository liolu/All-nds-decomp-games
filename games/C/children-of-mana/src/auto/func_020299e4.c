/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081360(void *);                          /* extern */

s32 func_020299e4(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0x62A) == M2C_FIELD(arg0, u16 *, 0x614)) && (func_02081360(arg0 + 0x5C) == 0)) {
        return 1;
    }
    return 0;
}
