#include "m2c.h"

M2C_UNK func_0206fed8(M2C_UNK);                     /* extern */
M2C_UNK func_02075e60();                            /* extern */
extern M2C_UNK data_02092b08;

void func_0206fe8c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02092b08, s32 *, 0xC) == 0) {
        func_02075e60();
        if (M2C_FIELD(&data_02092b08, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02092b08, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02092b08, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_0206fed8(arg0);
}
