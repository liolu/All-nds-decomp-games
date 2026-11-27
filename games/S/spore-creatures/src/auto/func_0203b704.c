#include "m2c.h"

M2C_UNK func_0203a8e4();                            /* extern */
extern M2C_UNK data_020decdc;

void *func_0203b704(void *arg0) {
    func_0203a8e4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020decdc;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 4;
    M2C_FIELD(arg0, s8 *, 0x26)    = 0x68;
    return arg0;
}
