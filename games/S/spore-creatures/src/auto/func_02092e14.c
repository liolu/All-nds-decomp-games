#include "m2c.h"

M2C_UNK func_0208f438();                            /* extern */
M2C_UNK func_0209c6b0(s32);                         /* extern */
M2C_UNK func_020bb84c();                            /* extern */

void *func_02092e14(void *arg0) {
    func_0208f438();
    func_0209c6b0(arg0 + 0xC);
    func_0209c6b0(arg0 + 0x4C);
    func_020bb84c();
    M2C_FIELD(arg0, s8 *, 0x8D) = 1;
    M2C_FIELD(arg0, s8 *, 0x8C) = 0;
    M2C_FIELD(arg0, s8 *, 0x8E) = 0;
    return arg0;
}
