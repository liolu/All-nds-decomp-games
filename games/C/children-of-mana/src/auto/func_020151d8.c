/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020147a8();                            /* extern */
M2C_UNK func_02074664();                         /* extern */
extern M2C_UNK data_020fb100;

void *func_020151d8(void *arg0) {
    func_020147a8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fb100;
    M2C_FIELD(arg0, s32 *, 0x8C)   = -1;
    func_02074664(arg0 + 0x88);
    return arg0;
}
