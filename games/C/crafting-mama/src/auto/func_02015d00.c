#include "m2c.h"

extern M2C_UNK data_02093fd0;

s32 func_02015d00(void) {
    if (M2C_FIELD(M2C_FIELD(&data_02093fd0, void **, 0xC), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
