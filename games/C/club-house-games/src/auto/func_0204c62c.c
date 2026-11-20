#include "m2c.h"

extern M2C_UNK data_02199c7c;

u16 func_0204c62c(s32 arg0) {
    return M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_02199c7c + (arg0 * 4))), u16 *, 0);
}
