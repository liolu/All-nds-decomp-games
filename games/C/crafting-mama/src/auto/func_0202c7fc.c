#include "m2c.h"

extern void *data_020a7340;

void func_0202c7fc(s32 arg0) {
    if (data_020a7340 != NULL) {
        M2C_FIELD(data_020a7340, s32 *, 0x38) = arg0;
    }
}
