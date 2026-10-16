#include "m2c.h"

extern M2C_UNK data_02076a30;

u16 func_02042ea4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02076a30 + (arg0 * 2)));
}
