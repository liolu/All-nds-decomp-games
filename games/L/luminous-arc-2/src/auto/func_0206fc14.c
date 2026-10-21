#include "m2c.h"

extern M2C_UNK data_0216fdb8;

s32 func_0206fc14(void) {
    if (M2C_FIELD(&data_0216fdb8, u8 *, 4) == 1) {
        return 0;
    }
    return -0x5A;
}
