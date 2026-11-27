#include "m2c.h"

M2C_UNK func_0204e00c(void *);                      /* extern */
M2C_UNK func_02055ca4();                            /* extern */

void func_0204dfb4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x1BC) != arg1) {
        func_02055ca4();
    }
    func_0204e00c(arg0);
}
