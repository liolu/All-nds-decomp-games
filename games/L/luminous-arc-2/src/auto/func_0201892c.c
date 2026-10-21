#include "m2c.h"

M2C_UNK func_02018978(M2C_UNK);                     /* extern */
M2C_UNK func_02023b18();                            /* extern */
extern M2C_UNK data_02150ed0;

void func_0201892c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02150ed0, s32 *, 0xC) == 0) {
        func_02023b18();
        if (M2C_FIELD(&data_02150ed0, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02150ed0, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02150ed0, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02018978(arg0);
}
