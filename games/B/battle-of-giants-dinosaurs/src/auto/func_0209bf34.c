#include "m2c.h"

M2C_UNK func_02000fb4();                            /* extern */

void func_0209bf34(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;

    func_02000fb4();
    temp_r0                   = M2C_FIELD(arg1, void **, 0x14);
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(temp_r0, u16 *, 4) - M2C_FIELD(temp_r0, u16 *, 0xA)) << 0xC);
    temp_r0_2                 = M2C_FIELD(arg1, void **, 0x14);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(temp_r0_2, u16 *, 6) - M2C_FIELD(temp_r0_2, u16 *, 0xC)) << 0xC);
}
