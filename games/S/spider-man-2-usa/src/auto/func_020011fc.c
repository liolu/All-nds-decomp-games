#include "m2c.h"

extern void *data_02157ce0;

void func_020011fc(void) {
    s32 temp_r0;

    M2C_FIELD(data_02157ce0, s32 *, 0x19C) = (s32) * (u16 *) 0x04000006;
    temp_r0                                = M2C_FIELD(data_02157ce0, s32 *, 0x19C);
    if ((temp_r0 > 0xA) && (temp_r0 < 0xC0)) {
        *M2C_FIELD(data_02157ce0, s32 **, 4) = (s32) (u8) (M2C_FIELD((data_02157ce0 + (temp_r0 * 2)), u16 *, 0x18) + 8);
        return;
    }
    *M2C_FIELD(data_02157ce0, s32 **, 4) = 0;
}
