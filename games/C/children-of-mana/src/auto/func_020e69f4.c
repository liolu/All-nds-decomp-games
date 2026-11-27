/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e641c(s32);                             /* extern */
M2C_UNK func_020e6c38(void *, M2C_UNK);             /* extern */

void func_020e69f4(void *arg0) {
    if (func_020e641c(M2C_FIELD(arg0, s32 *, 8)) == 0) {
        return;
    }
    func_020e6c38(arg0, 6);
}
