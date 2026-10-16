#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02034900;

void func_02012658(s32 arg0) {
    M2C_FIELD(&data_02034900, s16 *, 8) = (s16) arg0;
}
