#include "m2c.h"

extern M2C_UNK data_020e6378;
extern M2C_UNK **data_02101b6c;

void func_020bc200(M2C_UNK **arg0) {
    *arg0         = &data_020e6378;
    data_02101b6c = arg0;
}
