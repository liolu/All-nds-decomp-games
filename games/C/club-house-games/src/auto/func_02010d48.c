#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021a3cc0;

s32 func_02010d48(void) {
    return (s32) M2C_FIELD(&data_021a3cc0, u8 *, 0x3E);
}
