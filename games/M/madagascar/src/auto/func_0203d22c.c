/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
void *func_0203d8a8();                              /* extern */
M2C_UNK func_0203f02c(void *, s32);                 /* extern */

void func_0203d22c(void *arg0) {
    void *temp_r0;

    temp_r0 = func_0203d8a8();
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(temp_r0, s32 *, 4), 0);
    func_0203f02c(arg0, M2C_FIELD(temp_r0, s32 *, 0x20));
}
