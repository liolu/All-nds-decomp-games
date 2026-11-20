#include "m2c.h"

void func_02076e74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 1;
    if (((u32) M2C_FIELD(arg0, u8 *, 1) > 0x7FU) && ((u32) M2C_FIELD(arg0, u8 *, 8) > 0x7FU) &&
        ((u32) M2C_FIELD(arg0, u8 *, 9) > 0x7FU) && ((u32) M2C_FIELD(arg0, u8 *, 0xA) > 0x7FU) &&
        ((u32) M2C_FIELD(arg0, u8 *, 0xB) > 0x7FU) && ((u32) M2C_FIELD(arg0, u8 *, 0xC) > 0x7FU) &&
        ((u32) M2C_FIELD(arg0, u8 *, 0xD) > 0x7FU) && ((u32) M2C_FIELD(arg0, u8 *, 0xE) > 0x7FU)) {
        M2C_FIELD(arg0, s8 *, 0) = 0;
    }
}
