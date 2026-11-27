/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a45c(s32);                         /* extern */
M2C_UNK func_0204a4c4(s32);                         /* extern */
M2C_UNK func_0204a4e4(s32);                         /* extern */

void func_020d60d4(void *arg0) {
    func_0204a4c4(M2C_FIELD(arg0, s32 *, 8));
    func_0204a4e4(M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        return;
    }
    func_0204a45c(M2C_FIELD(arg0, s32 *, 8));
}
