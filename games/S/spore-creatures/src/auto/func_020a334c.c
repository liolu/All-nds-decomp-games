#include "m2c.h"

M2C_UNK func_02090bf0(u16);                         /* extern */
M2C_UNK func_020a3398(void *);                      /* extern */
M2C_UNK func_020a60a0();                            /* extern */

void func_020a334c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x12) & 0x20) {
        func_020a60a0(arg0);
    }
    func_020a3398(arg0);
    func_02090bf0(M2C_FIELD(arg0, u16 *, 0x10));
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, u16 *, 0x10) = 0xFFFFU;
    M2C_FIELD(arg0, u16 *, 0x12) = 0U;
}
