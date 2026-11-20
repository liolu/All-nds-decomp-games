#include "m2c.h"

extern M2C_UNK data_0217024c;

s32 func_0207b9f4(s32 arg0) {
    if (arg0 & 1) {
        return M2C_FIELD(&data_0217024c, s32 *, 0xC);
    }
    if (arg0 & 2) {
        return M2C_FIELD(&data_0217024c, s32 *, 0);
    }
    if (arg0 & 4) {
        return M2C_FIELD(&data_0217024c, s32 *, 4);
    }
    if (arg0 & 8) {
        return M2C_FIELD(&data_0217024c, s32 *, 8);
    }
    if (arg0 & 0x10) {
        return M2C_FIELD(&data_0217024c, s32 *, 0x10);
    }
    return 0;
}
