#include "m2c.h"

extern M2C_UNK data_020a8a20;

u16 func_0203001c(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020a8a20 + (arg0 * 2)));
}
