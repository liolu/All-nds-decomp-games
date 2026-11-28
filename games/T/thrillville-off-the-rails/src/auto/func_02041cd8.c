#include "m2c.h"

extern M2C_UNK data_020e0698;
extern M2C_UNK **data_020efcac;

void func_02041cd8(M2C_UNK **arg0) {
    *arg0         = &data_020e0698;
    data_020efcac = arg0;
}
