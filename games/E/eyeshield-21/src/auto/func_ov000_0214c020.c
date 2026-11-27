#include "m2c.h"

M2C_UNK func_ov000_02145c3c();                            /* extern */
extern M2C_UNK data_ov000_0215e8e0;

void *func_ov000_0214c020(void *arg0) {
    func_ov000_02145c3c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov000_0215e8e0;
    M2C_FIELD(arg0, s32 *, 0xB8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xDC)   = 0;
    return arg0;
}
