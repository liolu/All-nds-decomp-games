#include "m2c.h"

extern void *data_02096c80;

s32 func_02025adc(void) {
    return M2C_FIELD(data_02096c80, s32 *, 0x1C);
}
