#include "m2c.h"

extern M2C_UNK data_0209fb64;

s32 func_020386ac(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0209fb64 + (arg0 * 4)));
}
