#include "m2c.h"

s16 func_02019870();                                /* extern */
M2C_UNK func_020198f8(M2C_UNK);                     /* extern */

void func_0208f0c4(void *arg0, M2C_UNK arg1) {
    func_020198f8(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_02019870();
}
