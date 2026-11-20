#include "m2c.h"

void *func_02060f48();                              /* extern */
M2C_UNK func_02060f58();                            /* extern */

u16 func_02060e24(void) {
    func_02060f58();
    return M2C_FIELD(func_02060f48(), u16 *, 4);
}
