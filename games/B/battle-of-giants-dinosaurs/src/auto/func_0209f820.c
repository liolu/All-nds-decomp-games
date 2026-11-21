#include "m2c.h"

M2C_UNK func_02083d6c(void *);                      /* extern */
M2C_UNK func_02083d80(void *, s32);                 /* extern */
M2C_UNK func_02083dc0(void *, s32);                 /* extern */

s32 func_0209f820(void *arg0) {
    s32 temp_r4;

    temp_r4                      = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    func_02083d80(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 0x2C));
    func_02083d6c(arg0 + 0x1C);
    func_02083dc0(arg0 + 0x3C, M2C_FIELD(arg0, s32 *, 0x4C));
    func_02083d6c(arg0 + 0x3C);
    return temp_r4;
}
