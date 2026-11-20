#include "m2c.h"

extern M2C_UNK data_02093f08;

u16 func_02010674(void) {
    return M2C_FIELD(&data_02093f08, u16 *, 0x10);
}
