#include "m2c.h"

extern void *data_020fd2a0;

s32 func_020cb730(void) {
    s32 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(data_020fd2a0, void **, 4);
    if (!(M2C_FIELD(temp_r1, s32 *, 0xC) & 0x04000000)) {
        return 0;
    }
    if (!(M2C_FIELD(temp_r1, s32 *, 0x14) & 0x800)) {
        return 0;
    }
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 0x18);
    if (!(temp_r0 & 0x40)) {
        return 0;
    }
    if (!(temp_r0 & 0x80000000)) {
        return 0;
    }
    if (!(M2C_FIELD(temp_r1, s32 *, 0x1C) & 0x02000000)) {
        return 0;
    }
    if (M2C_FIELD(temp_r1, s32 *, 0x20) & 0x100000) {
        return 1;
    }
    return 0;
}
