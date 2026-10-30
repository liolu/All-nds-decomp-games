#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_02043dac();                                /* extern */
s32 func_02043e64();                                /* extern */
extern M2C_UNK data_020cafb0;
extern M2C_UNK data_020dafa0;

void func_02043d20(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020433b4();
        return;
    }
    func_02043350(1);
    if (M2C_FIELD(&data_020dafa0, u16 *, 0xC) == 0) {
        return;
    }
    if (M2C_FIELD(&data_020dafa0, s32 *, 0x10) != 0) {
        if (func_02043dac() != 0) {
            return;
        }
        func_02043350(9);
        return;
    }
    if (func_02043e64() != 0) {
        return;
    }
    if (M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *), 0x24) != NULL) {
        M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *), 0x24)(&data_020cafb0);
    }
    func_02043350(9);
}
