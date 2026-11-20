#include "m2c.h"

M2C_UNK func_0200c6fc();                            /* extern */

void func_0200c1a0(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x20);
    func_0200c6fc();
    M2C_FIELD(temp_r4, s32 *, 0)    = 0;
    M2C_FIELD(temp_r4, s32 *, 4)    = 0;
    M2C_FIELD(temp_r4, s32 *, 8)    = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
}
