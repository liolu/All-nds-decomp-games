#include "m2c.h"

void *func_02050bd0();                              /* extern */

u16 func_02050084(void) {
    return M2C_FIELD(func_02050bd0(), u16 *, 8);
}
