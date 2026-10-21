#include "m2c.h"

extern M2C_UNK data_0214992c;

s32 func_0200cddc(void) {
    if (M2C_FIELD(&data_0214992c, s32 *, 0x1C) != 0) {
        return 0;
    }
    M2C_FIELD(&data_0214992c, s32 *, 0x1C) = 1;
    return 1;
}
