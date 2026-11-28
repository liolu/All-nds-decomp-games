/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203b520(s32, s32);                    /* extern */
M2C_UNK func_0203b57c(s32, s32, M2C_UNK, s32);      /* extern */

void func_02014cd0(void *arg0, M2C_UNK arg1) {
    func_0203b57c(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0), arg1, M2C_FIELD(arg0, s32 *, 0x6C));
    func_0203b520(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0) + 1);
}
