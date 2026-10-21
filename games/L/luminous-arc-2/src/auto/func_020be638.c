#include "m2c.h"

s32 func_0201b47c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0212ed38;

void func_020be638(M2C_UNK **arg0, s32 *arg1) {
    M2C_UNK *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 == NULL) {
        *arg0 = &data_0212ed38;
        *arg1 = 0;
        return;
    }
    if (*arg1 != -1) {
        return;
    }
    *arg1 = func_0201b47c(temp_r2) + 1;
}
