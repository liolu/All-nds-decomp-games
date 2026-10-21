#include "m2c.h"

void *func_02090a40();                              /* extern */

u8 func_0208a934(void) {
    if (func_02090a40() == NULL) {
        return 0U;
    }
    return M2C_FIELD(func_02090a40(), u8 *, 0xD);
}
