#include "m2c.h"

extern void *data_02170354;

u8 func_02085394(void) {
    if (data_02170354 != NULL) {
        return M2C_FIELD(data_02170354, u8 *, 0x2C);
    }
    return 0U;
}
