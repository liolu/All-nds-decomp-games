#include "m2c.h"

M2C_UNK func_020444d0(void *);                      /* extern */
M2C_UNK func_020444e4(void *);                      /* extern */
M2C_UNK func_020444f8(void *);                      /* extern */
M2C_UNK func_0204450c(void *);                      /* extern */

void *func_02044488(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)   = 0x1000;
    M2C_FIELD(arg0, s32 *, 4)   = 0x1000;
    M2C_FIELD(arg0, s32 *, 8)   = 0x1000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x1000;
    func_0204450c(arg0 + 0x10);
    func_020444f8(arg0 + 0x1C);
    func_020444e4(arg0 + 0x28);
    func_020444d0(arg0 + 0x34);
    return arg0;
}
