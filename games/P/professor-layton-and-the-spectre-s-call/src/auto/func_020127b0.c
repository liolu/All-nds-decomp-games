#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020348d0;

s32 func_020127b0(void) {
    return (s32) M2C_FIELD(M2C_FIELD(&data_020348d0, void **, 0xC), u16 *, 0xC);
}
