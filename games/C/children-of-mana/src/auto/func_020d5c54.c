/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02049180(s32);                         /* extern */
M2C_UNK func_020d383c(s32, M2C_UNK);                /* extern */

void func_020d5c54(void *arg0, M2C_UNK arg1) {
    func_02049180(M2C_FIELD(arg0, s32 *, 8));
    func_020d383c(M2C_FIELD(arg0, s32 *, 0xC), arg1);
}
