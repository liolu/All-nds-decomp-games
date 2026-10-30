#include "m2c.h"

M2C_UNK func_02030450(s32);                         /* extern */

void func_020ae534(void *arg0) {
    func_02030450(arg0 + 0x9C);
    M2C_FIELD(arg0, s32 *, 0xA0) = -1;
}
