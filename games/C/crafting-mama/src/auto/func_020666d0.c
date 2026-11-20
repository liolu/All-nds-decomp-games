#include "m2c.h"

extern void *data_020ca030;

void func_020666d0(s32 arg0, s32 arg1) {
    if (data_020ca030 == NULL) {
        return;
    }
    if (arg0 == 0) {
        M2C_FIELD(data_020ca030, s32 *, 0x48) = arg1;
    }
    if (arg0 == 1) {
        M2C_FIELD(data_020ca030, s32 *, 0x4C) = arg1;
    }
}
