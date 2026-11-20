#include "m2c.h"

extern void *data_020ded58;

u16 func_02070608(void) {
    return M2C_FIELD(data_020ded58, u16 *, 0xC);
}
