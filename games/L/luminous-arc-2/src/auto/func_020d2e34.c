#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_020d2e8c();                                /* extern */
extern M2C_UNK data_021472c4;
extern M2C_UNK data_02185160;

void func_020d2e34(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020d2104();
        func_020d2084(9);
        return;
    }
    if (func_020d2e8c() != 0) {
        return;
    }
    if (M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *), 0x1C) != NULL) {
        M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *), 0x1C)(&data_021472c4);
    }
    func_020d2084(9);
}
