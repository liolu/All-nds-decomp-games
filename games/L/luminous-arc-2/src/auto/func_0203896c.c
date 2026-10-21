#include "m2c.h"

s32 func_02002aac();                                /* extern */
extern void *data_0216bc50;

s32 func_0203896c(void) {
    if (M2C_FIELD(data_0216bc50, s32 *, 0xDC) == 0) {
        return 0x06600000;
    }
    return func_02002aac();
}
