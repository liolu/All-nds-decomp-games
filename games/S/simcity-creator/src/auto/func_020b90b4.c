#include "m2c.h"

extern M2C_UNK data_020d0a94;
extern M2C_UNK data_02163908;

s8 func_020b90b4(void) {
    return ((s8 *) &data_020d0a94)[M2C_FIELD(&data_02163908, s8 *, 2)];
}
