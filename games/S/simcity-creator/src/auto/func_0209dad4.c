#include "m2c.h"

extern M2C_UNK data_020e1b6c;

void func_0209dad4(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg0 != 0x7F) && (arg1 != 0) && (arg1 != 0x7F)) {
        return;
    }
    M2C_FIELD(&data_020e1b6c, s8 *, 3) = 1;
}
