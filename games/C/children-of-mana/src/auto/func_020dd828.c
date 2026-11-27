#include "m2c.h"

extern M2C_UNK data_0210d1ac;
extern M2C_UNK data_020fab68;
extern s32 data_0212e824;

void func_020dd828(M2C_UNK **arg0) {
    *arg0         = &data_0210d1ac;
    data_0212e824 = 0;
    *arg0         = &data_020fab68;
}
