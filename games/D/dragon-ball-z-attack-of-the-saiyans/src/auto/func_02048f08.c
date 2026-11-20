#include "engine.h"
#include "m2c.h"

extern void *data_020d1d24;

s32 func_02048f08(void) {
    if (M2C_FIELD(data_020d1d24, s32 *, 0x10) == 0x0) {
        return 1;
    }
    return 0;
}
