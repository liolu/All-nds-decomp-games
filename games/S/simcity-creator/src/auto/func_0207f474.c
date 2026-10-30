#include "m2c.h"

M2C_UNK func_0207f4b0();                            /* extern */
M2C_UNK func_0207fb4c(void *);                      /* extern */

void func_0207f474(void *arg0, s32 arg1) {
    if (arg1 == 3) {
        func_0207f4b0();
    }
    if (arg1 != 5) {
        return;
    }
    func_0207fb4c(arg0);
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
}
