#include "m2c.h"

void *func_01ff8064();                              /* extern */
M2C_UNK func_0203dc84(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0204baac(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u8 *, 0x120) >= 4U) {
        return;
    }
    if ((func_01ff8064() != NULL) && (M2C_FIELD(M2C_FIELD(func_01ff8064(), void **, 0xE0), s32 *, 0x108) == 0xB)) {
        func_0203dc84(0x1E, 3, -1);
        M2C_FIELD(arg0, s8 *, 0x3EC) = 0;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x3EC) = 1;
}
