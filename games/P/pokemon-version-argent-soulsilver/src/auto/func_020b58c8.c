#include "m2c.h"

void func_020b58c8(void *arg0, M2C_UNK *arg1) {
    *arg1                             = M2C_FIELD(arg0, M2C_UNK **, 0x24);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = arg1;
}
