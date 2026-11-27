/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010538(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0210af14;

void *func_020ce2b0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210af14;
    func_02010538(arg0 + 0x10, 0, 0);
    func_02010538(arg0 + 0x20, 0, 0);
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    return arg0;
}
