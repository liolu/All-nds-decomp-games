#include "m2c.h"

extern M2C_UNK data_020e365c;
extern M2C_UNK **data_020fc264;

void func_02098194(M2C_UNK **arg0) {
    *arg0         = &data_020e365c;
    data_020fc264 = arg0;
}
