#include "m2c.h"

s32 func_02046db8(void *arg0, s32 arg1) {
    return ((s32) M2C_FIELD(arg0, u16 *, 0xBA10) >> arg1) & 1;
}
