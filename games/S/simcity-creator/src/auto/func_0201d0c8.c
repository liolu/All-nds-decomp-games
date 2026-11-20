#include "m2c.h"

M2C_UNK func_0201ca88(s32, s32, s32, M2C_UNK);      /* extern */
s32 func_0201cb50(s32);                             /* extern */
M2C_UNK func_0201d110(void *, s8);                  /* extern */
s32 func_02021600();                                /* extern */

void func_0201d0c8(void *arg0) {
    if (!(func_02021600() & 1)) {
        return;
    }
    func_0201ca88(func_0201cb50(arg0 + 0x1C), 0x347C, arg0 + 0x34A2, 1);
    func_0201d110(arg0, M2C_FIELD(arg0, s8 *, 0x34A2));
}
