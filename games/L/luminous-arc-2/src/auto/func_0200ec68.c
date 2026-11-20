#include "m2c.h"

extern M2C_UNK data_02149a20;

s32 func_0200ec68(void) {
    if (!(M2C_FIELD(&data_02149a20, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
