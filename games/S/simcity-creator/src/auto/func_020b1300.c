#include "m2c.h"

M2C_UNK func_020b145c(M2C_UNK);                     /* extern */
extern s8 data_020d0214;

s32 func_020b1300(u32 arg0, M2C_UNK arg1) {
    if (arg0 > 9U) {
        return 0;
    }
    data_020d0214 = (s8) arg0;
    func_020b145c(arg1);
    return 1;
}
