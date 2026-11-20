/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0203cad8();                              /* extern */
M2C_UNK func_0203d1f8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d22c(void *, M2C_UNK);             /* extern */

void func_0203f034(void *arg0) {
    void *temp_r0;

    temp_r0                       = func_0203cad8();
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
    func_0203d1f8(arg0, 1, 0);
    func_0203d22c(arg0, 8);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 7;
}
