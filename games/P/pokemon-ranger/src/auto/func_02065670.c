#include "m2c.h"

u16 func_02065670(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x34);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, u16 *, 0x334);
    }
    return 0U;
}
