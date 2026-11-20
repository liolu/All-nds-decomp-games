#include "m2c.h"

extern void *data_020caef4;

void func_020751f8(s32 arg0) {
    if (data_020caef4 != NULL) {
        M2C_FIELD(data_020caef4, s32 *, 0x40) = arg0;
    }
}
