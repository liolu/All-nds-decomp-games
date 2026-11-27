#include "m2c.h"

M2C_UNK func_020e4830(M2C_UNK);                     /* extern */
M2C_UNK func_020f4a84();                            /* extern */
extern M2C_UNK data_021e53b0;

void func_020e47e4(M2C_UNK arg0) {
    if (M2C_FIELD(&data_021e53b0, s32 *, 0xC) == 0) {
        func_020f4a84();
        if (M2C_FIELD(&data_021e53b0, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_021e53b0, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_021e53b0, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_020e4830(arg0);
}
