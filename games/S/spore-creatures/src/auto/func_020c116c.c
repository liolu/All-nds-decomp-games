#include "m2c.h"

M2C_UNK func_020c11b8(M2C_UNK);                     /* extern */
M2C_UNK func_020cf80c();                            /* extern */
extern M2C_UNK data_020f4950;

void func_020c116c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020f4950, s32 *, 0xC) == 0) {
        func_020cf80c();
        if (M2C_FIELD(&data_020f4950, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020f4950, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020f4950, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_020c11b8(arg0);
}
