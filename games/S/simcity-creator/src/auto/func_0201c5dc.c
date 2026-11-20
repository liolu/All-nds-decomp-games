#include "m2c.h"

u16 func_0201c618();                                /* extern */

s32 func_0201c5dc(void *arg0) {
    s32 temp_r0_2;
    u16 temp_r0;

    temp_r0_2 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0                   = func_0201c618();
    M2C_FIELD(arg0, s16 *, 0) = (s16) (temp_r0 & (temp_r0 ^ M2C_FIELD(arg0, u16 *, 2)));
    M2C_FIELD(arg0, u16 *, 2) = temp_r0;
    return (s32) temp_r0;
}
