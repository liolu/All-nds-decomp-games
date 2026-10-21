#include "m2c.h"

void *func_02078f24();                              /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_0205329c(void) {
    void *temp_r0;

    temp_r0 = func_02078f24();
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) == 1) {
        M2C_FIELD(temp_r0, s32 *, 4) = (s32) (M2C_FIELD(temp_r0, s32 *, 4) | 1);
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x77A) != 7) {
        return;
    }
    M2C_FIELD(&data_0216bccc, s8 *, 0x55) = 0;
    M2C_FIELD(&data_0216bccc, s8 *, 0x56) = 0;
    M2C_FIELD(&data_02158048, s8 *, 1)    = 0xE;
}
