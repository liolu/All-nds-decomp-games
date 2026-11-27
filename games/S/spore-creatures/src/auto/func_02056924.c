#include "m2c.h"

M2C_UNK func_020569e4(s32);                         /* extern */

void func_02056924(void *arg0) {
    func_020569e4(arg0 + 0x18);
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) & ~4);
}
