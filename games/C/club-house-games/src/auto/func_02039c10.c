#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0223c33c;

void func_02039c10(s32 arg0) {
    M2C_FIELD(&data_0223c33c, s8 *, 0x10) = (s8) arg0;
}
