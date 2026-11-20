#include "m2c.h"

M2C_UNK func_020ae908(s32);                         /* extern */

void *func_020ae36c(void *arg0) {
    func_020ae908(arg0 + 0xC0);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = -1;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0x7F;
    return arg0;
}
