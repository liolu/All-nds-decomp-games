#include "m2c.h"

extern M2C_UNK data_020d005c;

s32 func_02006330(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d005c + (arg0 * 4)));
}
