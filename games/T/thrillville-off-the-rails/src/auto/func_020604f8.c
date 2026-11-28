#include "m2c.h"

M2C_UNK func_02060c50(void *);                      /* extern */

void *func_020604f8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s8 *, 0x114)  = 0;
    func_02060c50(arg0 + 0x118);
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s8 *, 0x12C)  = 0;
    return arg0;
}
