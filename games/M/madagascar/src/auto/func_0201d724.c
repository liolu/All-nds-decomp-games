/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d768(M2C_UNK, s32);                /* extern */

void func_0201d724(M2C_UNK arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 4) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 7) {
        return;
    }
    func_0201d768(arg0, M2C_FIELD(arg1, s32 *, 8));
}
