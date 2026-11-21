#include "m2c.h"

M2C_UNK func_02000e80(); /* extern */
M2C_UNK func_02094f60();                      /* extern */
M2C_UNK func_020a4f74();                      /* extern */

void *func_02094f6c(void *arg0) {
    func_02094f60();
    func_02094f60(arg0);
    func_02000e80(4, M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    func_020a4f74(arg0);
    return arg0;
}
