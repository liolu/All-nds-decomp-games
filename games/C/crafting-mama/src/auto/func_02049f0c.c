#include "m2c.h"

M2C_UNK func_02049ac8(void *);                      /* extern */
M2C_UNK func_02049adc(void *);                      /* extern */
extern void *data_020ab380;

void func_02049f0c(void) {
    if ((data_020ab380 != NULL) && (M2C_FIELD(data_020ab380, s32 *, 0x1C) != 0x63)) {
        M2C_FIELD(data_020ab380, s32 *, 0x2C) = (s32) (M2C_FIELD(data_020ab380, s32 *, 0x2C) | 2);
        if (M2C_FIELD(data_020ab380, s32 *, 0x4C) != 0) {
            func_02049adc(data_020ab380 + 0x4C);
        }
        if (M2C_FIELD(data_020ab380, s32 *, 0x48) != 0) {
            func_02049ac8(data_020ab380 + 0x48);
        }
        M2C_FIELD(data_020ab380, s32 *, 0x1C) = 0x63;
    }
}
