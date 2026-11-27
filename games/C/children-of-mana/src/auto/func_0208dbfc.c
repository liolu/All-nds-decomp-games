/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208f4b0(s32);                             /* extern */

void func_0208dbfc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = func_0208f4b0(M2C_FIELD(arg0, s32 *, 4));
}
