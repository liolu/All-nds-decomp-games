#include "m2c.h"

extern void *data_020ca030;

void func_020665fc(s32 arg0) {
    if (data_020ca030 != NULL) {
        M2C_FIELD(data_020ca030, s32 *, 0x40) = arg0;
    }
}
