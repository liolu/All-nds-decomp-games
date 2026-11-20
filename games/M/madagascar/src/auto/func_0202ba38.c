/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202943c(void *, M2C_UNK);             /* extern */

void func_0202ba38(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5CC) = 2;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    func_0202943c(arg0, 1);
}
