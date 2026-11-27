#include "m2c.h"

M2C_UNK func_020674ec(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020df9f4;

void *func_02078af4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df9f4;
    func_020674ec(M2C_FIELD(arg0, s32 *, 0x44), 0x1E);
    return arg0;
}
