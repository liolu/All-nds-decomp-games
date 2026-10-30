#include "m2c.h"

M2C_UNK func_0204bfa8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a5018(s32);                         /* extern */
s32 func_020a69cc(s32);                             /* extern */

void func_0204a450(void *arg0) {
    func_020a5018(M2C_FIELD(arg0, s32 *, 0x37934));
    if (func_020a69cc(M2C_FIELD(arg0, s32 *, 0x37934)) != 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xA30) = 0;
    M2C_FIELD(arg0, s32 *, 0xA2C) = 1;
    func_0204bfa8(arg0, 0x13);
}
