#include "m2c.h"

extern void *data_020d1d24;

u8 func_02044c50(void) {
    if (data_020d1d24 != NULL) {
        return M2C_FIELD(data_020d1d24, u8 *, 6);
    }
    return 0U;
}
