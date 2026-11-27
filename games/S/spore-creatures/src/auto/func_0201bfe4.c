#include "m2c.h"

M2C_UNK func_02019d6c();                            /* extern */
extern M2C_UNK data_020de38c;

void *func_0201bfe4(void *arg0) {
    func_02019d6c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de38c;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    return arg0;
}
