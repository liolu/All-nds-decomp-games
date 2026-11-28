#include "m2c.h"

extern M2C_UNK data_020e08fc;
extern M2C_UNK **data_020efd48;

void func_020450f8(M2C_UNK **arg0) {
    *arg0         = &data_020e08fc;
    data_020efd48 = arg0;
}
