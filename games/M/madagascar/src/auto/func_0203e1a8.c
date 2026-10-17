/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e50(s32, s32);                    /* extern */
M2C_UNK func_02000e58(s32, s32);                    /* extern */
M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
void *func_0203d8a8(void *, M2C_UNK);               /* extern */

void func_0203e1a8(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 0x20C) = (s32) M2C_FIELD(arg0, s32 *, 0x178);
    temp_r0                       = func_0203d8a8(arg0, 5);
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(temp_r0, s32 *, 4), 0);
    func_02000e58(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, M2C_FIELD(temp_r0, s32 *, 0x18));
    func_02000e50(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, M2C_FIELD(temp_r0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1E8) = 4;
}
