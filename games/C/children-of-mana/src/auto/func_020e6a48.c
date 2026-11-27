/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e6458(s32);                             /* extern */
M2C_UNK func_020e6c38(void *, M2C_UNK);             /* extern */

void func_020e6a48(void *arg0) {
    if (func_020e6458(M2C_FIELD(arg0, s32 *, 8)) == 0) {
        return;
    }
    func_020e6c38(arg0, 4);
}
