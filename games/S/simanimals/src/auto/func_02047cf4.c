#include "m2c.h"

extern M2C_UNK data_0208b37c;

u16 func_02047cf4(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0208b37c + (arg0 * 2)));
}
