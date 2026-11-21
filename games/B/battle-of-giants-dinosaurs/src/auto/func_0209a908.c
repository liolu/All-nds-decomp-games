#include "m2c.h"

M2C_UNK func_0209a584();                            /* extern */
M2C_UNK func_0209a638(void *);                      /* extern */
M2C_UNK func_0209a944(void *);                      /* extern */
extern M2C_UNK data_020bfffc;
extern M2C_UNK data_020c0038;

void *func_0209a908(void *arg0) {
    func_0209a584();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfffc;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020c0038;
    func_0209a638(arg0 + 0x18);
    func_0209a944(arg0);
    return arg0;
}
