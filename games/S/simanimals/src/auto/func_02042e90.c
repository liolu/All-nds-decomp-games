#include "m2c.h"

extern M2C_UNK data_02076a46;

u16 func_02042e90(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02076a46 + (arg0 * 2)));
}
