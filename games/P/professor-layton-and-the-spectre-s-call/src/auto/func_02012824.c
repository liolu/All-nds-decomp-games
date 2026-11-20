#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020348d0;

s32 func_02012824(void) {
    if (M2C_FIELD(M2C_FIELD(&data_020348d0, void **, 0xC), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
