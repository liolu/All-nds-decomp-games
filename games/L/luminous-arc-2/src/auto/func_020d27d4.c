#include "m2c.h"

M2C_UNK func_020d2104();                            /* extern */
s32 func_020113a8(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020d27fc;

s32 func_020d27d4(void) {
    if (func_020113a8(&func_020d27fc) == 2) {
        return 1;
    }
    func_020d2104();
    return 0;
}
