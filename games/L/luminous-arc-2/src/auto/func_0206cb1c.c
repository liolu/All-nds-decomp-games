#include "m2c.h"

M2C_UNK func_02023ad8(void *);                      /* extern */
M2C_UNK func_0206f0d0();                            /* extern */
extern M2C_UNK data_0211951c;
extern M2C_UNK data_02119530;

void *func_0206cb1c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0211951c;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_02119530;
    func_0206f0d0(arg0);
    func_02023ad8(arg0);
    return arg0;
}
