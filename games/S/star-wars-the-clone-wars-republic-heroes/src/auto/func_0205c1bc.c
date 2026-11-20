#include "m2c.h"

M2C_UNK func_0205c208(M2C_UNK);                     /* extern */
M2C_UNK func_0205e2f8();                            /* extern */
extern M2C_UNK data_020b5e80;

void func_0205c1bc(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020b5e80, s32 *, 0xC) == 0) {
        func_0205e2f8();
        if (M2C_FIELD(&data_020b5e80, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020b5e80, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020b5e80, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_0205c208(arg0);
}
