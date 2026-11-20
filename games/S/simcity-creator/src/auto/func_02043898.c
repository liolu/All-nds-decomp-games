#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_02010ba0(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_020dbb60;

s32 func_02043898(void) {
    func_02043350(6);
    if (func_02010ba0(&data_020dbb60, 0xD) == 0) {
        return 1;
    }
    func_020433b4();
    return 0;
}
