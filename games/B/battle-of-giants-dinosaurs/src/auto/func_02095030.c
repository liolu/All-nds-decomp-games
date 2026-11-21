#include "m2c.h"

M2C_UNK func_02000e80(); /* extern */
M2C_UNK func_02095068();                      /* extern */
M2C_UNK func_020a4f4c();                      /* extern */

void *func_02095030(void *arg0) {
    func_02095068();
    func_02095068(arg0);
    func_02000e80(4, M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    func_020a4f4c(arg0);
    return arg0;
}
