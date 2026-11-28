#include "m2c.h"

extern M2C_UNK data_020e6f4c;
extern M2C_UNK **data_02102e08;

void func_020c3540(M2C_UNK **arg0) {
    *arg0         = &data_020e6f4c;
    data_02102e08 = arg0;
}
