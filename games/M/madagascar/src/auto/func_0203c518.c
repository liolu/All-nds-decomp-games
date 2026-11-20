/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8();           /* extern */
void *func_0203d8a8();               /* extern */
M2C_UNK func_0203f02c();                 /* extern */
M2C_UNK func_02047248();     /* extern */
M2C_UNK func_0204729c();        /* extern */

void func_0203c518(void *arg0) {
    void *temp_r0;

    temp_r0 = func_0203d8a8(arg0, 0x18);
    func_0204729c(arg0, temp_r0 + 8, 0);
    func_02047248(arg0, temp_r0 + 0x14, 1);
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(temp_r0, s32 *, 4), 0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x1B;
    func_0203f02c(arg0, M2C_FIELD(temp_r0, s32 *, 0x20));
}
