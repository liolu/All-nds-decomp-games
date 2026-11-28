#include "m2c.h"

extern M2C_UNK data_020e2530;
extern M2C_UNK **data_020fbcf4;

void func_02085758(M2C_UNK **arg0) {
    *arg0         = &data_020e2530;
    data_020fbcf4 = arg0;
}
