#include "m2c.h"

extern M2C_UNK data_0208483c;

void *func_020386b0(void *arg0) {
    return (M2C_UNK *) ((s8 *) &data_0208483c + (M2C_FIELD(arg0, s32 *, 4) * 0x10));
}
