#include "m2c.h"

extern M2C_UNK data_020e5fc4;
extern M2C_UNK **data_020fc250;

void func_020ba37c(M2C_UNK **arg0) {
    *arg0         = &data_020e5fc4;
    data_020fc250 = arg0;
}
