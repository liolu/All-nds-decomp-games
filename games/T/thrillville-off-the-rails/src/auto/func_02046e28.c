#include "m2c.h"

extern M2C_UNK data_020e0a50;
extern M2C_UNK **data_020efd98;

void func_02046e28(M2C_UNK **arg0) {
    *arg0         = &data_020e0a50;
    data_020efd98 = arg0;
}
