#include "m2c.h"

M2C_UNK func_02052130(s32);                         /* extern */

void func_02063f24(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_02052130(M2C_FIELD(arg0, s32 *, 0xC));
    }
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
}
