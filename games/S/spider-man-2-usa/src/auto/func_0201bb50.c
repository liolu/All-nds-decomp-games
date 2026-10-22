/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d99c();                            /* extern */
extern M2C_UNK data_02113620;
extern M2C_UNK data_0212c9c4;
extern M2C_UNK data_0212c9d0;

void *func_0201bb50(void *arg0) {
    func_0201d99c();
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_02113620;
    M2C_FIELD(arg0, M2C_UNK **, 0x614) = &data_0212c9c4;
    M2C_FIELD(arg0, M2C_UNK **, 0x618) = &data_0212c9c4;
    M2C_FIELD(arg0, M2C_UNK **, 0x61C) = &data_0212c9d0;
    return arg0;
}
