#include "m2c.h"

M2C_UNK func_02055a64(void *);                      /* extern */

void *func_0203bca0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02055a64(arg0 + 0xC);
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 0x45) = 0;
    M2C_FIELD(arg0, s8 *, 0x46) = 0;
    M2C_FIELD(arg0, s8 *, 0x47) = arg1;
    M2C_FIELD(arg0, s8 *, 0x48) = 0x1F;
    return arg0;
}
