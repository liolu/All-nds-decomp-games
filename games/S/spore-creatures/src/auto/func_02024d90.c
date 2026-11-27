#include "m2c.h"

M2C_UNK func_02024b1c(void *, s32, s32, s32, s32, s32); /* extern */
s32 func_02056fe0(s32);                             /* extern */

void func_02024d90(void *arg0, s32 arg1, s32 arg2) {
    func_02024b1c(arg0, func_02056fe0(M2C_FIELD(arg0, s32 *, 0)), M2C_FIELD(arg0, s32 *, 0x38), M2C_FIELD(arg0, s32 *, 0x34),
                  arg1, arg2);
}
