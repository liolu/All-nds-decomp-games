/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bdae8;
extern M2C_UNK data_020bf39c;

void *func_02025344(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf39c;
    func_02002744();
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_020bdae8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bcd20;
    return arg0;
}
