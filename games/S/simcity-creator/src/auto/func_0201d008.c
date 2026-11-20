#include "m2c.h"

M2C_UNK func_0201ca88(s32, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_0201cb50(s32);                             /* extern */

void func_0201d008(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 2;
    func_0201ca88(func_0201cb50(arg0 + 0x1C), 0, arg0 + 0x2C, 1);
}
