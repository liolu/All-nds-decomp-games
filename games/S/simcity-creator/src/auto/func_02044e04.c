#include "m2c.h"

extern M2C_UNK data_020dd620;

void func_02044e04(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 4) == 0x10) {
        M2C_FIELD(&data_020dd620, s32 *, 0x10) = 2;
    }
}
