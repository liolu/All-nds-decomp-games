#include "m2c.h"

M2C_UNK func_020116b8(M2C_UNK);                     /* extern */
M2C_UNK func_0201beb4();                            /* extern */
extern M2C_UNK data_020d4790;

void func_0201166c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020d4790, s32 *, 0xC) == 0) {
        func_0201beb4();
        if (M2C_FIELD(&data_020d4790, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020d4790, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020d4790, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_020116b8(arg0);
}
