#include "m2c.h"

M2C_UNK func_020433b4();                            /* extern */
s32 func_0200f988(M2C_UNK *);                       /* extern */
extern M2C_UNK func_020439d8;

s32 func_020439b0(void) {
    if (func_0200f988(&func_020439d8) == 2) {
        return 1;
    }
    func_020433b4();
    return 0;
}
