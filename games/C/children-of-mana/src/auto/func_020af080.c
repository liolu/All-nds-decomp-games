#include "m2c.h"

M2C_UNK func_02010b2c(M2C_UNK *, M2C_UNK);          /* extern */
extern s8 data_02127e88;
extern M2C_UNK data_02127ea0;

void func_020af080(M2C_UNK arg0) {
    data_02127e88 = 1;
    func_02010b2c(&data_02127ea0, arg0);
}
