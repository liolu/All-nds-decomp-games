#include "m2c.h"

void func_02091a54(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE5) == 0) {
        return;
    }
    *(s32 *) 0x04001000         = (*(s32 *) 0x04001000 & ~0x1F00) | (M2C_FIELD(arg0, s32 *, 0xB0) << 8);
    M2C_FIELD(arg0, u8 *, 0xE5) = 0U;
}
