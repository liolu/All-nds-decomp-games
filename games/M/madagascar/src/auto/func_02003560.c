#include "m2c.h"

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcee4;
extern s8 data_020cf830;
extern s32 data_020cf838;

void func_02003560(M2C_UNK **arg0) {
    *arg0         = &data_020bcee4;
    data_020cf838 = 0;
    data_020cf830 = 0;
    *arg0         = &data_020bcd20;
}
