#include "m2c.h"

extern M2C_UNK data_020d215a;

u16 func_02008ba0(s32 arg0) {
    return *((u16 *) ((s8 *) &data_020d215a + (arg0 * 4)));
}
