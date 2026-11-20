#include "m2c.h"

s32 func_02010bc8(M2C_UNK *, s32, M2C_UNK *);       /* extern */
M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
extern M2C_UNK data_020dafa0;
extern M2C_UNK data_020db000;
extern M2C_UNK data_020db040;
extern M2C_UNK func_020434d4;

s32 func_02043474(void) {
    func_02043350(3);
    if (func_02010bc8(&func_020434d4,
                      M2C_FIELD(&data_020dafa0, s32(**)(M2C_UNK *, M2C_UNK *), 0x44)(&data_020db000, &data_020db040),
                      &data_020db000) == 2) {
        return 1;
    }
    func_020433b4();
    func_02043350(9);
    return 0;
}
