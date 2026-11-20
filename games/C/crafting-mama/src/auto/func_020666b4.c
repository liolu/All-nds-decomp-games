#include "m2c.h"

extern void *data_020ca030;

s32 func_020666b4(void) {
    if (data_020ca030 != NULL) {
        return M2C_FIELD(data_020ca030, s32 *, 0x44);
    }
    return 0;
}
