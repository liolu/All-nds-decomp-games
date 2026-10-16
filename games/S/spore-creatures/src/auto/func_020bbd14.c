#include "m2c.h"

extern M2C_UNK data_020f3990;

u16 func_020bbd14(void) {
    return M2C_FIELD(&data_020f3990, u16 *, 0x10);
}
