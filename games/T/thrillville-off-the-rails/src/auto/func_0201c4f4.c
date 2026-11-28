#include "m2c.h"

extern void *data_020ec288;

s32 func_0201c4f4(void) {
    if (M2C_FIELD(data_020ec288, u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
