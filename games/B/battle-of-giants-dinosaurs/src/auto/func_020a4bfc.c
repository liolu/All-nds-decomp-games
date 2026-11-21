#include "m2c.h"

M2C_UNK func_020a4ad8();                            /* extern */
extern M2C_UNK data_020bf590;
extern M2C_UNK data_020bf5cc;

void *func_020a4bfc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf590;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020bf5cc;
    func_020a4ad8(arg0);
    return arg0;
}
