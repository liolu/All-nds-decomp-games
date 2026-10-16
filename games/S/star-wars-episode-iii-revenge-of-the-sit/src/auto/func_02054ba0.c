#include "m2c.h"

extern void *data_020b3cf8;

u16 func_02054ba0(void) {
    return M2C_FIELD(data_020b3cf8, u16 *, 0xC);
}
