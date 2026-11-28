#include "m2c.h"

s32 func_020cb730();                                /* extern */
extern void *data_020fd2a0;

s32 func_020cb6bc(void) {
    s32 temp_r0;

    if (func_020cb730() == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(data_020fd2a0, void **, 4), s32 *, 0xC);
    if (!(temp_r0 & 0x400)) {
        return 0;
    }
    if (!(temp_r0 & 0x800)) {
        return 0;
    }
    if (!(temp_r0 & 0x1000)) {
        return 0;
    }
    if (!(temp_r0 & 0x2000)) {
        return 0;
    }
    if (!(temp_r0 & 0x4000)) {
        return 0;
    }
    if (temp_r0 & 0x8000) {
        return 1;
    }
    return 0;
}
