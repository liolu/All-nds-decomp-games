#include "m2c.h"

extern void *data_02110648;
extern M2C_UNK data_021d4480;

s32 func_020a0b0c(void) {
    if ((s32) M2C_FIELD(&data_021d4480, s32 *, 0x20) < (s32) M2C_FIELD(&data_021d4480, s32 *, 0x18)) {
        return -1;
    }
    M2C_FIELD(data_02110648, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&data_021d4480, s32 *, 0));
    M2C_FIELD(&data_021d4480, s32 *, 0) = 0;
    return 0;
}
