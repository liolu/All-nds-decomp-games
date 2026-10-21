#include "m2c.h"

extern M2C_UNK data_020f8948;

u16 func_020cd4fc(void) {
    return M2C_FIELD(&data_020f8948, u16 *, 0xC);
}
