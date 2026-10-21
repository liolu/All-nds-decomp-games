#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern u8 data_02158048;

void func_0204b3b4(void) {
    if (func_020cab60() == 0) {
        return;
    }
    data_02158048 += 1;
}
