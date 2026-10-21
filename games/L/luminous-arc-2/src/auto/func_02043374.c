#include "m2c.h"

extern M2C_UNK data_02180a4c;

void func_02043374(s8 arg0, s8 arg1) {
    M2C_FIELD(&data_02180a4c, s8 *, 0x715) = arg0;
    M2C_FIELD(&data_02180a4c, s8 *, 0x716) = arg1;
}
