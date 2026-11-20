#include "m2c.h"

void func_02086344(void **arg0, void **arg1, void *arg2) {
    M2C_FIELD(*arg0, void ***, 4) = arg1;
    *arg1                         = *arg0;
    *arg0                         = arg2;
    M2C_FIELD(arg2, void ***, 4)  = arg0;
}
