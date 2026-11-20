#include "m2c.h"

extern void *data_02170354;

s32 func_0208546c(void) {
    if (data_02170354 != NULL) {
        return M2C_FIELD(data_02170354, s32 *, 0x24);
    }
    return 0;
}
