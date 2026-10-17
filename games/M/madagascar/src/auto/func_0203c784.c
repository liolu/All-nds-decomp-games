/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
void *func_0203d8a8(void *, M2C_UNK);               /* extern */
M2C_UNK func_0203f02c(void *, s32);                 /* extern */
M2C_UNK func_02047248(void *, void *, M2C_UNK);     /* extern */

void func_0203c784(void *arg0) {
    void *temp_r0;

    temp_r0 = func_0203d8a8(arg0, 0x19);
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(temp_r0, s32 *, 4), 0);
    func_0203f02c(arg0, M2C_FIELD(temp_r0, s32 *, 0x20));
    func_02047248(arg0, temp_r0 + 0x14, 0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x1E;
    M2C_FIELD(arg0, s8 *, 0x25C)  = 0;
}
