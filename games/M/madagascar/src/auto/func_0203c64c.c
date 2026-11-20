/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e50(s32, s32);                    /* extern */
M2C_UNK func_02000e58(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203d1c4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d1f8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d22c(void *, M2C_UNK);             /* extern */

void func_0203c64c(void *arg0) {
    func_0203d1f8(arg0, 0x17, 0);
    func_0203d1c4(arg0, 0x17, 0);
    func_0203d22c(arg0, 0x17);
    if (M2C_FIELD(arg0, s32 *, 0x258) != -1) {
        func_02000e58(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, 0x19);
        func_02000e50(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, M2C_FIELD(arg0, s32 *, 0x258));
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x19;
}
