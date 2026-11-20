#include "m2c.h"

void *func_02060e38();                              /* extern */
extern void *data_020cafdc;

s32 func_02078bf4(void) {
    s16 temp_r1;
    void *temp_r0;

    temp_r0 = func_02060e38();
    if (data_020cafdc == NULL) {
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, s16 *, 8);
    if ((s32) temp_r1 >= 0xE) {
        return 0;
    }
    if ((s32) M2C_FIELD(data_020cafdc, s16 *, 8) <= (s32) temp_r1) {
        return 1;
    }
    return 0;
}
