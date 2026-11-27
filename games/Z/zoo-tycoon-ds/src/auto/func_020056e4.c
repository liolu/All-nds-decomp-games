#include "m2c.h"

extern s32 data_0217fb40;
extern M2C_UNK data_0217fb54;

s32 func_020056e4(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        if ((M2C_FIELD(arg0, u8 *, 0xE) == 1) && (data_0217fb40 != M2C_FIELD(&data_0217fb54, u16 *, 4))) {
            return 1;
        }
        return 0;
    }
    if (data_0217fb40 != M2C_FIELD(&data_0217fb54, u16 *, 4)) {
        return 1;
    }
    return 0;
}
