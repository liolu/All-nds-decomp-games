#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0223b974;

void func_02030300(s32 arg0) {
    M2C_FIELD(&data_0223b974, s8 *, 0xC) = (s8) arg0;
}
