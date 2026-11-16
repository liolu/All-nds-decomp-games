#include "m2c.h"

extern M2C_UNK data_020ddb80;

void func_0208b7d4(s32 arg0) {
    M2C_FIELD(&data_020ddb80, s32 *, 4) = (s32) (M2C_FIELD(&data_020ddb80, s32 *, 4) & ~(1 << arg0));
}
