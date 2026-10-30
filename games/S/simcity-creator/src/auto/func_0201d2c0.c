#include "m2c.h"

M2C_UNK func_0201eac4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201f2a8();                            /* extern */
M2C_UNK func_0201f320(void *);                      /* extern */
M2C_UNK func_0201f3b4(void *, M2C_UNK);             /* extern */

void func_0201d2c0(void *arg0, M2C_UNK arg1) {
    func_0201f2a8();
    func_0201f3b4(arg0, arg1);
    func_0201eac4(arg0, arg1);
    func_0201f320(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
}
