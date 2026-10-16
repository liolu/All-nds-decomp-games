#include "m2c.h"

M2C_UNK func_02083ecc();                            /* extern */
extern M2C_UNK data_020dfcf4;

void *func_02083ce8(void *arg0) {
    func_02083ecc();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfcf4;
    M2C_FIELD(arg0, s32 *, 0x1AC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0)  = 0;
    return arg0;
}
