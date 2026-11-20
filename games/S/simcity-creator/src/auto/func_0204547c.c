#include "m2c.h"

s32 func_02044430();                                /* extern */
M2C_UNK func_02044cd4();                            /* extern */

void func_0204547c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x470) = 1;
    if (func_02044430() == 1) {
        func_02044cd4();
        return;
    }
    if (func_02044430() == 0) {
        M2C_FIELD(arg0, s32 *, 0x470) = 3;
    }
}
