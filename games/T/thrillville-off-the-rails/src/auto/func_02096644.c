#include "m2c.h"

extern M2C_UNK data_020e34ec;
extern M2C_UNK **data_020fc2b8;

void func_02096644(M2C_UNK **arg0) {
    *arg0         = &data_020e34ec;
    data_020fc2b8 = arg0;
}
