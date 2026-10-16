#include "m2c.h"

s32 func_02060ebc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xF04) != 0) {
        return 1;
    }
    return 0;
}
