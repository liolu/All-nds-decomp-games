#include "m2c.h"

extern void *data_020ab2d8;

s32 func_02045bc0(void) {
    if (data_020ab2d8 == NULL) {
        return 0;
    }
    return M2C_FIELD(data_020ab2d8, s32 *, 0x40);
}
