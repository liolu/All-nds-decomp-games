#include "m2c.h"

M2C_UNK func_020680f8(M2C_UNK);                     /* extern */
M2C_UNK func_0206810c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0206a000(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e10e0;

void func_02067bf8(s32 arg0) {
    if (arg0 != 0) {
        func_020680f8(1);
        return;
    }
    func_0206810c(0, 1);
    func_0206a000(&data_020e10e0);
}
