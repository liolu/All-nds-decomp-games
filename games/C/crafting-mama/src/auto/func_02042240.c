#include "m2c.h"

void *func_02041f60();                              /* extern */

u16 func_02042240(void) {
    void *temp_r0;

    temp_r0 = func_02041f60();
    if (temp_r0 == NULL) {
        return 0U;
    }
    return *M2C_FIELD(temp_r0, u16 **, 0x1C);
}
