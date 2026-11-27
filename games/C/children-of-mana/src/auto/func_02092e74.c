/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_0204077c();           /* extern */
M2C_UNK func_02041bd8();                            /* extern */

void func_02092e74(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02041bd8();
    M2C_FIELD(arg0, s16 *, 0x222) = func_0204077c(arg1, arg0 + 0x218, arg2);
}
