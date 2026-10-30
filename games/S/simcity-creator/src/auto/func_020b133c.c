#include "m2c.h"

M2C_UNK func_020b145c(s8);                          /* extern */
extern M2C_UNK data_020d0214;

s32 func_020b133c(u32 arg0, s8 arg1) {
    if (arg0 > 9U) {
        return 0;
    }
    M2C_FIELD(&data_020d0214, s8 *, 1) = arg1;
    M2C_FIELD(&data_020d0214, s8 *, 0) = (s8) arg0;
    func_020b145c(arg1);
    return 1;
}
