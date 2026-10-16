#include "m2c.h"

M2C_UNK func_02059190(M2C_UNK);                     /* extern */
M2C_UNK func_02060b1c();                            /* extern */
extern M2C_UNK data_020e5d2c;

void func_02059144(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020e5d2c, s32 *, 0xC) == 0) {
        func_02060b1c();
        if (M2C_FIELD(&data_020e5d2c, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020e5d2c, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020e5d2c, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02059190(arg0);
}
