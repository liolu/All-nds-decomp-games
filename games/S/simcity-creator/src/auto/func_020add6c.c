#include "m2c.h"

void func_020add6c(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + M2C_FIELD(arg0, s16 *, 8));
    M2C_FIELD(arg0, s16 *, 4)   = (s16) M2C_FIELD(arg0, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 6)   = (s16) (M2C_FIELD(arg0, s16 *, 6) - 1);
    if ((s32) M2C_FIELD(arg0, s16 *, 6) <= 4) {
        M2C_FIELD(arg0, s16 *, 0) = 3;
    }
}
