#include "m2c.h"

M2C_UNK func_020a4c5c();                            /* extern */
extern M2C_UNK data_020bf920;
extern M2C_UNK data_020bf95c;

void *func_020a5274(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf920;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020bf95c;
    func_020a4c5c(arg0);
    return arg0;
}
