#include "m2c.h"

extern u16 data_0211bcf0;

s32 func_02060d88(void) {
    if (data_0211bcf0 != 0) {
        return 0;
    }
    return 3;
}
