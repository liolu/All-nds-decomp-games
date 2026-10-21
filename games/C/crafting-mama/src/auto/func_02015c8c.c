#include "m2c.h"

extern M2C_UNK data_02093fd0;

u16 func_02015c8c(void) {
    return M2C_FIELD(M2C_FIELD(&data_02093fd0, void **, 0xC), u16 *, 0xC);
}
