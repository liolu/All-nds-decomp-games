#include "m2c.h"

extern M2C_UNK data_02127214;

s32 func_020aa2bc(void) {
    if ((s32) M2C_FIELD(&data_02127214, s32 *, 0x28) < 0xF423F) {
        return 1;
    }
    return 0;
}
