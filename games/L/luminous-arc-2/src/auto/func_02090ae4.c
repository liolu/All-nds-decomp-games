#include "m2c.h"

extern M2C_UNK data_02170c74;

s32 func_02090ae4(void) {
    if ((s32) M2C_FIELD(&data_02170c74, s32 *, 4) < 0x6000) {
        return 1;
    }
    return 0;
}
