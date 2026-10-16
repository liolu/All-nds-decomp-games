#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02034de0;

void func_02018230(s32 arg0) {
    M2C_FIELD(&data_02034de0, s32 *, 0x24) = arg0;
}
