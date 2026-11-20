#include "m2c.h"

extern u16 data_020960dc;

s32 func_020228d8(void) {
    if (data_020960dc != 0) {
        return 0;
    }
    return 3;
}
