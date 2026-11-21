#include "m2c.h"

M2C_UNK func_0209a464();                            /* extern */
extern M2C_UNK data_020bfbc4;
extern M2C_UNK data_020bfc74;

void *func_0209b830(void *arg0) {
    func_0209a464();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfbc4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020bfc74;
    M2C_FIELD(arg0, s8 *, 0xAE)    = 0;
    return arg0;
}
