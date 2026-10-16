#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020dafa0;

void func_02044410(s32 arg0) {
    M2C_FIELD(&data_020dafa0, s32 *, 0xA8) = arg0;
}
