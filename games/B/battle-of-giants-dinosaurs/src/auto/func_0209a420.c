#include "m2c.h"

M2C_UNK func_02000e80(); /* extern */
M2C_UNK func_0209a458();                      /* extern */
M2C_UNK func_020a4f24();                      /* extern */

void *func_0209a420(void *arg0) {
    func_0209a458();
    func_0209a458(arg0);
    func_02000e80(4, M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    func_020a4f24(arg0);
    return arg0;
}
