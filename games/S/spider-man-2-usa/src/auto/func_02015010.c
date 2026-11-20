/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203b77c(s32, s32);                    /* extern */
M2C_UNK func_0203b7d8(s32, s32, M2C_UNK, s32);      /* extern */

void func_02015010(void *arg0, M2C_UNK arg1) {
    func_0203b7d8(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0), arg1, M2C_FIELD(arg0, s32 *, 0x6C));
    func_0203b77c(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0) + 1);
}
