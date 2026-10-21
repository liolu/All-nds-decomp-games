#include "m2c.h"

M2C_UNK func_0204272c(M2C_UNK);                     /* extern */
M2C_UNK func_020457a0();                            /* extern */
extern M2C_UNK data_02160ab0;

void func_020426e0(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02160ab0, s32 *, 0xC) == 0) {
        func_020457a0();
        if (M2C_FIELD(&data_02160ab0, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02160ab0, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02160ab0, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_0204272c(arg0);
}
