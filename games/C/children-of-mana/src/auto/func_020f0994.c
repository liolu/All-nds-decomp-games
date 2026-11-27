/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024804();                            /* extern */
extern M2C_UNK data_0210f494;

void *func_020f0994(void *arg0) {
    func_02024804();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210f494;
    M2C_FIELD(arg0, s8 *, 0x2E0)   = 0;
    return arg0;
}
