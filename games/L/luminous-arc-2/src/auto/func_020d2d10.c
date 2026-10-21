#include "m2c.h"

M2C_UNK func_020d2104();                            /* extern */
s32 func_02011624(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020d2d38;

s32 func_020d2d10(void) {
    if (func_02011624(&func_020d2d38) == 2) {
        return 1;
    }
    func_020d2104();
    return 0;
}
