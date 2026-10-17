/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204b548(void *arg0) {
    s32 temp_r1;
    void *temp_r2;

    if ((M2C_FIELD(arg0, s32 *, 0x4C) != 0) || (M2C_FIELD(arg0, s32 *, 0x12C) != 0)) {
        return 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x28) != 3) || (M2C_FIELD(arg0, s32 *, 0x24) != 3) || (M2C_FIELD(arg0, s32 *, 0x2C) != 2) ||
        (M2C_FIELD(arg0, s32 *, 0x78) != 3)) {
        return 0;
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0xD8);
    if ((M2C_FIELD(temp_r2, s32 *, 8) != 2) || (M2C_FIELD(temp_r2, s32 *, 0x5C) != 1) ||
        (M2C_FIELD(temp_r2, s32 *, 0xB0) != 1) || ((s32) M2C_FIELD(temp_r2, s32 *, 0xC) > 2) ||
        (M2C_FIELD(temp_r2, s32 *, 0x60) != 1) || (M2C_FIELD(temp_r2, s32 *, 0xB4) != 1)) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x13C);
    if ((M2C_FIELD(temp_r2, s32 *, 0x24) != temp_r1) || (M2C_FIELD(temp_r2, s32 *, 0x78) != temp_r1) ||
        (M2C_FIELD(temp_r2, s32 *, 0xCC) != temp_r1)) {
        return 0;
    }
    return 1;
}
