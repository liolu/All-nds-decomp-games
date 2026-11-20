#include "m2c.h"

extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_021242c0;
extern M2C_UNK **data_0215d6f0;

void func_02038094(M2C_UNK **arg0) {
    *arg0         = &data_020ffeb4;
    *arg0         = &data_021242c0;
    data_0215d6f0 = arg0;
}
