#include "m2c.h"

s32 func_020173e4();                                /* extern */
extern M2C_UNK data_020309d8;

s32 func_02015798(void) {
    return *((M2C_UNK *) ((s8 *) &data_020309d8 + (func_020173e4() * 4)));
}
