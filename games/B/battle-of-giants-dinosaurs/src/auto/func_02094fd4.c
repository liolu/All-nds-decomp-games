#include "m2c.h"

M2C_UNK func_02000e80(); /* extern */
M2C_UNK func_02094fc8();                      /* extern */
M2C_UNK func_020a4f60();                      /* extern */

void *func_02094fd4(void *arg0) {
    func_02094fc8();
    func_02094fc8(arg0);
    func_02000e80(4, M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    func_020a4f60(arg0);
    return arg0;
}
