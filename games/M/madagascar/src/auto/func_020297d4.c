/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202944c(void *, s32);                 /* extern */
M2C_UNK func_020296bc(void *);                      /* extern */

void func_020297d4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x5B6) == 1) {
        func_0202944c(arg0, M2C_FIELD(arg0, s32 *, 0x5C0));
        M2C_FIELD(arg0, u8 *, 0x5B6) = 0U;
    }
    func_020296bc(arg0);
}
