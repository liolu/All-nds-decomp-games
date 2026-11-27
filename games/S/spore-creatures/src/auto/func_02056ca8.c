#include "m2c.h"

M2C_UNK func_0205b9c8();                            /* extern */

void func_02056ca8(void *arg0) {
    func_0205b9c8();
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (0 - M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (0 - M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
