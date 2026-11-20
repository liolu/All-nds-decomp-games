#include "m2c.h"

M2C_UNK func_02015fa0();                            /* extern */
extern M2C_UNK data_020dea34;

void *func_02030104(void *arg0) {
    func_02015fa0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dea34;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    return arg0;
}
