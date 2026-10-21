#include "m2c.h"

void *func_020791f8(M2C_UNK);                       /* extern */

void func_02079848(void *arg0) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) == 1) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
        return;
    }
    if (((u32) (M2C_FIELD(func_020791f8(0), u8 *, 4) << 0x1D) >> 0x1D) == 1) {
        M2C_FIELD(arg0, s8 *, 0x77A) = 7;
    }
}
