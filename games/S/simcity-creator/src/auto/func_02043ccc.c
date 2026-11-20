#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
extern M2C_UNK data_020dafa0;

s32 func_02043ccc(void) {
    if (M2C_FIELD(&data_020dafa0, s32 *, 0x38) != 2) {
        return 0;
    }
    func_02043350(3);
    return 1;
}
