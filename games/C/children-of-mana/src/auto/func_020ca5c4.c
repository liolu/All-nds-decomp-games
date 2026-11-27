/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ca568();                            /* extern */
extern M2C_UNK data_0210ab1c;

void *func_020ca5c4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210ab1c;
    M2C_FIELD(arg0, s32 *, 0xC4)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC8)   = 0x3F800000;
    func_020ca568(arg0);
    return arg0;
}
