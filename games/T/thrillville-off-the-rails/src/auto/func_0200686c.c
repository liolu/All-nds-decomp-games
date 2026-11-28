#include "m2c.h"

M2C_UNK func_020059e8();                            /* extern */
M2C_UNK func_020743e8(void *);                      /* extern */

s32 func_0200686c(void *arg0) {
    if (arg0 == NULL) {
        return -0x66;
    }
    if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
        func_020059e8(arg0);
    }
    if (arg0 != NULL) {
        func_020743e8(arg0);
    }
    return 0;
}
