#include "m2c.h"

void *func_02029490();                              /* extern */
void *func_02060e38();                              /* extern */
extern M2C_UNK data_020aab34;

void func_0203de80(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                                = func_02029490();
    M2C_FIELD(&data_020aab34, s32 *, 0x64) = 0;
    temp_r0_2                              = func_02060e38();
    M2C_FIELD(temp_r0_2, u16 *, 0x6A)      = (u16) (M2C_FIELD(temp_r0_2, u16 *, 0x6A) | 0x8000);
    M2C_FIELD(temp_r0, s32 *, 0x10)        = 1;
}
