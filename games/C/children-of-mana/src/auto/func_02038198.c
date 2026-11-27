#include "m2c.h"

s32 func_02038198(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x620) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x53C);
    }
    return M2C_FIELD(arg0, s32 *, 0x534);
}
