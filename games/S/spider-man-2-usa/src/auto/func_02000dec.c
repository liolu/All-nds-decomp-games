/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e08(M2C_UNK, s32, s32, s32);      /* extern */

void func_02000dec(M2C_UNK arg0, void *arg1) {
    func_02000e08(arg0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8));
}
