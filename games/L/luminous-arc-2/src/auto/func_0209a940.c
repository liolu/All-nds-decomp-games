#include "m2c.h"

extern void *data_0211d7ec;
extern M2C_UNK data_02172580;

s32 func_0209a940(void) {
    if ((s32) M2C_FIELD(&data_02172580, s32 *, 0x20) < (s32) M2C_FIELD(&data_02172580, s32 *, 0x18)) {
        return -1;
    }
    M2C_FIELD(data_0211d7ec, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&data_02172580, s32 *, 0));
    M2C_FIELD(&data_02172580, s32 *, 0) = 0;
    return 0;
}
