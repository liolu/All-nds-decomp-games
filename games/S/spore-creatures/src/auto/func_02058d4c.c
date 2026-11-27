#include "m2c.h"

M2C_UNK func_02058dac();                            /* extern */
M2C_UNK func_02058e9c(void *);                      /* extern */

void func_02058d4c(void *arg0, s32 arg1) {
    if ((arg1 != 0) && (((u32) (M2C_FIELD(arg0, u16 *, 0x32) << 0x1F) >> 0x1F) == 0)) {
        func_02058dac(arg0);
    } else if ((arg1 == 0) && (((u32) (M2C_FIELD(arg0, u16 *, 0x32) << 0x1F) >> 0x1F) != 0)) {
        func_02058e9c(arg0);
    }
    M2C_FIELD(arg0, u16 *, 0x32) = (u16) ((M2C_FIELD(arg0, u16 *, 0x32) & ~1) | (arg1 & 1));
}
