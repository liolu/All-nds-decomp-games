#include "m2c.h"

extern void *data_02097640;

u16 func_02028d74(void) {
    if (data_02097640 == NULL) {
        return 0U;
    }
    return M2C_FIELD(data_02097640, u16 *, 0xE);
}
