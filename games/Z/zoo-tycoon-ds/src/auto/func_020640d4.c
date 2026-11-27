#include "m2c.h"

extern M2C_UNK data_02182f20;

u16 func_020640d4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02182f20 + (arg0 * 0x1C)));
}
