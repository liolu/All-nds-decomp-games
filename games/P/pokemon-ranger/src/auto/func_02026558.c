#include "m2c.h"

extern M2C_UNK data_020dd784;

s32 func_02026558(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020dd784 + (M2C_FIELD(arg0, s32 *, 0xE1F8) * 4)));
}
