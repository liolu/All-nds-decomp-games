#include "m2c.h"

M2C_UNK func_0208b340(s32);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

void *func_0208ad14(void *arg0) {
    func_0208b340(arg0 + 0x18);
    func_020934a8(M2C_FIELD(arg0, s32 *, 0x14));
    func_020934a8(M2C_FIELD(arg0, s32 *, 0x10));
    return arg0;
}
