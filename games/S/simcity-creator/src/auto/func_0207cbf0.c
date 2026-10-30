#include "m2c.h"

u8 func_0207cbf0(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x1150);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, u8 *, 0x34);
    }
    return 0U;
}
