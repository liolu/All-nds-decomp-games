#include "m2c.h"

s32 func_020a0a78(s32);                             /* extern */
s32 func_020a0dac(M2C_UNK *);                       /* extern */
extern void *data_02110648;
extern M2C_UNK data_02110680;
extern M2C_UNK data_021d4440;

s32 func_020a0840(void) {
    s32 temp_r0;

    temp_r0 = func_020a0a78(M2C_FIELD(data_02110648, s32 *, 0x20));
    if (temp_r0 >= 0) {
        M2C_FIELD(&data_021d4440, s32 *, 0xC) = func_020a0dac(&data_02110680);
    }
    return temp_r0;
}
