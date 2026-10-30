#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_02043e64();                                /* extern */
extern M2C_UNK data_020cafd8;
extern M2C_UNK data_020dafa0;

void func_02043e0c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020433b4();
        func_02043350(9);
        return;
    }
    if (func_02043e64() != 0) {
        return;
    }
    if (M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *), 0x24) != NULL) {
        M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *), 0x24)(&data_020cafd8);
    }
    func_02043350(9);
}
