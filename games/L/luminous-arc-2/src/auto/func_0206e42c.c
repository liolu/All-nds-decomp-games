#include "m2c.h"

void *func_0206ee30();                              /* extern */

s32 func_0206e42c(void) {
    void *temp_r0;

    temp_r0 = func_0206ee30();
    if (temp_r0 == NULL) {
        return -0x42;
    }
    if (M2C_FIELD(temp_r0, u8 *, 1) == 1) {
        return 1;
    }
    return 0;
}
