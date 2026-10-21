#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern s8 data_02151430;
extern M2C_UNK data_02158048;

void func_02055dd4(void) {
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_02158048, s8 *, 1) = 0x10;
    data_02151430                      = 0;
}
