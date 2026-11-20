#include "m2c.h"

extern M2C_UNK data_02185160;
extern s32 data_02186534;

void func_020d2104(s32 arg0) {
    if ((u32) (M2C_FIELD(&data_02185160, s32 *, 0x14) - 9) > 1U) {
        data_02186534 = arg0;
    }
}
