#include "m2c.h"

s32 func_02019ae0();                                /* extern */
extern M2C_UNK data_020da4cc;

s32 func_02019b08(void) {
    return *((M2C_UNK *) ((s8 *) &data_020da4cc + (func_02019ae0() * 4)));
}
