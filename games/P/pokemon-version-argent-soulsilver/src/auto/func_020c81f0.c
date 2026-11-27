#include "m2c.h"

extern M2C_UNK data_021dfdec;

u16 func_020c81f0(s32 arg0) {
    return *((u16 *) ((s8 *) &data_021dfdec + (arg0 * 0x24)));
}
