#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
s32 func_0200f7b0(M2C_UNK *);                       /* extern */
M2C_UNK func_02043350(M2C_UNK);                     /* extern */
extern M2C_UNK data_020dafa0;
extern M2C_UNK func_020443e8;

s32 func_02044cd4(void) {
    if (M2C_FIELD(&data_020dafa0, s32 *, 0x38) != 1) {
        func_02006964();
    }
    func_02043350(3);
    if (func_0200f7b0(&func_020443e8) == 2) {
        return 1;
    }
    func_02043350(9);
    return 0;
}
