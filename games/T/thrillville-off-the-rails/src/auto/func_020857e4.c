#include "m2c.h"

M2C_UNK func_02085830(M2C_UNK);                     /* extern */
M2C_UNK func_02091228();                            /* extern */
extern M2C_UNK data_020fbcf8;

void func_020857e4(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020fbcf8, s32 *, 0xC) == 0) {
        func_02091228();
        if (M2C_FIELD(&data_020fbcf8, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020fbcf8, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020fbcf8, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02085830(arg0);
}
