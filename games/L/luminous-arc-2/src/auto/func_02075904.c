#include "m2c.h"

void func_02075904(void *arg0, s32 arg1) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x65) * 0x10)), s16 *, 0x80) = (s16) (arg1 * 5);
}
