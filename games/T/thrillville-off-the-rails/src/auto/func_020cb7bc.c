#include "m2c.h"

extern M2C_UNK data_020e7798;
extern M2C_UNK **data_020fd278;

void func_020cb7bc(M2C_UNK **arg0) {
    *arg0         = &data_020e7798;
    data_020fd278 = arg0;
}
