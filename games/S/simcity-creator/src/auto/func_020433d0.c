#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_0200f7f0(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_020db040;
extern M2C_UNK func_02043410;

s32 func_020433d0(void) {
    func_02043350(3);
    if (func_0200f7f0(&func_02043410, &data_020db040) == 2) {
        return 1;
    }
    func_020433b4();
    func_02043350(9);
    return 0;
}
