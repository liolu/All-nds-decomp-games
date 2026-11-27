#include "m2c.h"

extern void *data_020d1d24;
extern M2C_UNK func_0201b39c;

s32 func_02048b98(void) {
    M2C_FIELD(data_020d1d24, M2C_UNK **, 0x10) = &func_0201b39c;
    return 1;
}
