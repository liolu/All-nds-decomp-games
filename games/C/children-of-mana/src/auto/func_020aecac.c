#include "m2c.h"

M2C_UNK func_020af550(void *, M2C_UNK);             /* extern */

void func_020aecac(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg1;
    func_020af550(arg0, 0x11);
}
