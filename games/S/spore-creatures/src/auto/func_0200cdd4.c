#include "m2c.h"

s32 func_0200618c(s32);                             /* extern */
M2C_UNK func_0200d158(void *);                      /* extern */
M2C_UNK func_02066fa4(M2C_UNK, M2C_UNK);            /* extern */

void func_0200cdd4(void *arg0, s32 arg1) {
    func_02066fa4(0x67, 0);
    if (func_0200618c(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC4) = arg1;
    }
    func_0200d158(arg0);
}
