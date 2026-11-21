#include "m2c.h"

M2C_UNK func_02000e80(); /* extern */
M2C_UNK func_0209a0e4();                      /* extern */
M2C_UNK func_020a4f38();                      /* extern */

void *func_0209a0ac(void *arg0) {
    func_0209a0e4();
    func_0209a0e4(arg0);
    func_02000e80(4, M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    func_020a4f38(arg0);
    return arg0;
}
