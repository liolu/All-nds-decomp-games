#include "m2c.h"

M2C_UNK func_0207432c(s32);                         /* extern */

void func_0209d28c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        do {
            func_0207432c(M2C_FIELD(arg0, s32 *, 0));
        } while (M2C_FIELD(arg0, s32 *, 0xC) != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
